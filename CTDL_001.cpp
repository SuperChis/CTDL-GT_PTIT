//thuat toan sinh  
#include<bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void ktao(){
    for(int i = 1; i <= n; i++) a[i] = 0;
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
         i--;
    }
    if(i == 0) ok = 0;// finish_ cau hinh cuoi cung
    else{
        a[i] = 1;
    }
}
int thuannghich(){
    int l = 1, r = n;
    while(l <= r){
        if(a[l] != a[r]) return 0;
        l++; r--;
    }
    return 1;
}
main(){
    cin >> n;
    ktao();
    ok = 1;
    while(ok){
        if(thuannghich()){
            for(int i=1; i <= n; i++) 
                cout << a[i] << " ";
            cout << "\n";
        }
        sinh();      
    }  
    
} 
