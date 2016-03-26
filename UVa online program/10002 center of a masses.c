#include<stdio.h>
int main()
{
    int N,i;
    while(scanf("%d",&N)==1&&N>2)
    {double x[100],y[100],c1=0,c2=0,A=0,area=0;
    double X,Y;
        for(i=0;i<N;i++)
            scanf("%lf%lf",&x[i],&y[i]);

            for(i=0;i<N;i++)
            {if(i!=(N-1))
                {area=x[i]*y[i+1]-x[i+1]*y[i];
                c1=c1+((x[i]+x[i+1])*area);
                //printf("\n\t%lf",c1);
                c2=c2+((y[i]+y[i+1])*area);
                A+=area;
            }
            else {area=x[i]*y[0]-x[0]*y[i];
                c1=c1+((x[i]+x[0])*area);
                //printf("\n\t%lf",c1);
                c2=c2+((y[i]+y[0])*area);
                A+=area;
            }
            }
            //printf("\n%lf",c1);
            A=A/2;
            X=(c1)/(A*6);
            Y=(c2)/(A*6);
           printf("%.3lf %.3lf\n",X,Y);

    }
    return 0;

}
