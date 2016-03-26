#include<stdio.h>
int main()
{
    FILE *file1;
    file1=fopen("myfile1.txt","a");
    fprintf(file1,"THis is my first file program");
    fclose(file1);
}
