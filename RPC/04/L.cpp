#include <bits/stdc++.h>
#include <cmath>
 
#define ENDL '\n'
#define lli long long
// #define  long double
#define pb push_back
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO                              \
    ios_base::sync_with_stdio(false);   \
    cin.tie(0);                         \
    cout.tie(0)
 
using namespace std;
using vi = vector<int>;
using pii = pair<long double, long double>;


void solve(){
    int n; cin >> n;

    // vi v(n);
    double s = 0, x;
    fore(i, 0, n) {
        cin >> x;
        s += pow(x, 3);
    }


    cout << fixed;
    cout << setprecision(25);
    cout << cbrt(s) << ENDL;
    // cout << anguloMax << ENDL;

}
 
int main(){
    IO;
    //int t; cin >> t; while(t--)
    solve();
    return 0;
}