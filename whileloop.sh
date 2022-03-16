#!/bin/bash
file=/etc/passwd
while IFS=: read -r user passwd uid gid home shell
do
	[ $uid -ge 500 ] && echo "User is $user with uid $uid and home is $home"
done<"$file"
