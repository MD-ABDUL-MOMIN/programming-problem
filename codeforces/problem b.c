#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int n,i,j,num[100000],k=2,p;

      scanf("%llu",&n);

     for(j=0;j<n;j++)
     {scanf("%llu",&num[j]);
       if((num[j]%2==0&&num[j]!=4)||num[j]<=3)printf("NO\n");
      else{
            i=sqrt(num[j]);
      if(i*i==num[j])
        {int p=0;
      for(k=3;k<=sqrt(i);k+=2)
      {
          if(i%k==0)
            {p=1;break;}
      }
      if(p==1)printf("NO\n");
      else printf("YES\n");

      }
      else printf("NO\n");
     }
     }


return 0;
}
