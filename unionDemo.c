//
// Created by luobo on 18-8-11.
//

#include <stdio.h>
#include <string.h>

union Data{
    int i;
    float f;
    char str[20];
};

/**
 * 共用体占用的内存应足够存储共用体中最大的成员。
 * 例如，在上面的实例中，Data 将占用 20 个字节的内存空间，
 * 因为在各个成员中，字符串所占用的空间是最大的。
 */
void unionTestDemo(){

    printf("共用体占用内存测试");

    union Data data;

    printf("Memory size occupied by data : %d \n", sizeof(data));
}

/**
 * 访问共用体成员
 * 例子输出结果：
 * data.i : 1917853763
 * data.f : 4122360580327794860452759994368.000000
 * data.str : C Programming
 * 我们可以看到共用体的 i 和 f 成员的值有损坏，因为最后赋给变量的值占用了内存位置，这也是 str 成员能够完好输出的原因
 *
 */
void visitUnionDataTest(){

    printf("共用体访问成员变量案例，因为公用一个内存空间，所以值会存在覆盖的情况 \n");

    union Data data;

    data.i = 10;
    data.f = 220.5;
    strcpy(data.str,"C Programming");

    printf( "data.i : %d\n", data.i);
    printf( "data.f : %f\n", data.f);
    printf( "data.str : %s\n", data.str);

}

void visitUnionDataTest2(){

    printf("共用体访问成员变量案例，因为公用一个内存空间，不被覆盖的情况 \n");

    union Data data;

    data.i = 10;
    printf( "data.i : %d\n", data.i);

    data.f = 220.5;
    printf( "data.f : %f\n", data.f);

    strcpy(data.str,"C Programming");
    printf( "data.str : %s\n", data.str);

}
