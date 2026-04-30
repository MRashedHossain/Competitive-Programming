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
int c1(vector<int>&a,int n,int h){
    int op[3] = {2,2,3},res = 0,now = 0;
    priority_queue<int> q;
    for(auto i:a)q.push(-i);
    while(!q.empty()){
        if(h > -q.top()){
            h += -(q.top())/2;
            res++;
            q.pop();
        }
        else {
            if(now > 2)break;
            h *= op[now];
            now++;
        }
    }
    return res;
}
int c2(vector<int>&a,int n,int h){
    int op[3] = {2,3,2},res = 0,now = 0;
    priority_queue<int> q;
    for(auto i:a)q.push(-i);
    while(!q.empty()){
        if(h > -q.top()){
            h += -(q.top())/2;
            res++;
            q.pop();
        }
        else {
            if(now > 2)break;
            h *= op[now];
            now++;
        }
    }
    return res;
}
int c3(vector<int>&a,int n,int h){
    int op[3] = {3,2,2},res = 0,now = 0;
    priority_queue<int> q;
    for(auto i:a)q.push(-i);
    while(!q.empty()){
        if(h > -q.top()){
            h += -(q.top())/2;
            res++;
            q.pop();
        }
        else {
            if(now > 2)break;
            h *= op[now];
            now++;
        }
    }
    return res;
}
void solve(int tc) {
    int n,h;
    cin>>n>>h;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    cout<<max(c1(a,n,h),max(c2(a,n,h),c3(a,n,h)))<<endl;
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
 
*/