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

int dp[2510];
int dpp(int i,vector<int>& nums){
    if(dp[i] != -1)return dp[i];
    int res = 0;
    for(int x=i+1;x<nums.size();x++){
        if(nums[x] > nums[i])res = max(res,dpp(x,nums));
    }
    return (dp[i] = res+1);
}
int lengthOfLIS(vector<int>& nums) {
    int n = nums.size(),res = 0;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)res = max(res,dpp(i,nums));
    return res;
}
signed main() {
    RASHED
    vector<int> a{0,1,0,3,2,3},b{7,7,7,7,7,7,7},c{10,9,2,5,3,7,101,18};
    cout<<lengthOfLIS(a)<<endl;
    cout<<lengthOfLIS(b)<<endl;
    cout<<lengthOfLIS(c)<<endl;

    return 0;
}
/**
CASES:

*/

