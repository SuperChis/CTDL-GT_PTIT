#include<bits/stdc++.h>
using namespace std;
int n, a[11], ok, cnt;
void ktao(){
    cnt = 1;
    a[1] = n;
}
void sinh(){
    int i = cnt;
    while(i >= 1 && a[i] == 1) i--;// tim bit khac 1 dau tien
    if(i == 0){
         ok = 0; // cau hinh cuoi cung
    }
    else{
        a[i]--;//giam bit khac 1 dau tien di 1dv
        int d = cnt - i + 1;//phan con thieu
        cnt = i;//gan bien count = scs con lai
        int q = d / a[i];//bieu dien phan con thieu qua so a[i]
        int r = d % a[i];
        if(q){
            for(int j = 1; j <= q; j++){
                a[++cnt] = a[i];
            }
        }
        if(r) a[++cnt] = r;
    }
}
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; 
    while(t--){
        cin >> n;
        ok = 1;
        ktao();
        while(ok){
            cout << "(";
            for(int i = 1; i <= cnt; i++){
                cout << a[i];
                if(i == cnt) cout << ") ";
                else cout << " ";
            }
            sinh();
        }
        cout << endl;
    }
}