//
// Created by luobo on 18-8-7.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void multyArrayDemo(){

    /* 一个带有 5 行 2 列的数组 */
    int a[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
    int i,j;

    /* 输出数组中每个元素的值 */
    for (i=0;i<5;i++){
        for (int j = 0; j < 2; ++j) {
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }

}


void multyArrayDemo2(){

    int age[6][4];

    //sizeof 计算数据类型或变量长度（即所占字节数）
    for (int i = 0; i < sizeof(age) / sizeof(age[0]); ++i) {
        printf("age + %d address is %p\n",i,age+i);
    }

    for (int i = 0; i < sizeof(age) / sizeof(age[0]); i++)
    {
        for (int j = 0; j < sizeof(age[0]) / sizeof(int); j++)
        {
            printf("age[%d][0] + %d address is %p\n",i,j,&age[i][0]+j);
        }
    }
}


double getAverage(int arr[],int size){
    double avg;
    double sum = 0;

    printf("ddddddddddddddd\n");

    for (int i = 0; i < size; ++i) {
        printf("%d \n",arr[i]);
        sum += arr[i];
    }
    printf("sum = %f \n",sum);

    avg = sum/size;
    printf("avg = %f \n",avg);
    return avg;
}

/* 要生成和返回随机数的函数 */
int * getRandom(){
    static int r[10];

    //设置种子,初始化随机函数种子,如果不使用srand，用rand（）产生的随机数，在多次运行，结果是一样的
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i) {
        r[i] = rand();
        printf("r[%d]=%d\n",i,r[i]);
    }
    return r;

}

/**
 * 数组是一种一次申请多个变量的方法，数组的使用让我们可以在程序中保留多个变量的值，进行处理，
 * 例如给定n个学生的成绩，要求有多少学生超过了平均分,
 */
void calStudents(){
    int cj[100] = {0};//定义数组
    int n;
    int count = 0;//定义计数器，统计有多少人达到平均分
    scanf("%d",&n);
    int i = 0;
    //读入数据
    for (int i = 0; i < n; ++i) {
        scanf("%d",&cj[i]);
    }
    //对数据进行求和
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += cj[i];
    }
    //求平均分
    double avg = sum/n;
    //判断有多少人达到平均分
    for (int i = 0; i < n; ++i) {
        if (cj[i]>avg){
            count++;
        }
    }
    //输出平均分和人数
    printf("平均分为:%0.2f\n超过平均分的人有：%d个\n",avg,count);

}

void arrPointerDemo(){

    int a[2] = {1,2};
    printf("a      = %d\n",a[0]);
    printf("*(a+0) = %d\n",*(a + 0));
    printf("a[1]   = %d\n",a[1]);
    printf("*a     = %d\n",*a);
    printf("*(a+1) = %d\n",*(a + 1));
    printf("\n");
    printf("a    的地址：%p\n",a);
    printf("(a+0)的地址：%p\n",(a + 0));
    printf("(a+1)的地址：%p\n",(a + 1));
    // %p 读入一个指针
    printf("\n");
}

void pDemo3(){
    printf("ddddd");
}