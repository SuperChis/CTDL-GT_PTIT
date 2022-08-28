#include<bits/stdc++.h>
using namespace std;

int n, k , C[20];
char c;
/*
void make(){
    for(int i = 1; i <= k; i++) C[i] = i;
}
*/
void Out(){
    for(int i = 1; i <= k; i++) cout << char(C[i]+64);
    cout << endl;
}

void Try(int i){
    int j;
    for(int j = C[i-1] + 1; j <= n-k+i; j++){
        C[i] = j;
        if(i == k) Out();
        else Try(i+1);  
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> c >> k;
    n = (c - 'A') + 1;
    Try(1);
}
