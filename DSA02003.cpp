#include<bits/stdc++.h>
using namespace std;
int n;
bool a[11][11], ok;
string s;
void Input(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
}
void Try(int x, int y){
    if(x == n && y == n){
        cout << s << " ";
        ok = 1;
        return;
    }
    if(a[x+1][y] == 1){
        s += 'D';
        Try(x+1, y);
        s.erase(s.size()-1);
    }
    if(a[x][y+1] == 1){
        s += 'R';
        Try(x, y+1);
        s.erase(s.size() - 1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ok = 0;
        Input();
        if(a[1][1] == 0){
            cout << -1 << endl;
            continue;
        } 
        Try(1,1);
        if(ok == 0) cout << -1 << endl;
        cout << endl;
    }
}
/*
2
4
1  0  0  0
1  1  0  1 
0  1  0  0 
1  1  1  1
5
1 0 0 0 0
1 1 1 1 1
1 1 0 0 1
0 1 1 1 1
0 0 0 1 1
*/