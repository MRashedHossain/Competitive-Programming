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
    int n,k;
    cin>>n>>k;
    int a[n+6];
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1,a+n+1);
    int lo = 1,hi = n,min_cnt = 1,min_val = 0;
    while(lo <= hi) {
        int mid = (lo+hi)/2,need = 0;
        for(int i=1; i<mid; i++)need += (a[mid]-a[i]);
        if(k >= need) {
            min_val = a[mid];
            min_cnt = mid;
            lo = mid+1;
        } else {
            hi = mid-1;
        }
    }
//    show(min_cnt);
//    show(min_val);
    if(min_cnt == 1) {
        a[1] += k;
        min_val = a[1];
        min_cnt = 0;
        for(int i=1; i<=n; i++) {
            if(a[i] == min_val)min_cnt++;
        }
        cout<<((min_val*n)+1)-min_cnt<<endl;
        return;
    }
    if(min_cnt == n) {
        for(int i=1; i<min_cnt; i++)k-=(min_val-a[i]);
        min_cnt = n;
        min_val += (k/n);
        min_cnt -= (k%n);
        cout<<((min_val*n)+1)-min_cnt<<endl;
        return;
    }
    for(int i=1; i<min_cnt; i++)k-=(min_val-a[i]);
    if(k<min_cnt)min_cnt -= k;
    else {
        min_val += (k/min_cnt);
        min_cnt -= (k%min_cnt);
    }
    cout<<((min_val*n)+1)-min_cnt<<endl;
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
1
5 3
6 6 7 4 6
*/

