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
    string n;
		cin >> n;

		int len = n.length();
		if ((n[len - 1] - '0') % 2 == 0)
		{
			cout << 0 << "\n";
		}
		else if ((n[0] - '0') % 2 == 0)
		{
			cout << 1 << "\n";
		}
		else
		{
			bool flag = false;
			for (int i = 1; i < len - 1; i++)
			{
				if ((n[i] - '0') % 2 == 0)
				{
					flag = true;
					break;
				}
			}

			cout << (flag ? 2 : -1) << "\n";
		}
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
 
 