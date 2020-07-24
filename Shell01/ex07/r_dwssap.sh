#!/bin/bash
#FT_LINE1=5 
#FT_LINE2=17

cat /etc/passwd | grep -v # | sed -n 'p;n' | cut -d':' -f1| rev | sort -r | awk -v var1="$FT_LINE1" -v var2="$FT_LINE2" 'NR>=var1&&NR<=var2' | tr '\n' ',' | sed 's_\,_\,\ _g' | sed 's_,.$_\._'
