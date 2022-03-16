#!/bin/bash
pass_file =/etc/passwd
read -p "Enter the user name" user_name
grep "^$user_name" $pass_file>/dev/null
status=$?
echo "Status is last comma
