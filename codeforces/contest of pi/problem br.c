#include<stdio.h>
int a[1000001]={0};
int main(){
	int n,d, max= 0, prev=0;
	char c;
	scanf("%d",&n);
	while( n-->0){
		getchar();
		scanf("%c%d",&c,&d);
		if( c == '+' )
		{
			a[d] = 1;
			prev++;
		}
		else if( a[d] == 1 ){
			a[d] = 0;
			prev--;
		}
		else{
			max++;
		}
		if( prev > max )
			max = prev;
	}
	printf("%d\n",max);
	return 0;
}
