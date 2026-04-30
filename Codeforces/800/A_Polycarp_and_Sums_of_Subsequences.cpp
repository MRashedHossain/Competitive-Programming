#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    ll  a[10];
    for (int i=0; i<7; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<4; i++)
    {
        for (int j=i+1; j<5; j++)
        {
            for (int k=j+1; k<6; k++)
            {
                if ((a[i]+a[j]+a[k]) == a[6])
                {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                    return;
                }
            }
        }
    }
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}