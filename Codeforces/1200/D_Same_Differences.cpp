#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        map<int,int> mp;
        long long n,x,sum=0;
        cin>>n;
        for (int i=1;i<=n;i++){
            cin>>x;
            mp[x-i]++;
            sum+=mp[x-i]-1;
        }
        cout<<sum<<endl;
    }
}
/**
16
9 13 11 15 13 16 16 11 15 15 16 16 16 16 15 16
1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16
*/