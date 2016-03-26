#include <stdio.h>
#include <math.h>

main()
{
    int n, i;
    scanf("%d", &n);

    float width,radius,red_area,green_area;
    long long int length;
    for(i=0;i<n;i++){

            scanf("%lld",&length);
        width=(6.00*length)/10;
        radius=length*1.00/5.00;
        red_area=acos(-1)*radius*radius;
        green_area=(length*1.00*width)-red_area ;
        printf("%.2f %.2f\n", red_area, green_area);
    }
    return 0;
}
