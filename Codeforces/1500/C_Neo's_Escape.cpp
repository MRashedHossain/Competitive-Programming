#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            v[i].second = i + 1;
        }
        // Sort descending by weight, tie-break by position ascending
        sort(v.begin(), v.end(), [&](auto &A, auto &B){
            if (A.first != B.first) return A.first > B.first;
            return A.second < B.second;
        });
 
        // pressed[i] = whether button i has already been pressed
        vector<char> pressed(n+2, 0);
        ll clones = 0;
 
        int i = 0;
        while (i < n) {
            // collect one weight‐group
            int w = v[i].first;
            int j = i;
            vector<int> pos;
            while (j < n && v[j].first == w) {
                pos.push_back(v[j].second);
                j++;
            }
            // process all positions of this weight
            sort(pos.begin(), pos.end());
            int m = pos.size();
            int idx = 0;
            // break into contiguous segments
            while (idx < m) {
                int l = pos[idx], r = l;
                idx++;
                while (idx < m && pos[idx] == r + 1) {
                    r = pos[idx++];
                }
                // check adjacency to already-pressed neighbors
                bool adj = false;
                if (l > 1 && pressed[l-1]) adj = true;
                if (r < n && pressed[r+1]) adj = true;
                if (!adj) {
                    // this segment is isolated → need a new clone
                    clones++;
                }
                // mark all in [l..r] as pressed
                for (int p = l; p <= r; p++) {
                    pressed[p] = 1;
                }
            }
            i = j;
        }
 
        cout << clones << "\n";
    }
    return 0;
}