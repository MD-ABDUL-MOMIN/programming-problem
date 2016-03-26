#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{int i,j,D,E,l;
    char A[10000],B;
  while(gets(A))
{D=0,E=0;int f=0;
l=strlen(A);
for(i=0;i<l;i++)
{if(A[i]>='A'&&A[i]<='Z')D=A[i]-'A'+10;
else if(A[i]>='0'&&A[i]<='9'){int j;
if(while(A[j]!=' '){f++;j++;}
        D+=(A[i]-'0')*pow(10,f);--f;}
else {E=D;D=0;f=0;}
}
        printf("%d %d",E,D);}
        return 0;
}

