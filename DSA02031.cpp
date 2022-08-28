#include<bits/stdc++.h>
using namespace std;
int a[15], n;
char c;
bool check[15];

bool kt(){
    for (int i = 2; i <= n - 1; i++)
        if ((a[i] == 1 || a[i] == 5) && 
        (a[i - 1] != 1 && a[i - 1] != 5) && 
        (a[i + 1] != 1 && a[i + 1] != 5))
            return 0;
    return 1;
}
void OutP(){
    for(int i = 1; i <= n; i++) //cout << s[a[i] - 1];
        cout << char(a[i]+64);
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
    cin >> c;
    n = (c - 'A') + 1;
    for(int i = 1; i <= n; i++) check[i] = false;
    Try(1);  
}