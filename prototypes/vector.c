
typedef struct vec
{
    unsigned char* _mem;
    unsigned long _elems;
    unsigned long _elemsize;
    unsigned long _capelems;
    unsigned long _reserve;
};

vec* vec_new(unsigned long elemsize)
{
    vec* pvec = malloc(sizeof(vec));
    pvec->_reserve = 10;
    pvec->_capelems = pvec->_reserve;
    pvec->_elemsize = elemsize;
    pvec->_elems = 0;
    pvec->_mem = malloc(pvec->_capelems * pvec->_elemsize);
    return pvec;
}

void vec_delete(vec* pvec)
{
    free(pvec->_mem);
    free(pvec);
}

void vec_grow(vec* pvec)
{
    unsigned char* mem = malloc((pvec->_capelems + pvec->_reserve) * pvec->_elemsize);
    memcpy(mem, pvec->_mem, pvec->_elems * pvec->_elemsize);
    free(pvec->_mem);
    pvec->_mem = mem;
    pvec->_capelems += pvec->_reserve;
}

void vec_push_back(vec* pvec, void* data, unsigned long elemsize)
{
    assert(elemsize == pvec->_elemsize);
    if (pvec->_elems == pvec->_capelems) {
        vec_grow(pvec);
    }
    memcpy(pvec->_mem + (pvec->_elems * pvec->_elemsize), (unsigned char*)data, pvec->_elemsize);
    pvec->_elems++;
}

unsigned long vec_length(vec* pvec)
{
    return pvec->_elems;
}

void* vec_get(vec* pvec, unsigned long index)
{
    assert(index < pvec->_elems);
    return (void*)(pvec->_mem + (index * pvec->_elemsize));
}

void vec_copy_item(vec* pvec, void* dest, unsigned long index)
{
    memcpy(dest, vec_get(pvec, index), pvec->_elemsize);
}

void playwithvec()
{
    vec* pvec = vec_new(sizeof(int));

    for (int val = 0; val < 1000; val += 10) {
        vec_push_back(pvec, &val, sizeof(val));
    }

    for (unsigned long index = (int)vec_length(pvec) - 1; (int)index >= 0; index--) {
        int val;
        vec_copy_item(pvec, &val, index);
        printf("vec(%d) = %d\n", index, val);
    }

    vec_delete(pvec);
}
