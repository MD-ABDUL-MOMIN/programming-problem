#include<stdio.h>
int main()
{
    int a;
    while(a!=EOF){
    scanf("%d",&a);
        if((a%4==0&&a%100==0&&a%400==0)||(a%4==0&&a%100!=0)){
        printf("This is leap year.\n");
        if(a%15==0)
            printf("This is huluculu festival year.\n");
            else if(a%55==0)
                printf("This is buluklu festival year\n");
            else continue;}
            else if(a%15==0){
                    printf("This is huluculu festival year.\n");
            if(a%55==0)
                printf("\nThis is buluklu festival year\n");
                else continue;}
        else if(a%55==0)
            printf("This is buluklu festival year\n");
        else printf("This is an ordinary year\n");
        }
    return 0;
}
