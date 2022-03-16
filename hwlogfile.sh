#!/bin/bash
LOGGER=/usr/bin/logger
FILE=/home/bkp.sh
OK_MESS= "OK : No Hardware Error Found. "
WARN_MESS= "Error : Hardware Error Found "
if test ! -f "$FILE"
then
	echo " Error - $FILE file not found "
	exit 1
fi
error_log = $(grep -c -i "Hardware Error " $FILE)
if [ $error_log -gt 0 ]
then
	echo "$WARN_MESS" 
else
	echo "$OK_MESS"
fi
