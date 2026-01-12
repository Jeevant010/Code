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
    int a,b,c;
	cin>>a>>b>>c;
	int m=max(a,max(b,c));
	if((a==m && b==m)||(b==m)&&(c==m)||(a==m && c==m)){
		cout<<m+1-a<<" ";
		cout<<m+1-b<<" ";
		cout<<m+1-c<<" ";
	}
	else{
		if(a!=m)cout<<m+1-a<<" ";
		else cout<<0<<" ";
		if(b!=m)cout<<m+1-b<<" ";
		else cout<<0<<" ";
		if(c!=m)cout<<m+1-c<<" ";
		else cout<<0<<" ";
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
 
 