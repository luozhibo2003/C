//
// Created by luobo on 18-8-7.
//
#include <stdio.h>

extern int ext_count ;
int count ;

void write_extern(void){
    printf("extern count is %d\n",ext_count);
    printf("extern count is %d\n",count);
}

