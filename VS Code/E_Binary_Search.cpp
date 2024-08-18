/// pragma makes Faster loop iteration.. 10^9 loop with some easy task(sum,xor,min) can be computed in 1 sec.
/// Ordered set
/// ordered map
/// clock timer
#pragma GCC optimize("Ofast")
#pragma GCC
target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

///find_by_order() returns the ith term of set in O(log(n))
///order_of_key() returns the position of value in set in O(log(n))

using ordered_map = tree<F, S, less<F>, rb_tree_tag, tree_order_statistics_node_update>;


#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define S second

///#define int long long
///#define inf LLONG_MAX
///#define show(x) cout << #x << " : " << x << endl
///#define maxn 200100

///int dx[] = {-1,1,0,0}; ///Side sharing move
///int dy[] = {0,0,-1,1}; ///Side sharing move
///int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///King's move
///int dx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///Knight's move
///int dy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///Knight's move

#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)s.size()

void solve(int tc) {
    
}
signed main() {
    RASHED
    int TC;
    cin>>TC;
    for(int i=1;i<=TC;i++)solve(i);
    return 0;
}