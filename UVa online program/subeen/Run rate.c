#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        int O_team,My_team,ball;
        scanf("%d%d%d",&O_team,&My_team,&ball);
        float current_rate,required_rate,Over;
        O_team+=1;
        Over=50-(ball/6.0);
        current_rate=My_team/Over;
        required_rate=(O_team-My_team)/(ball/6.0);
        printf("%.2f %.2f\n",current_rate,required_rate);

    }
    return 0;

}
