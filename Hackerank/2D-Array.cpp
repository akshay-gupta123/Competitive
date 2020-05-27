#include<stdio.h>
int main()
{
    int s[6][6],sum[4][4];
    int a=6;
    for(int i=0;i<a;i++)
    for(int j=0;j<a;j++)
    scanf("%d ",&s[i][j]);
   
   for(int i=1;i<a-1;i++)
    {
      for(int j=0;j<a-2;j++)
      {
         sum[i-1][j]=s[i][j+1]+s[i-1][j]+s[i-1][j+1]+s[i-1][j+2]+s[i+1][j]+s[i+1][j+1]+
                       s[i+1][j+2];
      }
    }
    int max=-10000;
    for(int i=0;i<a-2;i++)
    {
    for(int j=0;j<a-2;j++)
      if(sum[i][j]>max)
      max=sum[i][j];
    }
    printf("%d",max);

return 0;
}


