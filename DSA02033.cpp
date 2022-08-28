//thuat toan sinh hoan vi 
#include<bits/stdc++.h>
using namespace std;
int n, a[10], ok;
void ktao(){
    for(int i = 1; i <= n; i++) a[i] = i;
}
void sinh(){
    int i = n-1;
    while(i >= 1 && a[i] > a[i+1]) i--;
    if(i == 0) ok = 0;// finish_ cau hinh cuoi cung
    else{
        // di tim gia tri nho nhat trong doan [i+1, n] de hoan vi voi n
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        int l = i+1, r = n;
        while(l < r){
            swap(a[l], a[r]);
            l++; r--;
        }
        // reverse(a+i+1, a+n+1) : lat nguoc doan tu i+1 den n
    }
}
bool check(){
    for(int i = 1; i <= n-1; i++){
        if(abs(a[i] - a[i+1]) == 1) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ktao();
        ok = 1;
        while(ok){
            if(check()){
                for(int i=1; i <= n; i++) cout << a[i];
                cout << endl;
            }
            sinh();
        } 
        cout <<  " ";
    }  
} 
