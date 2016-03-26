#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,i=1,j=0;
    scanf("%d",&N);
    int n;
    n=N/2;
    if(N%2==1)++n;
    if(N<=2)N=1;
    if(N==3)N=2;
    cout<<N<<endl;
    for(int k=1;k<=N;k++)
    { if(N!=4){
        if(k%2==1)
            printf("%d ",++j);
        else printf("%d ",++n);
    }
    else {
        if(k%2==0)
            printf("%d ",++j);
        else printf("%d ",++n);
    }
    }
    printf("\n");

    return 0;

}
