#include<stdio.h>
int main()
{
    int mat1[10][10],mat2[10][10],mat3[10][10],i,j,k,m,n,p,q;
    printf("Enter the rows and columns number of matrix1\n");
    scanf("%d%d",&m,&n);
    printf("Enter the rows and columns number of matrix2\n");
    scanf("%d%d",&p,&q);
    printf("Enter the elements of matrix1\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("The matrix 1 is given below\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%2d",mat1[i][j]);
            printf("\n");
    }
    printf("Enter the elements of second matrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            scanf("%d",&mat2[i][j]);
    }
    printf("THe second matrix is given below\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            printf("%2d",mat2[i][j]);
            printf("\n");
    }
    if(n==p)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            mat3[i][j]=0;
            for(k=0;k<p;k++)
            {
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("The multiplication matrix is given below\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
            printf("%4d",mat3[i][j]);
        printf("\n");
    }


}
else printf("We can't multiply those matrix\n");
return 0;
}
