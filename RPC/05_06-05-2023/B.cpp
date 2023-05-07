#include <bits/stdc++.h>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define ff first
#define ss second
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;

void solve(){
	lli n, k, cont{0}; cin >> n >> k;
	
	vi arr(n), sorted(n);
	fore(i,0,n) cin >> arr[i];

	sorted = arr;
	sort(all(sorted));

	while(arr != sorted){
		for(int i = 0; k+i <= n; i++)
			sort(arr.begin()+i, arr.begin()+k+i);

		cont++;
	}

	cout << cont << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
