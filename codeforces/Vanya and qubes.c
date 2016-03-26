#include<stdio.h>
int Number(int N);
int main()
{
    int n,sum=0,p=1;
    scanf("%d",&n);
    while((sum+Number(p))<=n)
    {
        sum+=Number(p);
      ++p;
    }
    printf("%d\n",p-1);
    return 0;
}
int Number(int N)
{
 if(N>0)
  return N+Number(N-1);
  else return N;

}


