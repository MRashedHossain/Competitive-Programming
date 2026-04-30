#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int a[50],n,even=0,odd=0,ans=0;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]%2==0)even++;
            else odd++;
        }
        if (n%2==0)
        {
            if (even!=odd)cout<< "-1"<<endl;
            else
            {
                for (int j=0; j<n; j++)
                {
                    for (int i=0; i<n-1; i++)
                    {
                        if (i%2!=a[i]%2)
                        {
                            for (int k=i+1; k<n; k++)
                            {
                                if ((a[k]%2!=k%2) && (a[k]%2!=a[i]%2))
                                {
                                    swap(a[i],a[k]);
                                    ans++;
                                    break;
                                }
                            }
                        }
                    }
                }
                cout<<ans<<endl;
            }
        }
        else
        {
            if (even-odd!=1)cout<< "-1"<<endl;
            else
            {
                for (int j=0; j<n; j++)
                {
                    for (int i=0; i<n-1; i++)
                    {
                        if (i%2!=a[i]%2)
                        {
                            for (int k=i+1; k<n; k++)
                            {
                                if ((a[k]%2!=k%2) && (a[k]%2!=a[i]%2))
                                {
                                    swap(a[i],a[k]);
                                    ans++;
                                    break;
                                }
                            }
                        }
                    }
                }
                cout<<ans<<endl;
            }
        }
    }
}
 
/**
0 1 0 1 0 1 0
7
1 1 0 0 0 0 1
*/