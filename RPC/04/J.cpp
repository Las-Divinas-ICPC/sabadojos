#include <bits/stdc++.h>
 
#define ENDL '\n'
#define lli long long
#define pb push_back
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO                              \
    ios_base::sync_with_stdio(false);   \
    cin.tie(0);                         \
    cout.tie(0)
 
using namespace std;
using vi = vector<lli>;
using pii = pair<int, int>;

long double calc(int radio, int e){
    if(radio == e) return M_PI / 3.0;
    lli b = e, a = radio;

    // return (M_PI- acos((2*a*a-b*b)/float(2*a*a)))/float(2);
    // c2 = a2 + b2 - 2cos(2a)
    return acos((2*a*a-b*b)/(long double)(2*a*a));

}

double radianes_a_grados(double radianes) {
    return radianes * (180.0 / M_PI);
}

void solve(){
    long double n, e; cin >> n >> e;

    vi rad(n);

    lli ans = 0;

    fore(i, 0, n){
        cin >> rad[i];

    }
    fore(i, 0, n){
        if(rad[i]*2 < e) ans++;
        else if(rad[i]*2 == e) ans += 2;
        else {
            long double radianess = calc(rad[i], e);
            //cout << radianess << " " << radianes_a_grados(radianess) << " " << floor(2*M_PI / radianess)<<ENDL;
            ans += floor(2*M_PI/radianess);
        }
        
        /*long double ang = radianes_a_grados(calc(rad[i], e));
        ans += 360/ang;*/
    }

    cout << ans << ENDL;
}

int main() {

    IO;
    solve();
    
    return 0;
}