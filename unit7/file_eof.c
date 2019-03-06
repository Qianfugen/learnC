// file_eof.c -- 打开一个文件并显示该文件
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ch;
    FILE * fp;
    char fname[40];

    printf("Enter the name of the file:");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if (fp==NULL)
    {
        printf("Failed to open file.\n");
        exit (1);
    }
    while ((ch=getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}