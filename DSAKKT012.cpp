#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, S;
    cin >> n >> S;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int ans = 0;
    if(S < a[0]) cout << -1 << endl;
    else {
        for(int i = n-1; i >= 0; i--){         
            S %= a[i];
            ans++;
            continue;
            if(S == 0) break;
        }
        if(S > 0) cout << -1 << endl;
        else cout << ans << endl;
    }
    
}