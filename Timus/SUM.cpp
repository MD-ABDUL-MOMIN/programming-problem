#include<iostream>
#include<stdio.h>
using namespace std;
int divisors[100000002];
void Divisors(int n);
void Divisors(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
            divisors[j].push_back(i);
    }
}
