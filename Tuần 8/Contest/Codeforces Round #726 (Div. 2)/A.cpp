
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed<<setprecision(n)

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef vector <ii> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt ;
    cin >> tt ;
    while(tt--){
        int n ;
        cin >> n ;
        vector<ll> a(n) ;
        ll sum  = 0 ;
        ll ans = 0 ;
        for (auto&it:a){
            cin >> it ;
            sum+=it ;
        }
        
        if ( sum == n){
            cout << 0 <<nl;
            continue;
        }
        if ( sum-n > 0)
            cout << sum-n <<nl;
        else
            cout << 1 <<nl;
    }
    
    return 0;
}
