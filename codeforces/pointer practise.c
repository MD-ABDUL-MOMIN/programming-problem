#include<stdio.h>
#include<iostream.h>
struct stack
{
    int top;
    int item[10];
};
int isfull(struct stack *s)
{
    if(s->top==9)
    return 1;
    else return 0;
    return 0;
}
void push(struct stack *s,int n)
{
    s->top++;
    s->item[s->top]=n;
}
void isempty
void main()
{
    struct stack s;
    s.top=-1;
    int choice;
    int d;
    do{
        cout<<"\n1.Push any Number\n2.Pop\n3.Display"<<endl<<"4.Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:if(isfull(&s))
            {
               cout<<"Your stack is full";
            }
            else {
                cout<<"please Input your data:\n";
                cin>>d;
                push(&s.d);
            }
            break;
            case 2:
                if(isempty(&s))
                {

                }
                else {

                }
                break;
        }
        }
}
