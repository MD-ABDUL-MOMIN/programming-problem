#include<stdio.h>
void partition(int a[],int low,int high);
void Merge(int a[],int low,int mid,int high);
int main()
{
    int N,i,j,num[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&num[i]);
        partition(num,0,N-1);
    printf("The organize list of number are given below\n");
    for(i=0;i<N;i++)printf("%d ",num[i]);
}
void partition(int a[],int low,int high)
{
    int mid,i,j;
    if(low<high)
    {
        mid=(low+high)/2;
        partition(a,low,mid);
        partition(a,mid+1,high);
        Merge(a,low,mid,high);
    }
}
void Merge(int a[],int low,int mid,int high)
{
    int b,c,l,k,temp[1000];
    b=low;
    c=low;
    k=mid+1;
    while(b<=mid&&k<=high)
    {
        if(a[b]<=a[k]){
            temp[c]=a[b];
            b++;
        }
        else{
            temp[c]=a[k];
            k++;
        }
        c++;
    }
    if(b>mid)
    {
        for(l=k;l<=high;l++){temp[c]=a[l];c++;}
    }
    else {
        for(l=b;l<=mid;l++){
            temp[c]=a[l];c++;
        }
    }
    for(l=low;l<=high;l++)a[l]=temp[l];


}
