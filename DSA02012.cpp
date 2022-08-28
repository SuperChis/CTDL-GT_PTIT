#include<bits/stdc++.h>
using namespace std;
int n, m, cnt;
int a[105][105];
void Input(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            a[i][j] = 1;
        }       
    }
}
void Try(int x, int y){
    if(x == n && y == m){
        cnt++;
        return;
    }
    if(a[x+1][y] == 1){
        Try(x+1, y);
    }
    if(a[x][y+1] == 1){
        Try(x, y+1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        cnt = 0;
        Input(); 
        Try(1,1);
        cout << cnt << endl;
    }
}