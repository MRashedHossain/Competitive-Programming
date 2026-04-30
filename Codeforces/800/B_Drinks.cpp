#include<stdio.h>
 
int main()
{
    double sum=0;
    double ans;
    int x;
    scanf("%d",&x);
    int a[x],i;
    for (i=0; i<x; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    ans=sum/x;
    printf("%.12lf",ans);
}