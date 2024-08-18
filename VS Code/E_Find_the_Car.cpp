#include<bits/stdc++.h>
using namespace std;

#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int

#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010

#define F first
#define S second

void solve(int tc) {
    int n,k,q;
    cin>>n>>k>>q;
    int dis[k+8]= {0},tym[k+8]= {0};
    double vel[k+8] = {0};
    for(int i=1; i<=k; i++)cin>>dis[i];
    for(int i=1; i<=k; i++)cin>>tym[i];
    
    while(q--) {
        int d;
        cin>>d;
        int lo = 0,hi = k,curr = 0;
        while(lo <= hi) {
            int mid = (lo+hi)/2;
            if(dis[mid] == d) {
                curr = mid;
                break;
            } else if(dis[mid] < d) {
                curr = max(curr,mid);
                lo = mid+1;
            } else hi = mid-1;
        }
        if(dis[curr] == d){
            cout<<tym[curr]<<" ";
            continue;
        }
        int pos = tym[curr],rest = d-dis[curr];
        double ds = dis[curr+1]-dis[curr],dt = tym[curr+1]-tym[curr];
        pos += ((dt*rest)/ds);
        cout<<pos<<" ";
    }
    cout<<endl;
}
signed main() {
    RASHED
    int TC = 1;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
1
10 2 4
4 10
4 7
6
4
2
7
1
6 1 1
6
5
6
*/

