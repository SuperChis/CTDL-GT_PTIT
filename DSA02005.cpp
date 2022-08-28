#include<bits/stdc++.h>
using namespace std;
int a[15], n;
string s;
bool check[15];
void OutP(){
    for(int i = 1; i <= n; i++) cout << s[a[i] - 1];
    cout << " ";
}
void Try(int i){
    int j;
    for(int j = 1; j <= n; j++){
        if(check[j] == false){
            a[i] = j;
            check[j] = true;
            if(i == n) OutP();
            else Try(i+1);
            check[j] = false;
        }
    }
}
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        n = s.size();
        for(int i = 1; i <= n; i++) check[i] = false;
        Try(1);
        cout << endl;
    }
}