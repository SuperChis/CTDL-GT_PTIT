#include<bits/stdc++.h>
using namespace std;
//ham nhap mang
void input(int a[], int n){
    for(int i = 0; i < n; i++) cin >> a[i];
}
//ham quay lui
/*
void Back_track(int a[],int index){
    cout << "[";
    for(int i = 0; i < index; i++){
         cout << a[i];
         if(a[i] != a[index-1]) cout << " ";
         else cout << "]\n";
    }     
    if(index == 1) return;
    for(int i = 0; i < index-1; i++) a[i] += a[i+1];
    Back_track(a, index-1);
}
*/
void Arr(int a[], int n){
    if (n>0) {
        //in dãy hiện tại
        cout << "[";
        for (int i=0; i<n-1; i++)
            cout << a[i] << " ";
        cout << a[n-1] << "]" << endl;
        //cập nhật dãy mới và quay
        for (int i=0; i<n-1; i++)
            a[i]=a[i]+a[i+1];
        Arr(a,n-1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        input(a,n);
        Arr(a,n);
    }
    return 0;
}
/*
1
5
1 2 3 4 5
*/