#include<bits/stdc++.h>

using namespace std;
bool check[10000];
int main()
{
    int node,edge,u,v;
    scanf("%d%d",&node,&edge);
    vector<int>Edge[1000];
 for(int i=0;i<edge;i++)
 {
     scanf("%d%d",&u,&v);
     Edge[u].push_back(v);
     Edge[v].push_back(u);

 }
 int d[1000];
 memset(d,0,sizeof d);
 queue<int>q;
 for(int i=1;i<=node;i++)
 {
     q.push(i);
      d[i]=1;
      if(check[q.front()]==false)
      {
          while(!q.empty())
     {
         int top=q.front();
       cout<<top<<endl;
        check[top]=true;
         q.pop();
         for(int j=0;j<Edge[top].size();j++)
         {
             if(check[Edge[top][j]]==false){
             d[Edge[top][j]]=(d[top]+1);
        // cout<<Edge[top][j]<<endl;
             if(Edge[Edge[top][j]].size()!=0)
                q.push(Edge[top][j]);


             }
              check[Edge[top][j]]=true;
         }

      }


     }




 }
 for(int i=1;i<=node;i++){


             cout<<Edge[i][0]<<' ';

         cout<<endl;
         cout<<Edge[i].size();}
}
