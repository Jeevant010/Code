#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define INF 1e9

ll gcd(ll a, ll b){
    if( b>a ) swap(a,b);
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b ){
    return abs(a * b) / gcd(a, b);
}

ll og2(ll x){
    return (64 - __builtin_clzll(x) - 1);
}

vector<vector<int>> adj;
vector<bool> visited;

int dfs(int node) {
    visited[node] = true;
    int depth = 1; // count current employee
    for (int child : adj[node]) {
        if (!visited[child]) {
            depth = max(depth, 1 + dfs(child));
        }
    }
    return depth;
}


void solve() {
    int n;
    cin >> n;
    adj.assign(n + 1, {});
    visited.assign(n + 1, false);

    // Build the hierarchy graph
    for (int i = 1; i <= n; i++) {
        int manager;
        cin >> manager;
        if (manager != -1) {
            adj[manager].push_back(i);
        }
    }

    int maxDepth = 0;
    // Start DFS from each root (boss)
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            maxDepth = max(maxDepth, dfs(i));
        }
    }

    cout << maxDepth << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
}
 
 