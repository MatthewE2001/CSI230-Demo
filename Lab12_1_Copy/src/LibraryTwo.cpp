/*
File: LibraryTwo.cpp
Brief: Palindrome Library Driver

Author: Matthew Esslie
Credit: written by https://www.fayewilliams.com/2015/07/07/creating-a-shared-library/
Assignment: Lab 12.1 
Date: November 30, 2020
*/
#include <iostream>
#include <string.h>
#include "Library_Two.h"

using namespace std;

bool isPalindrome(char* word)
{
    bool ret = true;
 
    char *p = word;
    int len = strlen(word);
    char *q = &word[len-1];
 
    for (int i = 0 ; i < len; ++i, ++p, --q)
    {
        if (*p != *q)
        {
            ret = false;
        }
    }
 
    return ret;
}