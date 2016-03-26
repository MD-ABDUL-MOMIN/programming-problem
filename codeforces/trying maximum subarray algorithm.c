#include<stdio.h>
int Find_maximum_subarray(int A[1000],int low,int high);
int Find_crossing(int A[1000],int low,int mid,int high);

int main()
{
    int num[1000],n,i,j;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    int a,b,c;
    a,b,c=Find_maximum_subarray(num[i],0,n-1);

    printf("%d %d",a,b);
    return 0;
}

int Find_crossing(int A[],int low,int mid,int high)
{
    int left_sum=-1,right_sum=-1,sum=0,i,max_left,max_right,j;
    for(i=mid;i>=low;i--)
        sum+=A[i];
    if(sum>left_sum)
    {left_sum=sum;
      max_left=i;
    }
    sum=0;
    for(j=mid+1;j<=high;j++)
      sum+=A[j];
    if(sum>right_sum)
    {right_sum=sum;
     max_right=j;
    }
return(max_left,max_right,left_sum+right_sum);
}
int Find_maximum_subarray(int A[1000],int low,int high)
{
    int left_low,right_low,right_high,left_high,left_sum,right_sum,cross_high,cross_low,cross_sum;
    if(low==high)return(low,high,A[low]);
    else {
        mid=(low+high)/2;
        (left_low,left_high,left_sum)=Find_maximum_subarray(A,low,mid);
        (right_low,right_high,right_sum)=Find_maximum_subarray(A,mid+1,high);
        (cross_low,cross_high,cross_sum)=Find_crossing(A,low,mid,high);
    }
}


