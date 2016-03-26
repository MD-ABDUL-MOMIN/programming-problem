#include<stdio.h>
void main() {
long int i,sum,flag=1;
long int n;
int x,y;
while(scanf("%ld",&n)!=EOF) {
if(flag==1) { printf("PERFECTION OUTPUT\n"); flag=0; }
if(n==0) { printf("END OF OUTPUT\n\n"); flag=1; break; }
sum=1;
for(i=2; i<=n/2; i++) {
if(n%i==0) sum+=i;
}
if(sum<n) printf("%5ld DEFICIENT\n",n);
if(sum==n) printf("%5ld PERFECT\n",n);
if(sum>n) printf("%5ld ABUNDANT\n",n);
}
}
