//
// Created by luobo on 18-8-16.
//

#include <stdio.h>
#include <strings.h>


void getcharDemo(){
    int c;
    printf("Enter a value:");
    c = getchar();

    printf("\n You entered:");
    putchar(c);
    printf("\n");

}

/**
 * gets() & puts() 函数
 * char *gets(char *s) 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF。
 * char *gets(char *s) 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF。
 * int puts(const char *s) 函数把字符串 s 和一个尾随的换行符写入到 stdout。
 */
void getsDemo(){

    printf("gets puts 函数测试 \n");

    char str[100];

    printf("Enter a Value : ");
    //gets(str);//linux系统下需要这样编译：不支持 gets 与 puts, 需要用 fgets 和 fputs。

    /**
     * fgets函数原型：char *fgets(char *s, int n, FILE *stream);
     * //我们平时可以这么使用：fgets(str, sizeof(str), stdin);
     * 其中str为数组首地址，
     * sizeof(str)为数组大小，
     * stdin表示我们从键盘输入数据
     */
    fgets( str ,100,stdin); //


    printf("\n you entered \n");
    fputs(str,stdout);
    printf("\n");


}



