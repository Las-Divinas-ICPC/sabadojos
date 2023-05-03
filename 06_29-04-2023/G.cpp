/*
Grupo Marrano - El Ansioso
0:18 ━━━❍─────────── -3:06
↻        ⊲  Ⅱ  ⊳        ↺
   VOLUME: ▁▂▃▄▅▆▇ 100%

Problem: G. Grade Point Average
*/
#include <bits/stdc++.h>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;
using vi = vector<int>;

void solve(){
	int n, k; cin >> n >> k;
	lli sum = 0, aux;
	fore(i,0,n){
		cin >> aux;
		sum += aux;
	}

	cout << sum/(lli)n << ".";
	
	lli res = sum%n;
	res *= 10;

	while(k--){
		cout << res/n;
		res %= n;
		res *= 10;
	}

	cout << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
