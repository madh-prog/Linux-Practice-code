#!/bin/bash
read -p "Enter the number : " num
if test "$num" == 0
then
        echo "Number is zero"

else if test "$num" -ge  0
then	
	echo "Number is Positive"
else
	echo " Number is Negative "
fi
