#include<iostream>
using namespace std;
void rcopy(char *s1,char *s2);
int main()
{
    int l;
    char str[100]="How are you",sr[]="hi I am MOMIN";
    cout<<str;
    rcopy(str,sr);
    cout<<str<<endl;
    return 0;

}
void rcopy(char *s1,char *s2)
{
    if(*s2)
    {
        *s1++=*s2++;
        rcopy(s1,s2);
    }
    else *s1='\0';
}
