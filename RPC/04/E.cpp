#include<bits/stdc++.h>

#define ENDL '\n'
#define ll long long
#define vi vector<ll>
#define IO cin.tie(0);ios::sync_with_stdio(0);
#define pb push_back

using namespace std;

long double f(long long sum, ll x, ll n) {
    return sqrtl((long double)(x*n)/(long double)sum);
}

int main() {
    ll n, x; cin >> n >> x;
    vi nums(n);
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        sum += nums[i] * nums[i];
    }
    long double factor = f(sum, x, n);

    for(int i = 0; i < n; i++) {
        
        if(sum == 0)
            printf("0 ");
        else {
            long double ans = nums[i] * factor;
            printf("%.9f ", (double)ans);
        }
    }

    cout << ENDL;

    return 0;
}