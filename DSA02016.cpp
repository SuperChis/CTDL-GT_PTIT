//Quan hau 1
#include<bits/stdc++.h>
using namespace std;
int a[15], n, ans;
bool check[15], Xuoi[25], Nguoc[25];

void Outp(){
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
}
void Try(int i){
    int j;
    for(int j = 1; j <= n; j++){
        if(!check[j] && !Xuoi[i-j+n] && !Nguoc[i+j-1]){
            a[i] = j;
            check[j] = true;
            Xuoi[i-j+n] = true;
            Nguoc[i+j-1] = true;
            if(i == n) ans++;
            else Try(i+1);
            check[j] = false;    
            Xuoi[i-j+n] = false;
            Nguoc[i+j-1] = false;    
        }
    }
}
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int j = 1; j <= n; j++) check[j] = false;
        for(int j = 1; j <= n; j++){
            Xuoi[j] = false;
            Nguoc[j] = false;
        } 
        ans = 0;
        Try(1);
        cout << ans << endl; 
    }
}