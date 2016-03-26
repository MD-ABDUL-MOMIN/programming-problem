#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
long long int n;
    cin>>n;
    while(n-->0)
    {

            string ch,ch1,ch2,ch3;
            cin>>ch;
     long long int i=0,j=0,k=0;
          k=ch.size();
        if(ch[0]=='R'&&(ch[1]>='1'&&ch[1]<='9'))
        {
            int m=0,j=1;
            double d,q=10,sum=0;
            for(j=0;j<k;j++)
            {if(ch[j]=='C')break;}
            d=k-j-1;
            --d;
            for(i=j+1;i<k;i++)
            {
               sum+=double(ch[i]-'0')*pow((double)q,(double)d);
                --d;
            }
            long long int temp,rem,r;
            temp=sum;
             int p=0;
            while(temp>0)
            {
                rem=temp%26;
                if(rem==0)rem=26;
                ch1+=(rem+'A'-1);
                r=temp;
                temp=temp/26;
                if(temp*26==r)--temp;
            }
     for(j=ch1.size()-1;j>=0;j--)
          ch3+=ch1[j];

            for(i=1;ch[i]!='C';i++)
                ch2+=ch[i];
            ch1=ch3+ch2;
            cout<<ch1<<endl;

        }
        else {i=0;j=0;
        ch2="C";
        ch3="R";
                for(i=0;i<k;i++)
                if(ch[i]>='A'&&ch[i]<='Z'){
                ch1+=ch[i];++j;
                }
         else ch3+=ch[i];
          --j;
          i=0;
          k=j;
          double sum=0,s=26.00;
         while(i<=k)
         {
             sum+=((ch[i]-'A'+1)*pow(s,double(j)));
             j--;
             i++;
         }
         long long int T;
         T=sum;
         string c;
         int rem;
         while(T>0)
         {
             rem=T%10;
             c+=(rem+'0');
             T/=10;

         }
         for(i=c.size()-1;i>=0;i--)
            ch2+=c[i];

        ch1=ch3+ch2;
        cout<<ch1<<endl;
        }
    }
    return 0;
}
