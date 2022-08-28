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
    vector<vector<int>> v;
    //int res = 0;
    if (n>0) { 
        vector<int> res;  
        //push dãy hiện tại vao vector
        for (int i=0; i<n; i++)
            res.push_back(a[i]);
        //res++;
        v.push_back(res);
        //cập nhật dãy mới và quay
        for (int i=0; i<n-1; i++)
            a[i]=a[i]+a[i+1];
        Arr(a,n-1);
    }
    for(int i = 0; i < v.size(); i++){
        cout << "[";
        for(int j = 0; j < v[i].size(); j++){
            if(j == v[i].size()-1) cout << v[i][j];
            else cout << v[i][j] << " ";
        }
        cout << "] ";
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
        cout << endl;
    }
    return 0;
}
/*
1
5
1 2 3 4 5
*/