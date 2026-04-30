#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,a[110],mxi,mni,mn=999,mx=-1;
        cin>>n;
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
            if (a[i]>mx)
            {
                mx=a[i];
                mxi=i;
            }
            if (a[i]<mn)
            {
                mn=a[i];
                mni=i;
            }
        }
        int x,y,z;
        x=max(mxi,mni);
        y=min(mxi,mni)+(n-max(mxi,mni)+1);
        z=n-min(mxi,mni)+1;
        cout<<min(x,min(y,z))<<endl;
    }
}
/**
8
2 1 3 4 5 6 8 7
*/