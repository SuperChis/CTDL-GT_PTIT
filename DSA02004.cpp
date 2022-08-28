#include<bits/stdc++.h>
using namespace std;
//note thứ tự ưu tiên bước đi: xuống, trái, phải, lên
int n, a[11][11];
string s;
bool ok, check[15][15] ={false};
void Input(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
}

void Try(int x, int y){
    if(x == n && y == n ){
        ok = true;
        cout << s << " ";
        return;
    }
    //đánh dấu ô đã được thăm
    check[x][y] = true;
    //check đỉnh đã được thăm chưa, nếu t/m thêm thứ tự bước đi
    //check đi xuống
    if(x < n && a[x+1][y] == 1 && check[x+1][y] == false){
        s += 'D';
        Try(x+1, y);
        s.erase(s.size() - 1);
    }
    //check sang trái
    if(y >= 1 && a[x][y-1] == 1 && check[x][y-1] == false){
        s += 'L';
        Try(x, y-1);
        s.erase(s.size() - 1);
    }
    //check sang phải
    if(y < n && a[x][y+1] == 1 && check[x][y+1] == false){
        s += 'R';
        Try(x, y+1);
        s.erase(s.size() - 1);
    }
    //check đi lên
    if(x >= 1 && a[x-1][y] == 1 && check[x-1][y] == false){
        s += 'U';
        Try(x-1, y);
        s.erase(s.size() - 1);
    }
    check[x][y] = false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Input();
        ok = false;
        if(a[1][1] == 0){
            cout << -1 << endl;
            continue;
        }
        Try(1,1);
        if(ok == false) cout << -1;
        cout << endl;
    }
}
/*
3
4
1 0 0 0
1 1 0 1
0 1 0 0
0 1 1 1
4
1 0 0 0
1 1 0 1
1 1 0 0
0 1 1 1
5
1 0 0 0 0
1 1 1 1 1
1 1 1 0 1
0 0 0 0 1
0 0 0 0 1
*/