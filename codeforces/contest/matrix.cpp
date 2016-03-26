#include<bits/stdc++.h>

using namespace std;

int main()
{
      vector<int>N[45];
      int max=0;

      for(int i=1;i<=5;i++)
      {
          int a,b;
          scanf("%d%d",&a,&b);
          if(max<b)max=b;
          N[b].push_back(a);
      }
      int i=0;
      while(i!=max+1)
      {
          while(!N[i].empty())
          {
              cout<<i<<' '<<N[i].back()<<endl;
              N[i].pop_back();
          }
          i++;
      }



   /* for(int i=1;i<=5;i++)
    {
        scanf("%d%d%d",&a,&b,&w);
        matrix[a][b]=w;
       // matrix[b][a]=w;
    }
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
            printf("%3d",matrix[i][j]);
        printf("\n");
    }
*/
    return 0;
}
