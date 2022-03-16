#!/bin/bash
#read -p " Enter any day : " day
#shopt -s nocasematch
#var=$1
#case $var in 
#	[mM]|[tT]|[wW]|[thTH]|[fF])  echo "its working day"
#	;;
#-sa|-su) echo "its weekend "
#	;;
#	*) echo "no suitable day found "
#		;;
#		esac

while :
do
	echo "1.Content of /etc/passwd"
	echo "2.list of user currently logged"
	echo "3.present handling directory"
	echo "4.Exit"
	echo -n "Enter your choice [1-4] : "
	read choice
	case $choice in
	1) echo "Content of /etc/passwd";
	   more/etc/passwd;;
	2) echo "user who currently login";
	   who|more;;
	3) echo "You are in $(pwd) directory";
	  # echo "Press [enter] key to continue";
	  # read enterkey;;
	4) date;;
	5) while:
	   do
	   read -p "Enter number (00 to exit):" n
	   [  $n -eq 00 ] && {echo "Good bye ";  break;} 
	   done;;
	*) echo "$choice is an invalid choice";
	   echo "Press enter to continue"
   	   read enterkey;;
esac
done
				


	
