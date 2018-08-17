#include <stdio.h>
#include <limits.h>
#include <float.h>

//预处理器define 定义常量
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
#define LENGTH2 (20+30)


//计算数据类型或变量长度（即所占字节数）
int sizeofdemo(){
    printf("int 存储大小 : %lu \n", sizeof(int));
    return 0;
}

int floatDemo(){
    printf("float 存储最大字节数 : %lu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN );
    printf("float 最大值: %E\n", FLT_MAX );
    printf("精度值: %d\n", FLT_DIG );
}

/* 函数声明 */
void func1(void);
/* 全局变量 - static 是默认的 */
static int count = 10;


//变量声明
extern int a , b ;
extern int c ;
extern float f ;

//extern 测试
int ext_count;
extern void write_extern();

void oper1(void);

extern void multyArrayDemo();
extern void multyArrayDemo2();
/*传递数组给函数*/
extern double getAverage(int arr[],int size);//形式参数是一个未定义大小的数组
extern double getAverage2(int *arr,int size);//形式参数是一个指针
extern double getAverage3(int arr[5],int size);//形式参数是一个已定义大小的数组
/*函数返回数组*/
extern int * getRandom();
extern void calStudents();
extern void arrPointerDemo();

/*指针demo函数声明*/
extern void pDemo1();
extern void pDemo2();
extern void pNullDemo();
extern void pCalDemo();
extern void pCalDemo2();
extern void pCalDemo3();
extern void parrDemo();
extern void parrDemo2();
extern int pMax();
extern void populate_arry(int *array,size_t arraySize,int (*getNextValue)(void));
extern int getNextRandomValue();

//字符操作
extern void strFunDemo();

//结构体struct 函数声明
extern void structTestDemo();
extern void structTestDemo2();
extern void bitDomainDemo();

//共用体
extern void unionTestDemo();
extern void visitUnionDataTest();
extern void visitUnionDataTest2();

//位域
extern void bitDomainDemoTest();
extern void bitDomainDemoTest2();

//输入输出
extern void getcharDemo();
extern void getsDemo();

int main() {
    printf("Hello, World!\n");
    sizeofdemo();
    floatDemo();

    //变量定义
    int a , b;
    int c ;
    float f;

    //初始化
    a = 10;
    b = 20;

    c = a + b;
    printf("Value of c : %d \n",c);

    f = 70.0 / 3.0;
    printf("value of f : %f \n",f);

    //常量测试
    int area;
    area = LENGTH * WIDTH;
    printf("value of area : %d ",area);
    printf("%c",NEWLINE);

    //使用 const 前缀声明指定类型的常量
    const int C_LENGTH = 10;
    const int C_WIDTH = 20;
    const char C_NEWLINE = '\n';

    area = C_LENGTH * C_WIDTH;
    printf("value of area : %d",area);
    printf("%c",C_NEWLINE);


    while (count--){
        func1();
    }

    //extern 测试
    ext_count = 5;
    write_extern();

    //运算符实例
    oper1();

    //数组实例
    multyArrayDemo();
    multyArrayDemo2();
    printf("333333333");
    /* 带有 5 个元素的整型数组 */
    int balance[5] = {1000, 2, 3, 17, 50};

    /*传递数组给函数*/
    double avg = getAverage(balance,5);
    double avg2 = getAverage(balance,5);
    double avg3 = getAverage(balance,5);
    /* 输出返回值 */
    printf( "平均值是： %f \n", avg);
    printf( "平均值是avg2： %f \n", avg2);
    printf( "平均值是avg3： %f \n", avg3);
    /*函数返回数组*/
    int *p;
    p = getRandom();
    for (int i = 0; i < 10; ++i) {
        printf("*(p+%d):%d\n",i,*(p+i));
    }
    //数组名是一个指向数组中第一个元素的常量指针
    //balance 是一个指向 &balance[0] 的指针，即数组 balance 的第一个元素的地址
    //因此，*(balance + 4) 是一种访问 balance[4] 数据的合法方式
    /* 带有 5 个元素的整型数组 */
    double arr_balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *arr_p;
    arr_p = arr_balance;
    printf("使用指针的数组值\n");
    for (int i = 0; i < 5; ++i) {
        printf("*(arr_p + %d) : %f \n",i,*(arr_p+i));
    }
    printf("使用balance作为地址的数组值 \n");
    for (int i = 0; i < 5; ++i) {
        printf("*(arr_balance + %d):%f \n",i,*(arr_balance+i));
    }

    int a1[]={1,2,3,4,5};
    int b1 ;
    b1 = sizeof(a1) / sizeof(a1[0]);
    printf("数组的元素个数为：%d \n",b1);

    //
    //calStudents();
    arrPointerDemo();

    //指针demo
    printf("#########指针demo#############\n\n");
    pDemo1();
    pDemo2();
    pNullDemo();
    pCalDemo();
    pCalDemo2();
    pCalDemo3();
    parrDemo();
    parrDemo2();
    /*p 是函数指针*/
    int (*p1)(int ,int ) = &pMax; //&可以省略
    int a11,b11,c11,d11;

    //printf("请输入三个数字：");
    //scanf("%d %d %d",&a11,&b11,&c11);

    /* 与直接调用函数等价，d = max(max(a, b), c) */
    //d11 = p1(p1(a11,b11),c11);
    //printf("最大的数是： %d \n",d11);

    //回调函数
    int myarray[10];
    populate_arry(myarray,10,getNextRandomValue);
    for (int i = 0; i < 10; ++i) {
        printf("%d ",myarray[i]);
    }
    printf("\n");

    //字符操作
    strFunDemo();

    //结构体
    structTestDemo();
    structTestDemo2();
    //位域
    bitDomainDemo();

    //共用体
    unionTestDemo();
    visitUnionDataTest();
    visitUnionDataTest2();

    //位域测试
    bitDomainDemoTest();
    bitDomainDemoTest2();

    //输入输出
    //getcharDemo();
    getsDemo();


    return 0;
}

/* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
 * 每次调用函数 'func1' 'thingy' 值不会被重置。
 */
void func1(void){
    static int thingy=5;
    thingy++;
    printf("thingy 为 %d , count 为 %d\n",thingy,count);
}

void oper1(){
    int a = 4;
    short b ;
    double c;
    int* ptr;

    /*sizeof 运算符实例*/
    printf("Line 1 - 变量 a 的大小 = %lu\n", sizeof(a));
    printf("Line 2 - 变量 b 的大小 = %lu\n", sizeof(b));
    printf("Line 3 - 变量 c 的大小 = %lu\n", sizeof(c));

    /* & 和 * 运算符实例 */
    ptr = &a; /* 'ptr' 现在包含 'a' 的地址 */
    printf("a 的值是 %d\n", a);
    printf("ptr 是 %d\n", ptr);
    printf("*ptr 是 %d\n", *ptr);

    /* 三元运算符实例 */
    a = 10;
    b = (a == 1) ? 20: 30;
    printf( "b 的值是 %d\n", b );

    b = (a == 10) ? 20: 30;
    printf( "b 的值是 %d\n", b );

}




