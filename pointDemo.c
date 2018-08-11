//
// Created by luobo on 18-8-8.
//

#include <stdio.h>
#include <stdlib.h>


void pDemo1(){

    int  var1;
    char var2[10];

    printf("var1 变量的地址： %p\n", &var1  );
    printf("var2 变量的地址： %p\n", &var2  );

}

/**
 * 定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。
 * 这些是通过使用一元运算符 * 来返回位于操作数所指定地址的变量的值。
 */
void pDemo2(){

    int var = 20; /* 实际变量的声明 */
    int *ip; /* 指针变量的声明 */

    ip = &var; /* 在指针变量中存储 var 的地址 */

    /* 在指针变量中存储的地址 */
    printf("Address of var variable : %p \n",&var);

    /*使用指针访问值*/
    printf("Value of *ip variable : %d \n",*ip);

}

/**
 * NULL 指针
 */
void pNullDemo(){

    int *ptr = NULL;

    printf(" ptr 的地址是 %p \n",ptr);

    /* 如果 p 非空，则完成 */
//    if( ptr ) {
//        printf("ptr指针为空");
//    } else{
//        printf("ptr 指针不为空");
//    }

    //if(!ptr)    /* 如果 p 为空，则完成 */
}

/**
 * 指针的算术运算
 * 递增一个指针
 */
void pCalDemo(){

    int var[] = {10,100,200};
    int i , *ptr;

    /*指针中的数组地址*/
    ptr = var;
    for (int i = 0; i < 3; ++i) {
        printf("存储地址： var[%d] = %x \n",i,ptr);
        printf("存储值：  var[%d] = %d \n",i,*ptr);

        /*移动到下一个位置*/
        ptr++;
    }
}

/**
 * 指针的算术运算
 * 递减一个指针
 *
 */
void pCalDemo2(){
    int var[]={10,100,200};
    int i,*ptr;

    //指针中最后一个元素的地址
    ptr = &var[3-1];
    for (int i = 3; i > 0; i--) {
        printf("存储地址： var[%d] = %x \n",i-1,ptr);
        printf("存储值： var[%d] = %d \n",i-1,*ptr);

        //移动到下一个位置
        ptr--;
    }
}

/**
 * 指针的算术运算 -  指针的比较
 */
void pCalDemo3(){
    int  var[] = {10, 100, 200};
    int  i, *ptr;
    //指针中的第一个元素
    ptr = var;
    i = 0;
    while (ptr < &var[3-1]){
        printf("Address of var[%d] = %x\n", i, ptr );
        printf("Value of var[%d] = %d\n", i, *ptr );
        /* 指向上一个位置 */
        ptr++;
        i++;
    }
}

/**
 * 指针数组
 *
 * 把 ptr 声明为一个数组，由 MAX 个整数指针组成。因此，ptr 中的每个元素，都是一个指向 int 值的指针。
 */

void parrDemo(){

    int var[] = {10,100,200};
    int i ,*ptr[3];

    for (int i = 0; i < 3; ++i) {
        ptr[i] = &var[i];//赋值为整数的地址
    }
    for (int i = 0; i < 3; ++i) {
        printf("value of var[%d] = %d \n",i,*ptr[i]);
    }
    printf("\n\n");
}

/**
 * 用一个指向字符的指针数组来存储一个字符串列表
 */
void parrDemo2(){
    const char *names[] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali",
            "Sara Ali"
    };
    int i = 0;

    for (int i = 0; i < 3; ++i) {
        printf("Value of names[%d] = %s\n",i,names[i]);
    }
    printf("\n\n");

}

/**
 * 函数指针
 * @return
 */
int pMax(int x ,int y){
    return x>y?x:y;
}

//回调函数
void populate_arry(int *array,size_t arraySize,int (*getNextValue)(void)){
    for (int i = 0; i < arraySize; ++i) {
        array[i]=getNextValue();
    }
}

//获取随机值
int getNextRandomValue(void){
    return rand();
}



