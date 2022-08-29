//sinh to hop chap k cua n ptu
// thua toan sinh ke tiep
#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], ok;
void ktao(){
    for(int i = 1; i <= k; i++) a[i] = i;
}
// ktao gia tri ban dau
void sinh(){
    int i = k;
    //gia tri max tai vi tri i la n-k+i
    while(i >= 1 && a[i] == n-k+i){
        i--;
    }
    if(i == 0) ok = 0;
    else{
        a[i]++;
        for(int j = i+1; j <= k; j++)
            a[j] = a[j-1] + 1;
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ok = 1;
        ktao();
        while(ok){
            for(int i = 1; i <= k; i++){
                cout << a[i];
            }
            cout << " ";   
            sinh(); 
        }
    cout << endl;
    }  
}