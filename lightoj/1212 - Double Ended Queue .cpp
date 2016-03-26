#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=1,T;
    scanf("%d",&T);
    while(t<=T)
    {
        int n,m,p;
        printf("Case %d:\n",t);
        list<int>Lis;
        scanf("%d%d",&n,&m);
        while(m--)
        {
            string ch;
            cin>>ch;

            if(ch=="pushLeft")
            {    cin>>p;
                if(Lis.size()!=n)
                {
                        Lis.push_front(p);
                        printf("Pushed in left: %d\n",p);
                }
                else printf("The queue is full\n");

            }

            else if(ch=="pushRight")
            { cin>>p;
                if(Lis.size()!=n){
                Lis.push_back(p);
                   printf("Pushed in right: %d\n",p);
                }
                else printf("The queue is full\n");
            }

            else if(ch=="popLeft")
            {
                if(!Lis.empty())
                {
                printf("Popped from left: %d\n",Lis.front());
                       Lis.pop_front();
                }
                else
                    printf("The queue is empty\n");

            }
            else if(ch=="popRight")
            {
                if(!Lis.empty())
                {
                      printf("Popped from right: %d\n",Lis.back());
                       Lis.pop_back();
                }
                else printf("The queue is empty\n");

            }
        }
        t++;
    }
    return 0;
}
