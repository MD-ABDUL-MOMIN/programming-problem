#include<stdio.h>
struct address{
 char name[100];
 int roll;
 float gpa;
 char village[100];
}momin,sojib;
int main()
{
    printf(("Please enter the address of momin\n,such as name,roll gpa and village name\n"));
    scanf("%s",&momin.name);
    scanf("%d",&momin.roll);
    scanf("%f",&momin.gpa);
    scanf("%s",&momin.village);
    printf("name %s roll %d gpa %f and village %s of momin \n",momin.name,momin.roll,momin.gpa,momin.village);
    printf(("Please enter the address of sojib\n,such as name,roll gpa and village name\n"));
    scanf("%s",&sojib.name);
    scanf("%d",&sojib.roll);
    scanf("%f",&sojib.gpa);
    scanf("%s",&sojib.village);
    printf("name %s roll %d gpa %f and village %s of sojib \n",sojib.name,sojib.roll,sojib.gpa,sojib.village);
    printf("the size of structure of %d bytes ",sizeof(struct address));
    return 0;
}
