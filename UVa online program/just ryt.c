#include<stdio.h>
#include<string.h>
int main()
{
    char a[5];
    int T,i;
    scanf("%d",&T);

    while(T-->0)
{  getchar();
int d=0;
    for(i=0;i<3;i++){
   a[i]=getchar();
   d+=a[i];}
    printf("%d\n",d);

}
return 0;
}
