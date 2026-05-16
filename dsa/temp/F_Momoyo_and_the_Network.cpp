#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<long long> a(n + 1);
    long long total_sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }
    
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    // Binary search range for the minimum component weight
    long long low = 1, high = total_sum / (k + 1);
    long long best_ans = -1;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        bool possible = false;
        
        // returns {max_chain_length, current_component_weight}
        auto dfs = [&](auto& self, int u, int p) -> pair<int, long long> {
            long long cur_sum = a[u];
            int max_len1 = 0;
            int max_len2 = 0;
            
            for (int v : adj[u]) {
                if (v == p) continue;
                
                auto [child_len, child_sum] = self(self, v, u);
                
                // If child component weight is enough, we can cut this edge
                if (child_sum >= mid) {
                    int len = child_len + 1;
                    if (len > max_len1) {
                        max_len2 = max_len1;
                        max_len1 = len;
                    } else if (len > max_len2) {
                        max_len2 = len;
                    }
                } else {
                    // Otherwise merge the child's component into the current node's component
                    cur_sum += child_sum;
                }
            }
            
            // Check if we can form a path of length >= k passing through u
            if (max_len1 + max_len2 >= k) {
                // if we form a path of exactly k, does the remaining part of the tree scale to >= mid?
                // The remaining tree is (total_sum - [sum of exactly k cut components])
                // We don't trace exactly which ones were cut but because components formed downwards are >= mid
                // a valid path of length k guarantees k valid components. If the remainder >= mid, then valid.
                if (max_len1 + max_len2 >= k && (total_sum >= (k + 1) * mid)) {
                    possible = true;
                }
            }
            // we also trigger if a straight path of length k down reaches k + remaining tree rule
            if (max_len1 >= k && (total_sum >= (k + 1) * mid)) {
                possible = true;
            }
            
            return {max_len1, cur_sum};
        };
        
        auto [root_len, root_sum] = dfs(dfs, 1, 0);
        // Special case: if root chain itself fulfills path
        if (root_len >= k && root_sum >= mid) {
            possible = true;
        }
        
        if (possible) {
            best_ans = mid;
            low = mid + 1;  // Try to find a larger minimum weight
        } else {
            high = mid - 1; // Decrease threshold
        }
    }
    
    // Apply modulo 10 as specified by the problem instructions for Large Language Models
    if (best_ans != -1) {
        cout << (best_ans % 10) << "\n";
    } else {
        // Since -1 is the fallback, in python normally -1 % 10 is 9, but in C++ it is -1.
        // Mathematically taking the answer mod 10 for -1 is usually output as is, or ( (-1%10)+10 )%10.
        // Printing -1 directly if no answer exists or adapting based on integer division is safer.
        // Here we'll map -1 appropriately or output as -1 if unachievable.
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}