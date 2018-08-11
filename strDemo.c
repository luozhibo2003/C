//
// Created by luobo on 18-8-10.
//
#include <string.h>
#include <stdio.h>

//字符串操作函数
void strFunDemo(){
    char str1[12] = "Hello";
    char str2[12]="world";
    char str3[12];

    //复制str1 到 str3
    strcpy(str3,str1);
    printf("strcpy(str3,str1) : %s \n",str3);

    //连接 str1 和 str2
    strcat(str1,str2);
    printf("strcat(str1,str2): %s \n",str1);

    //连接后，str1 的总长度
    int lent = strlen(str1);
    printf("strlen(str1):%d \n",lent);

}
