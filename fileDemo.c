//
// Created by luobo on 18-8-17.
//
#include <stdio.h>


/**
 * 写入文件
 *
 * 函数 fputc()
 * 把参数 c 的字符值写入到 fp 所指向的输出流中。
 * 如果写入成功，它会返回写入的字符，
 * 如果发生错误，则会返回 EOF
 *
 * 函数 fputs()
 * 把字符串 s 写入到 fp 所指向的输出流中。
 * 如果写入成功，它会返回一个非负值，
 * 如果发生错误，则会返回 EOF
 *
 *
 */
void fileWriteDemo1(){
    FILE *fp = NULL;

    fp = fopen("/home/luobo/CLionProjects/c11test/filetest1.txt","w+");
    fprintf(fp,"This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n",fp);
    //fputc('a',fp);
    fclose(fp);

}

/**
 * 读取文件
 *
 *
 */
void fileReadDemo(){

    FILE *fp = NULL;
    char buff[255];

    fp = fopen("/home/luobo/CLionProjects/c11test/filetest1.txt","r");

    //int fscanf(FILE *fp, const char *format, ...) 函数来从文件中读取字符串，
    // 但是在遇到第一个空格字符时，它会停止读取
    fscanf(fp,"%s",buff);


    printf("1:%s\n",buff);

    //函数 fgets() 从 fp 所指向的输入流中读取 n - 1 个字符。
    //它会把读取的字符串复制到缓冲区 buf，并在最后追加一个 null 字符来终止字符串。
    //如果这个函数在读取最后一个字符之前就遇到一个换行符 '\n' 或文件的末尾 EOF，则只会返回读取到的字符，包括换行符
    fgets(buff,255,(FILE*)fp);
    printf("2:%s\n",buff);

    fgets(buff,255,(FILE*)fp);
    printf("3:%s\n",buff);

    fclose(fp);

}


