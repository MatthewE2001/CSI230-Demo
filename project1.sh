#!/bin/bash

#project1_page

echo "Project1_page"

#System Information
	#basic system info
echo "Some basic system information: "
echo " "
echo $(uname -a)
echo " "
	#memory information
echo "Information about the memory: "
echo " "
echo $(free -m)
echo " "
	#Disk information
echo "Information about the disks: "
echo " "
echo $(df -h)
echo " "
	#Users and their groups
echo "Information on the users: "
echo " "
echo $(id matthewesslie)
echo $(id alice)
echo $(id bob)
echo $(id charlie)
echo " "
	#The primary IP Address
echo "The IP Address: "
echo " "
echo $(curl http://ifconfig.me/ip)
echo " "
	#Report title
echo "The report title: "
echo "The day is: " $(date) "and you are: " $(whoami)
echo " "
	#Additional Information
echo "Some additional information: "
echo "The hello.sh file is located in: "
echo $(locate projec1.sh)
echo "Some stats on hello.sh: "
echo $(stat project1.sh)

