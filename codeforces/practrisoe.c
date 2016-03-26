#include<stdio.h>
void rcopy(char *str,char *sr);
void main()
{
    char str[100],sr="Hi,I am MOMIN";
    printf("%s",str);
    return 0;
}
void rcopy(char *str,char *sr)
{
    if(*sr)
    {
        *str++=*sr++;
        rcopy(*str,*sr);
    }
    else *str='\0';
}
