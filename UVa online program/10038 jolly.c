#include<stdio.h>
#include <math.h>
int main()
{int array[3000],diff[2999];
int n;

	while(scanf("%d",&n)==1)
	{
    int i;
		for(i=0; i<n ;i++)
			scanf("%d",&array[i]);
		for(i=1;i<n;i++)
			diff[i]=0;
		for(i=0;i<n-1;i++)
		{
			int d = abs( array[i]-array[i+1] );
			if( d < 1 || d > n-1||diff[d]==1)
			{printf("Not jolly\n");
                    break;
			}
			diff[d]=1;
			}
		if(i==n-1)
		{
			printf("jolly\n");
		}
	}
	return 0;
}
