#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C,D;
    float E,F;
    scanf("%d%d%d",&A,&B,&C);
    D=sqrt(B*B-4*A*C);
    E=((-B)+D)/(2.00*A);
    F=((-B)-D)/(2.00*A);
    if(E==F)printf("%f\n",F);
    else if(E<F)printf("%f %f\n",E,F);
    else{printf("%f %f\n",F,E);
    }
    return 0;
}
