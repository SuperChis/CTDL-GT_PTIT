#include<bits/stdc++.h>
using namespace std;
int a[15], ans[15], n, k, s;
bool ok;

void outp(int x){
    cout << "[";
    for(int i = 1; i < x-1; i++) cout << ans[i] << " ";
    cout << ans[x-1] << "] ";
}

void Try(int i, int s, int cur){ //cur: vitri hien tai
    if(s == k){
        outp(i);
        ok = true; 
        return;
    }
    for(int j = cur; j <= n; j++){
        s += a[j];
        ans[i] = a[j];
        if(s <= k) Try(i+1, s, j+1);
        s -= a[j];
    }
}

void Solve(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    ok = false;
    Try(1,0,1);
    if(!ok) cout << -1 << endl;
    else cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) Solve();
    return 0;
}

/*
2
5 50
5  10 15 20  25
8  53
15  22  14  26  32  9  16  8
*/