//Quan hau 1
//vi tri xuoi = i - j + n
//Vi tri nguoc = i + j - 1
#include<bits/stdc++.h>
using namespace std;
int a[15], c[10][10], n = 8, maxx;
bool check[15], Xuoi[25], Nguoc[25];

void Inp(){
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) 
            cin >> c[i][j];  
}
void UpDate(){
    int t = 0;
    for(int i = 1; i <= n; i++){
        t += c[i][a[i]];
    }
    if(t > maxx) maxx = t;
}

void Try(int i){
    int j;
    for(int j = 1; j <= n; j++){
        if(!check[j] && !Xuoi[i-j+n] && !Nguoc[i+j-1]){
            a[i] = j;
            check[j] = true;
            Xuoi[i-j+n] = true;
            Nguoc[i+j-1] = true;
            if(i == n) UpDate();
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
    int t;
    cin >> t;
    while(t--){
        Inp();
        maxx = 0;
        for(int j = 1; j <= 10; j++) check[j] = false;
        for(int j = 1; j <= 20; j++){
            Xuoi[j] = false;
            Nguoc[j] = false;
        } 
        Try(1);
        cout << maxx << endl; 
    }
}
/*
1
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
48 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
*/