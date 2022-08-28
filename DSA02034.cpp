#include<bits/stdc++.h>
using namespace std;
int a[15], n;
string s;
bool check[15];

bool kt(){
    for(int i = 2; i < n; i++){
        if(abs(a[i] - a[i-1]) == 1 || abs(a[i+1] - a[i]) == 1) return false;
    }
    return true;
}
void OutP(){
    for(int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}

void Try(int i){
    int j;
    for(int j = 1; j <= n; j++){
        if(check[j] == false){
            a[i] = j;
            check[j] = true;
            if(i == n){
                if(kt()) OutP();
            }
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
        cin >> n;
        for(int i = 1; i <= n; i++) check[i] = false;
        Try(1);
        cout << endl;
    }
}