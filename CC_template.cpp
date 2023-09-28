#include <bits/stdc++.h>
using namespace std;

// Define commonly used macros
#define ll long long
#define pb push_back
#define pob pop_back

// Define constants
const int MOD = 1e9 + 7;
const int INF = INT_MAX;

template <typename T>
void inpVec(vector<T> &a, int n) {for (int i = 0; i < n; i++) { cin >> a[i];}}

template <typename T>
void outVec(vector<T> &a) { for (auto &x : a) { cout << x << " ";} cout << endl;}

ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void boost(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// This is what you looking for
void solve(){

}


// Main function, get started
int main() {
    boost();
    int t;
    cin >> t;
    while (t--) {
      solve();
    }
    return 0;
}
