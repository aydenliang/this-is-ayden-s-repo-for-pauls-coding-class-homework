#include <bits/stdc++.h>
#define DEBUG true

#define int long long
#define endl '\n'
using namespace std;

signed main() {
    if(!DEBUG){
        ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    }
    else{
        (void)freopen("test.in", "r", stdin);
        (void)freopen("test.out", "w", stdout); 
    }
    
    int q;
    cin >> q;
    
    while(q--){
        int n;
        cin >> n;
        
        string s, t;
        cin >> s >> t;
        
        // Sort both strings and compare
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if(s == t){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
