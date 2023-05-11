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
using vi = vector<int>;
using pii = pair<int, int>;

void solve(){
    /*
    the cost of letting the wool strand through the back unused, 
    the cost of using the wool in a stitch, 
    and the cost of starting or ending the use of a colour of wool.
    */
    lli a, b, z; cin >> a >> b >> z;

    string letras; cin >> letras;

    string pattern; cin >> pattern;

    //pos sería el último índice de donde se encontro la letra
    //ans sería el costo de usar esa letra
    map<char, lli> pos, ans;

    char anterior = ' ';

    lli idx=1;

    for(char c : pattern){
        if(anterior != c) {
            if(pos[c] != 0) {
                ans[c] += min(a * (idx - pos[c]-(lli)1), 2*z);          
            }
        } 
        
        ans[c]+= b;
        anterior = c;
        pos[c] = idx;
        idx++;
    }

    for(char c : letras){
        cout << (pos[c] != 0 ? ans[c] + 2*z : ans[c])<< "\n";
    }

}

int main() {

    IO;
    solve();
    
    return 0;
}