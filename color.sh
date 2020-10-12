#!/bin/bash
red='\033[0;31m'
green='\033[0;32m'
yellow='\033[0;33m'
blue='\033[0;34m'
magenta='\033[0;35m'
default='\033[0m'

read -p "what is your favorite color? (red,green,blue,yellow,magenta): " color
color=${color^^}
echo "${color} selected"

case "$color" in
  "RED") selected_color=$red
    echo -e "${selected_color}You selected the color ${color}${default}"
  ;;
  "GREEN") selected_color=$green
    echo -e "${selected_color}You selected the color ${color}${default}"
  ;;
  "YELLOW") selected_color=$yellow
    echo -e "${selected_color}You selected the color ${color}${default}"
  ;;
  "BLUE") selected_color=$blue
    echo -e "${selected_color}You selected the color ${color}${default}"
  ;;
  "MAGENTA") selected_color=$magenta
    echo -e "${selected_color}You selected the color ${color}${default}"
  ;;
  "") echo "You did not select anything!"
  ;;
  *) echo "You did not pick one of the available options!"
    exit 1
  ;;
esac


