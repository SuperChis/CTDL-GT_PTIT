// thua toan sinh ke tiep
#include<bits/stdc++.h>
using namespace std;
int n, k, ok;
void ktao(int a[]){
    for(int i = 1; i <= k; i++) cin >> a[i];
}
// ktao gia tri ban dau
void sinh(int a[]){
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[k+1];
        ok = 1;
        ktao(a);
        sinh(a);
        if(ok == 0) for(int i = 1; i <= k; i++) a[i] = i;
        for(int i = 1; i <= k; i++) cout << a[i] << " ";
        cout << endl;
    }  
}