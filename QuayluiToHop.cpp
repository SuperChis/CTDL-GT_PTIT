//quay lui Hoan vi
#include<bits/stdc++.h>
using namespace std;
int a[15], n, k;
void in(){
    for(int i = 1; i <= k; i++) cout << a[i];
    cout << ' ';
}
void Try(int i){
    for(int j = a[i-1] + 1; j <= n-k+i; j++){
        a[i] = j;
        if(i == k) in();
        else Try(i+1);
    }
}
int main(){
    cin >> n >> k;
    Try(1);
    cout << endl;
}