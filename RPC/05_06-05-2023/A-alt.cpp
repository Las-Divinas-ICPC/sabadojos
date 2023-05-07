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

// Alice == true, Bob == false
inline bool whichTurn(const int punt){
	if(punt == 0) return true;
	else if(((punt-1)/2)%2==1) return false;
	else return true;
}

void solve(){
	int n, a{0}, b{0}, x, y, error{-1}; cin >> n;
	char s[6];

	fore(i,0,n){
		cin >> s;

		// No es realmente necesario, pensé que teníamos que agotar el búfer de entrada al resolver los problemas :b
		if(error != -1) continue;
		

		char* yp;
		fore(i,0,3) // '-' debería de estar en la posición 1 ó 2 (0-indexado)
			if(s[i] == '-'){
				s[i] = '\0';
				yp = &s[i+1];
			}
		
		x = stoi(s);
		y = stoi(yp);

		if(whichTurn(x+y)){ // Turno de Alice
			if(x == 11 && y == 11) error = i;
			if((a == 11 || b == 11) && (a != x || b != y)) error = i;
			if(x < a || y < b) error = i;

			a = x;
			b = y;
		} else { // Turno de Bob
			if(x == 11 && y == 11) error = i;
			if((a == 11 || b == 11) && (a != y || b != x)) error = i;
			if(y < a || x < b) error  = i;

			a = y;
			b = x;
		}
	}

	cout << (error == -1 ? "ok" : "error " + to_string(error+1)) << ENDL;
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
