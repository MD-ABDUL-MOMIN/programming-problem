/*#include<stdio.h>
int main()
{
    int a,b,n,m,sum,sum1,temp,tem,tem1,p;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    if(m*a<=b) sum=n*a;
    else {
        tem=(n%m)*a;
    tem1=(n%m)*b;
    if(tem>tem1)p=tem1;
    else p=tem;

        sum=(n/m)*b+p;
    }

    printf("%d\n",sum);
    return 0;
}
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, m, a, b;

    cin >> n >> m >> a >> b;
    if (m * a <= b)
        cout << n * a << "\n";
    else
        cout << (n/m) * b + min((n%m) * a, b) << "\n";

    return 0;
}
