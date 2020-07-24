#!/bin/sh

#FT_NBR1=\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"\!\\\"\\\"
#FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
#FT_NBR1=\\\'\?\"\\\"\'\\
#FT_NBR2=rcrdmddd

new1=$(echo "$FT_NBR1" | sed "s_'_0_g" | sed 's_\\_1_g' | sed 's_"_2_g'| sed "s_\?_3_g" | sed "s_!_4_g")
new2=$(echo "$FT_NBR2" | sed 's_m_0_g' | sed 's_r_1_g' | sed 's_d_2_g' | sed 's_o_3_g' | sed 's_c_4_g')

#echo $new1
#echo $new2

sum=$(echo "ibase=5; $new1 + $new2" | bc)
base13=$(echo "obase=13; $sum" | bc)
#echo $base13

result=$(echo "$base13" | tr 0123456789ABC 'gtaio luSnemf')
echo $result
