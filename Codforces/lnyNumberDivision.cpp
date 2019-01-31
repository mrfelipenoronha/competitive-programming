//codeforces.com/contest/1106/problem/C

#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define fr(i,n) for(int i=0;i<n;i++)
#define frr(i,n) for(int i=1;i<=n;i++)

#define dbg(x) cout << #x << " = " << x << endl
#define all(x)	x.begin(),x.end()

#define p(x) cout << #x << endl
#define pv(x) for (auto u : x) cout << u << " \n"[u == *(x.end()-1)];

#define f first
#define s second

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
	fastio
	
	ll n;
	cin >> n;

	ll a[n];
	fr(i, n) cin >> a[i];

	sort(a, a+n);

	ll ans = 0ll;
	fr(i, n/2) ans += pow( (a[i]+a[n-i-1]) , 2);

	cout << ans << endl; 
}
