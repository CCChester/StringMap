/*********************************************** 
 * Name: Chen Chen
 * Student ID: 20518383
 * File: string-map.c 
 * CS 136 Fall 2014 - Assignment 6, Problem 0c
 * Description: 
***********************************************/

// string_map(str, proc) maps proc to each character in str.
// PRE:  str and proc are not NULL
// POST: mutates str by applying proc to each char in str.
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>


void string_map(char *str, char (*proc)(char)) {
    assert (str != NULL);
    assert (proc != NULL);
    int i = 0;
    while (str[i]) {
        str[i]=proc(str[i]);
        ++i;
    }
}

