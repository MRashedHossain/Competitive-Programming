#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    int card,player,joker,ans=0,ojoker,wplayer,oplayer,flg=0;
    cin>>card>>joker>>player;
    wplayer = card/player;
    if (wplayer >= joker)ans = joker;
    else
    {
        oplayer = player-1;
        ojoker = joker-wplayer;
        if (ojoker%oplayer)flg = (ojoker/oplayer)+1;
        else flg =  (ojoker/oplayer);
        ans = wplayer - flg;
    }
    cout<<ans<<endl;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 
 