#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,y,i,j,k,l,m,ans;
int main()
{
    cin >> a;
    for (l=0 ; l<a ; l++)
    {
        cin >> b;
        int x[b+8];
        for (k=1; k<=b; k++)
        {
            cin>>x[k];
        }
        for (j=1; j<=b; j++)
        {
            for (m=j+1; m<=b; m++)
            {
                if (x[j]==x[m])c=x[j];
            }
        }
        for (i=1; i<=b; i++)
        {
            if (c!=x[i])d=i;
        }
        cout<<d<<endl;
    }
}
 