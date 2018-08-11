//
// Created by luobo on 18-8-11.
//

#include <stdio.h>
#include <string.h>


/**
 * 结构体定义
 */




//此声明声明了拥有4个成员的结构体，分别为图书标题，作者，简介，id
//结构体的标签被命名为Books,没有声明变量
struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
//用Books标签的结构体，另外声明了变量b11、b12、b13
struct Books b11, b12[20], *b13;



//用typedef创建新类型
typedef struct {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Books2;
//现在可以用Books2作为类型声明新的结构体变量
Books2 b1,b2,*pb3;

//此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
//同时又声明了结构体变量s1
//这个结构体并没有标明其标签
struct
{
    int a;
    char b;
    double c;
} s1 ;

/**
 * 访问结构成员
 *用.来读取结构成员的值
 */
void structTestDemo(){

    printf("访问结构体成员变量 \n");

    /*声明*/
    struct Books book1;//声明 Book1，类型为 Books
    struct Books book2;//声明 Book1，类型为 Books

    /*book1 初始化*/
    strcpy(book1.title,"C Programming");
    strcpy(book1.author,"Nuha Ali");
    strcpy(book1.subject,"C Programming Tutorial");
    book1.book_id = 6495407;

    /*book2 初始化*/
    strcpy( book2.title, "Telecom Billing");
    strcpy( book2.author, "Zara Ali");
    strcpy( book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    /*输出 book1 详情 */
    printf("book1 id : %d",book1.book_id);
    printf("book1 title : %s \n",book1.title);
    printf("book1 author : %s \n",book1.author);
    printf("book1 subject : %s \n",book1.subject);

    /*输出 book2 详情 */
    printf("book2 id : %d",book2.book_id);
    printf("book2 title : %s \n",book2.title);
    printf("book2 author : %s \n",book2.author);
    printf("book2 subject : %s \n",book2.subject);

}

/**
 * 结构作为函数参数
 */
void structTestDemo2(){

    printf("结构体作为函数 \n");

    /*声明*/
    struct Books book1;//声明 Book1，类型为 Books
    struct Books book2;//声明 Book1，类型为 Books
    void printBook( struct Books books); //函数声明

    /*book1 初始化*/
    strcpy(book1.title,"C Programming");
    strcpy(book1.author,"Nuha Ali");
    strcpy(book1.subject,"C Programming Tutorial");
    book1.book_id = 6495407;

    /*book2 初始化*/
    strcpy( book2.title, "Telecom Billing");
    strcpy( book2.author, "Zara Ali");
    strcpy( book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;


    /*输出 book1*/
    printBook(book1);

    /*输出 book1*/
    printBook(book2);

}

void printBook(struct Books books){

    /*输出 book1 详情 */
    printf("book1 id : %d",books.book_id);
    printf("book1 title : %s \n",books.title);
    printf("book1 author : %s \n",books.author);
    printf("book1 subject : %s \n",books.subject);

}

/**
 * 指向结构的指针
 * 1、定义指向结构的指针 sstruct Books *books 例如
 * void printBookByPoint( struct Books *books); //函数声明
 * 2、定义的指针变量中存储结构变量的地址  struct_pointer = &Book1; 例如：
 * printBookByPoint(&book1);
 * 3、使用指向该结构的指针访问结构的成员，您必须使用 -> 运算符 ，例如：
 * printf("book id : %d",books->book_id);
 *
 */
void structPointerDemo(){

    printf("指向结构的指针 \n");

    /*声明*/
    struct Books book1;//声明 Book1，类型为 Books
    struct Books book2;//声明 Book1，类型为 Books
    void printBookByPoint( struct Books *books); //函数声明

    /*book1 初始化*/
    strcpy(book1.title,"C Programming");
    strcpy(book1.author,"Nuha Ali");
    strcpy(book1.subject,"C Programming Tutorial");
    book1.book_id = 6495407;

    /*book2 初始化*/
    strcpy( book2.title, "Telecom Billing");
    strcpy( book2.author, "Zara Ali");
    strcpy( book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    /* 通过传 book1 的地址来输出 Book1 信息 */
    printBookByPoint(&book1);

    /* 通过传 book1 的地址来输出 Book2 信息 */
    printBookByPoint(&book2);


}

void printBookByPoint(struct Books *books){

    /*输出 book 详情 */
    printf("book id : %d",books->book_id);
    printf("book title : %s \n",books->title);
    printf("book author : %s \n",books->author);
    printf("book subject : %s \n",books->subject);

}

/**
 * 位域
 */

struct bs{
    unsigned a:1;
    unsigned b:3;
    unsigned c:4
} bit,*pbit;

void bitDomainDemo(){

    printf("位域例子:\n");

    bit.a = 1;/* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.b = 7;/* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.c = 15; /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */

    printf("%d,%d,%d \n",bit.a,bit.b,bit.c); /* 以整型量格式输出三个域的内容 */

    pbit = &bit;/* 把位域变量 bit 的地址送给指针变量 pbit */
    pbit->a = 0;/* 用指针方式给位域 a 重新赋值，赋为 0 */
    /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，
     * 位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3）
     * */
    pbit->b&=3;
    /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
    pbit->c|=1;
    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);    /* 用指针方式输出了这三个域的值 */



}


