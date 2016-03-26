#include<stdio.h>
int remain(int n);
int main()
{
    int n;
    while(scanf("%d",&n)==1&&n!=0)
    {
        int i;


    }
}
int arr[500001];
int remain(int n)
{
    int i,j=1;
    for(i=1;i<=n;i++)
    {
        if(n%2==0){if(i%2==0)

        }
            arr[j++]=i;
    }
    if(j==1)return arr;
    return remain(j);

}
