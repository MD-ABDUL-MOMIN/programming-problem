#include<stdio.h>
#include<math.h>
int main()
{
    int A[3000],B[2999],n;
while(scanf("%d",&n)==1)
{int i,j=0;
  for(i=0;i<n;i++)
        scanf("%d",&A[i]);
  for(i=0;i<n-1;i++){
    B[i]=abs(A[i]-A[i+1]);}
    for(i=0;i<n-1;i++){
    if((B[i]>=1&&B[i]<=n-1)&&j!=B[i])
    {
        j=B[i];
    }
    else{
        printf("Not jolly\n");break;
    }
}
if(i==(n-1))printf("jolly\n");
}
return 0;
}
