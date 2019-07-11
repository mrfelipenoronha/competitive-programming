//codeforces.com/contest/1159/problem/A

#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define fr(i, n) for(int i = 0; i < n; i++)
#define frr(i, n) for(int i = 1; i <= n; i++)

#define dbg(x) cout << #x << " = " << x << endl
#define all(x) x.begin(),x.end()
#define ms(x, i) memset(x, i, sizeof(x))

#define p(x) cout << x << endl
#define pv(x) for (auto u : x) cout << u << " "; cout << "\n";

#define f first
#define s second

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int INF = 0x3f3f3f3f;

typedef long long int ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
	fastio

	int n, ans = INT_MAX;
	string s;

	cin >> n;
	cin >> s;

	fr(j, 101) {

		int anss = j;
		fr(i, n) {

			if (s[i] == '-') anss--;
			else anss++;

			if (anss < 0) {
				anss = INT_MAX;
				break;
			}
		}

		if (anss >= 0)
			ans = min(ans, anss);
	}

	p(ans);
}
