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
	int n, cnt = 0; cin >> n;
	vector<bool> yes(n, false);

	fore(i,0,n){
		if(s[i] == '1'){
			if(yes[i]) cnt--;
			yes[i] = true;
			cnt++;

			if(i+1 < n){
				if(yes[i+1]) cnt--;
				yes[i+1] = true;
				cnt++;
			}

			if(i+2 < n){
				if(yes[i+2]) cnt--;
				yes[i+2] = true;
				cnt++;
			}
		} else
			continue;
	}

	cout << cnt << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
