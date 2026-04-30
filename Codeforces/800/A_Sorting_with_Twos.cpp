#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define ll long long int
///#define inf 99999999999999999
///#define F first
///#define S second
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100
 
bool solve() {
    int n,a[25],point[7]={1,2,4,8,16};cin>>n;
    vector<int> v;
    for (int i=1;i<=n;i++)cin>>a[i];
    for (int i=1;i<n;i++){
        if (a[i]>a[i+1])v.push_back(i);
    }
    if (v.empty())return true;
    for (int i=0;i<v.size();i++){
            bool flg = false;
        for (int j=0;j<5;j++){
            if (v[i] == point[j]){
                flg = true;
                break;
            }
        }
        if(!flg)return false;
    }
    return true;
}
int main() {
    RASHED
    int tc;
    cin>>tc;
    while(tc--) {
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}
 