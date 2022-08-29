#include<bits/stdc++.h>
using namespace std;
int n, a[15], s;
void Xuat(int i){
    cout << '(';
    for(int j = 1; j <= i; j++){
        cout << a[j];
        if(j != i) cout << " ";
    }  
    cout << ") ";
}
void Try(int i, int j, int s){
    for(int k = j; k >= 1; k--){
        if(s + k <= n){
            a[i] = k;
            s += k;
            if(s == n) Xuat(i);
            else Try(i+1, k, s);
            s -= k;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(1, n, 0);
        cout << endl;
    } 
}