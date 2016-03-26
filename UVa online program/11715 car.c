#include<stdio.h>
#include<math.h>
int main()
{
    double a,v,s,t,x,y,z,N=1,u;
    int n;
    while(scanf("%d",&n)==1)
    {s=0;t=0;v=0,u=0;a=0;
    if(n==0)break;
    else {scanf("%lf%lf%lf",&x,&y,&z);
        switch(n)
        {
            case 1:{a=(y-x)/z;s=x*z+.5*a*z*z;
            printf("Case %.0lf: %.3lf %.3lf\n",N,s,a);break;
            }
            case 2:{t=(y-x)/z;s=x*t+.5*z*t*t;
            printf("Case %.0lf: %.3lf %.3lf\n",N,s,t);break;
            }
            case 3:{v=sqrt(x*x+2*y*z);t=(v-x)/y;
            printf("Case %.0lf: %.3lf %.3lf\n",N,v,t);break;
            }
            case 4:{u=sqrt(x*x-2*y*z);t=(x-u)/y;
            printf("Case %.0lf: %.3lf %.3lf\n",N,u,t);break;
            }
        }
    }
        N++;
    }
    return 0;
}
