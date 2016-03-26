#include<stdio.h>
int main(){
	int n,i,j,x1,x2;
	scanf("%d",&n);
	for(i=0,x1=0;i<n;i++){
		scanf("%d",&j);
		x1^=j;
	}
	for(i=0,x2=0;i<n-1;i++){
		scanf("%d",&j);
		x2^=j;
	}
	printf("%d\n",x1^x2);
	for(i=0;i<n-2;i++){
		scanf("%d",&j);
		x2^=j;
	}
	printf("%d\n",x2);
	return 0;
}
