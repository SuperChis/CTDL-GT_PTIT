#include<bits/stdc++.h>
using namespace std;

int n, k, s, a[1005], b[1005];
vector<vector<int>> ans;

void Input(){
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1, a+n+1);
}
void Output(){
    for(int i = ans.size() - 1; i >= 0; i--){
        for(auto x : ans[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    cout << ans.size() << endl;
}
void Try(int i, int s, int cur){
    if(s == k){
            vector<int> tmp;
            for(int x = 1; x < i; x++) tmp.push_back(b[x]);
            ans.push_back(tmp);
            return;
    }
    if(s > k) return;
    for(int j = cur; j <= n; j++){
        s += a[j];
        b[i] = a[j];
        if(s <= k) Try(i+1, s, j+1);
        s -= a[j];
    }
}
int main(){
    cin >> n >> k;
    Input();
    Try(1,0,1);
    Output();
}
/*
5 50      
5 10 15 20 25   
*/