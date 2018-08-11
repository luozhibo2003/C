//
// Created by luobo on 18-8-11.
//

#include <stdio.h>
#include <string.h>


/**
 * 位域声明
 * struct
 * {
 * type [member_name] : width ;
 * };
 * type：整数类型，决定了如何解释位域的值。类型可以是整型、有符号整型、无符号整型。
 * member_name：位域的名称
 * width：位域中位的数量。宽度必须小于或等于指定类型的位宽度。
 */

/* 定义简单的结构 */
struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

/* 定义位域结构 */
struct {
    unsigned int widthValidated:1;
    unsigned int heightValidated:1;
} status2;

/*
 * 位域可以存储多于 1 位的数，
 * 例如，需要一个变量来存储从 0 到 7 的值，您可以定义一个宽度为 3 位的位域，如下：
 */

struct {
    unsigned int age:3;
} Age;


void bitDomainDemoTest(){
    printf("位域定义测试方法 \n");
    printf( "Memory size occupied by status1 : %d\n", sizeof(status1));
    printf( "Memory size occupied by status2 : %d\n", sizeof(status2));
}

void bitDomainDemoTest2(){

    Age.age = 4;
    printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
    printf( "Age.age : %d\n", Age.age );

    // 二进制表示为 111 有三位，达到最大值
    Age.age = 7;
    printf( "Age.age : %d\n", Age.age );

    //age 变量将只使用 3 位来存储这个值，如果您试图使用超过 3 位，则无法完成。
    Age.age = 8; // 二进制表示为 1000 有四位，超出
    printf( "Age.age : %d\n", Age.age );
}