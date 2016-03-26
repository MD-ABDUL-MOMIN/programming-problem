#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char dt[1][100];
int flag =0;

int calc(const char *str)
{
    char *buff;
    char *token;
    int  left, right;

    buff = strdup(str);
    for(token = strtok(buff, " "); NULL != token; token=strtok(NULL, " "))
    {
        if(0==strcmp(token, "+"))
        {
            token = strtok(NULL, " ");
            right = atoi(token);
            left += right;
            continue;
        }
        if(0==strcmp(token, "-"))
        {
            token = strtok(NULL, " ");
            right = atoi(token);
            left -= right;
            continue;
        }
        if(0==strcmp(token, "*"))
        {
            token = strtok(NULL, " ");
            right = atoi(token);
            left *= right;
            continue;
        }
        if(0==strcmp(token, "/"))
        {
            token = strtok(NULL, " ");
            right = atoi(token);
            left /= right;
            continue;
        }
        left = atoi(token);
    }
    free(buff);
    return left;
}

void dtcalc()
{ int i,j,n,m;
    for(i=0;i<12;i++)
    {
        printf("\n");
    }
    printf("\t\t\t");
    strcpy(dt[0],"DT Simple Calculator");
    for(j=0; j<1;j++)
    {
        for(n=0; n<21;n++)
        {
            printf("%c",dt[j][n]);
            for (m=0; m<10000000;m++);
        }
    }

}

void guide()
{int i;
    system("cls");
    printf("\n\n\n");
    printf("\n\t%c Guide ",218);
    for (i=0; i<48;i++)
        {
            printf("%c",196);
        }
    printf("%c",191);
    printf("\n\t%c Separates between operand and operator with space ' '.%c",179,179);
    printf("\n\t%c Allowed operator used in formula are '+' ,'-' , '*', '/'.     %c",179,179);
    printf("\n\t%c Operand may have sign. For example -5.                %c",179,179);
    printf("\n\t%c To exit program, type exit.                           %c",179,179);
    printf("\n\t%c",192);
    for (i=0; i<55;i++)
        {
            printf("%c",196);
        }
    printf("%c",217);
}

int main()
{
    char input[100];
    int value,i;
    int error ;
    dtcalc();
    do
    {
        do
        {
            flag = 0;
            error = 0;
            guide();
            printf("\n\n");
            value = calc(input);
            printf("\tInput formula or exit : ");
            gets(input);
            if (strcmp(input,"exit")==0)
            {
                flag = 1;
                break;
            }
            for(i = 0 ; i < strlen(input) ; i++)
            {
                    if(i!=(strlen(input)-1))
                    {
                        if(input[i]>=48 && input[i]<58)
                        {
                                        if((input[i+1]>=48 && input[i+1]<58) || input[i+1]==' '){}
                                        else
                                        {
                                            error++;
                                        }
                       }
                       else if(input[i]==' ')
                       {
                            if((input[i-1]=='+' || input[i-1]=='-') && (input[i+1]>=48 && input[i+1]<58)){}
                            else if(input[i-1]>=48 && input[i-1]<58 && input[i+1]==43 || input[i+1]==45){}
                           else{error++;}
                       }
                       else if(input[i]=='+')
                       {
                            if(input[i+1]!=' ')
                            {
                                error++;
                            }
                       }
                       else if(input[i]=='-')
                       {
                            if((input[i+1]>=48 && input[i+1]<58) && input[i-1] == ' ' && (input[i-2]=='+' || input[i-2]=='-') || input[i+1]==' '){}
                            else
                            {
                                error++;
                            }
                       }
                       else
                       {
                            error++;
                       }
                    }
                    else
                    {
                         if((input[i]>=48 && input[i]<58)){}
                         else
                         {
                            error++;
                         }
                    }
            }
        }while(error!=0);
        if (flag==1)
        {
            break;
        }
        value = calc(input);
        printf("\t\t\t\t%s = %d\n", input, value);
        getchar();
    }while(1);

getchar();
return 0;
}
