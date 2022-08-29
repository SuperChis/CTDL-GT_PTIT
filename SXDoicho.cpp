#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int n){
    for(int i = 0;i < n; i++) cin >> a[i];
}
void in(int a[], int n){
    for(int i = 0;i < n; i++) cout << a[i] << " ";
    cout << endl;
}
void sapxep1(int a[], int n){
    int i, j, t;
    for(i = 0;i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(a[i] > a[j]){
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }
        }
        cout << "Buoc " << (i+1) << ": ";
        in(a,n);
    }
}
main(){
    int a[100], n;
    cin >> n;
    nhap(a,n);
    sapxep1(a,n);
}
/*
5 
9 7 4 5 8
*/

