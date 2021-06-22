#!/usr/bin/bash
for j in `ls`
do
    if [ ! -f $j ]; then
    continue
      fi
    lc=`echo $j  | tr '[A-Z]' '[a-z]'`
   if [ $lc != $j ]; then
    mv -i $j $lc
    fi
  done

