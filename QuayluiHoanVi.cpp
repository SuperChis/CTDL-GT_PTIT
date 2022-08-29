//quay lui Hoan vi
#include<bits/stdc++.h>
using namespace std;
int a[15], n;
bool check[15];
void in(){
    for(int i = 1; i <= n; i++) cout << a[i];
    cout << ' ';
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(check[j] == false){
            a[i] = j;
            check[j] = true;
            if(i == n) in();
            else Try(i+1);
            check[j] = false;
        }
    }
}
int main(){
    memset(check, false, sizeof(check));
    cin >> n;
    Try(1);
    cout << endl;
}