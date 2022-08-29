#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n){
    for(int i = 0; i < n; i++) cin >> a[i];
}

void binary_s(int a[], int n, int k){
    int l = 0, r = n-1;
    int check = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == k){
            check = 1;
            cout << mid+1 << "\n"; 
            break; 
        } 
        else if(a[mid] < k){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    if(check == 0) cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        input(a,n);
        binary_s(a,n,k);
    }
}
/*
2
5 3
1 2 3 4 5
6 5
0 1 2 3 9 10
*/