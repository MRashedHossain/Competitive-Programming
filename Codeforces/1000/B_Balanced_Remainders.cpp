#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    vector<int> f(3,0);
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        f[(x%3)]++;
    }
    int need = n/3,ans = 0;
    if(f[0] == f[1] && f[1] == f[2])cout<<0<<endl;
    else
    {
        if(f[0] >= f[1] && f[0] >= f[2])
        {
            int extra = f[0] - need;
            int one_lagbe = need - f[1],two_lagbe = need - f[2];
            if(one_lagbe < 0)
            {
                ans += extra*2;
                ans += abs(one_lagbe);
            }
            else if(two_lagbe < 0)
            {
                ans += extra;
                ans += (abs(two_lagbe)*2);
            }
            else
            {
                ans += abs(one_lagbe);
                ans += (abs(two_lagbe)*2);
            }
        }
        else  if(f[1] >= f[0] && f[1] >= f[2])
        {
            int extra = f[1] - need;
            int one = need - f[2],two = need - f[0];
            if(one < 0)
            {
                ans += extra*2;
                ans += abs(one);
            }
            else if(two < 0)
            {
                ans += extra;
                ans += (abs(two)*2);
            }
            else
            {
                ans += abs(one);
                ans += (abs(two)*2);
            }
        }
        else{
                        int extra = f[2] - need;
            int one = need - f[0],two = need - f[1];
            if(one < 0)
            {
                ans += extra*2;
                ans += abs(one);
            }
            else if(two < 0)
            {
                ans += extra;
                ans += (abs(two)*2);
            }
            else
            {
                ans += abs(one);
                ans += (abs(two)*2);
            }
        }
        cout<<ans<<endl;
    }
}
 
int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)solve();
}
 