#include<stdio.h>
int main()
{
    int a,b,c,i,x,ans,out=0;
    scanf("%d",&x);
    for (i=1 ; i<=x ; i++)
    {
        ans=0;
        scanf("%d%d%d",&a,&b,&c);
        if (a==1)ans++;
        if (b==1)ans++;
        if (c==1)ans++;
        if (ans>=2)out++;
    }
    printf("%d\n",out);
}