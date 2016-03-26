/*programming problem from 2012
//problem 3(c)write a program to display the contents of a variable without inserting any space
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="Hi, I am MD Abdul MOMIN.Now I am trying to solve a problem";
    int L=strlen(ch),i;
    for(i=0;i<L;i++)
    {
        if(ch[i]==' ')continue;
        else printf("%c",ch[i]);
    }
    return 0;

}
//******I confuse about my above answer
//problem 4(d) write a program to display message digit,alphabet of any other special character

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    c=getchar();
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        printf("%c a Alphabet\n",c);
    else if(c>='0'&&c<='9')
        printf("%c is a Digit",c);
    else printf("%c is the Other special character\n",c);
    return 0;
}
problem: 7(d)write a program to initialize only few elements of a two dimentional array and display the contents of the array on the screen
#include<stdio.h>
int main()
{
    int number[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
    printf("The two dimentional array is given below\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%2d",number[i][j]);
        printf("\n");
    }
    return 0;
}
*/


