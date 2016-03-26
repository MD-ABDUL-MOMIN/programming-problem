/*programming problem from 2013
//2(d) write a program to print a Floyd's triangle(for 10 rows)
#include<stdio.h>
int main()
{
    int N,P=1,i,j;
    printf("Please enter the number of rows of that tringle ");
    scanf("%d",&N);
    printf("\nThe tringle is given below\n\n");
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++){
            printf("%3d",P);
            P++;
        }
        printf("\n");
    }
    return 0;
}

//3(d)write a program to find the sum and average of the given numbers using function declaration
#include<stdio.h>
float Average(float sum,int n);
int main()
{
    float summation=0,average,value;
    int N,i;
    printf("Enter the amount of number \n");
    scanf("%d",&N);
    printf("Enter the values\n");
    for(i=1;i<=N;i++)
    {
        scanf("%f",&value);
        summation+=value;
    }
    average=Average(summation,N);
    printf("The sum of given number is %f\nand agerage is %f",summation,average);
    return 0;
}
float Average(float sum,int n)
{
    return (sum/n);
}
//4(d) write a program to find the factorial using function declaration
#include<stdio.h>
int factorial(int n);
int main()
{
    int i,fact;
    printf("Enter the number \n");
    scanf("%d",&i);
    fact=factorial(i);
    printf("The factorial of %d is %d",i,fact);
    return 0;
}
int factorial(int n)
{ int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
//7(d)write a program to assign the pointer variable to another pointer and display the contents of both the pointer
#include<stdio.h>
int main()
{
    int *p,m=5,*q;
    p=&m;
    q=&*p;
    printf("the value of first pointer is %d\n and the second pointer is %d",*p,*q);
    return 0;

}
*/
