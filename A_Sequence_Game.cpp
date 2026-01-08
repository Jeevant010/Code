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

        int a[100000];

void solve() {
    int n;
        cin>>n;
        int b[n];
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        vector<int> ans;
        ans.push_back(b[0]);
        for(int i=1; i<n;i++)
        {
            if(b[i]>=b[i-1])
            {
                ans.push_back(b[i]);
            }
            else
            {
                ans.push_back(b[i]);
                ans.push_back(b[i]);
            }
        }
        int k = ans.size();
        cout<<k<<"\n";
        for(int i=0; i<k; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
    
}
 
 