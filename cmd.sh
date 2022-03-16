#!/bin/bash
pass_file = /etc/passwd
user_name =$1
read -p "Enter the user : " user_name
grep "^$user_name " $pass_file>dev/null
status=$?
if test $status -eq 0
        echo "User found "
else
        echo "User not found"

