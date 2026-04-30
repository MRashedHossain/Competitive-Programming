//code from chatGPT
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<long long> centers(n), radii(n);
        for (int i = 0; i < n; i++){
            cin >> centers[i];
        }
        long long maxR = 0;
        for (int i = 0; i < n; i++){
            cin >> radii[i];
            if(radii[i] > maxR) maxR = radii[i];
        }
        
        // Our y-values range from -maxR to maxR.
        int offset = (int)maxR; // used to shift negative y's to nonnegative indices.
        int totalRows = 2 * offset + 1;
        // Each row will store a list of intervals [L, R] covered by some circle.
        vector<vector<pair<long long, long long>>> rowIntervals(totalRows);
 
        // Process each circle.
        for (int i = 0; i < n; i++){
            long long x = centers[i];
            long long r = radii[i];
            // For each integer y in [-r, r]
            for (int y = - (int)r; y <= (int)r; y++){
                // Calculate horizontal reach d on this row.
                long long rem = r*r - (long long)y*y;
                int d = (int)floor(sqrt((long double)rem));
                long long L = x - d, R = x + d;
                int idx = y + offset;
                rowIntervals[idx].push_back({L, R});
            }
        }
 
        // For each row, merge intervals and count unique integer x points.
        long long totalCount = 0;
        for (int i = 0; i < totalRows; i++){
            if(rowIntervals[i].empty()) continue;
            auto &intervals = rowIntervals[i];
            sort(intervals.begin(), intervals.end(), [](auto &a, auto &b){
                return a.first < b.first;
            });
 
            long long curL = intervals[0].first, curR = intervals[0].second;
            long long rowCount = 0;
            for (size_t j = 1; j < intervals.size(); j++){
                long long L = intervals[j].first, R = intervals[j].second;
                // Merge if overlapping or adjacent
                if(L <= curR + 1){
                    curR = max(curR, R);
                } else {
                    rowCount += (curR - curL + 1);
                    curL = L;
                    curR = R;
                }
            }
            rowCount += (curR - curL + 1);
            totalCount += rowCount;
        }
 
        cout << totalCount << "\n";
    }
    return 0;
}