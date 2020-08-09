int first(int arr[], int x, int n)
{
	int low = 0;
	int high = n - 1;
	int res = -1;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;
		if (arr[mid] > x)
			high = mid - 1;
		else if (arr[mid] < x)
			low = mid + 1;
		else {
			res = mid;
			high = mid - 1;
		}
	}
	return res;
}

int last(int arr[], int x, int n)
{
	int low = 0;
	int high = n - 1;
	int res = -1;
	int mid;

	while (low <= high) {

		mid = (low + high) / 2;
		if (arr[mid] > x)
			high = mid - 1;
		else if (arr[mid] < x)
			low = mid + 1;
		else {
			res = mid;
			low = mid + 1;
		}
	}
	return res;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int *res;

    *returnSize = 2;
    res = malloc(2 * sizeof(int));
    res[0] = first(nums, target, numsSize);
	if (res[0] == -1)
	{
		res[1] = -1;
		return (res);
	}

    res[1] = last(nums, target, numsSize);
    return (res);
}