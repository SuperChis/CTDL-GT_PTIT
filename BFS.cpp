#include<bits/stdc++.h>
using namespace std;

int n, m, u;
int a[1005][1005];
vector<int> adj[1005]; // luu danh sach ke
bool visited[1005]; //check dinh da tham
void inp(){
    cin >> n >> m >> u;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));

}
//Breadth first search (Tim kiem theo chieu sau)
void BFS(int u){
    //Buoc khoi tao
    queue<int> q;
    q.push(u);
    visited[u] = true;
    //Buoc lap
    while (!q.empty()){
        int v = q.front();//lay dinh dau hang doi
        q.pop();//xoa dinh hang doi
        cout << v << " ";
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;// danh dau dinh da tham
            }
        }
    }
    
}
//chuyen tu ma tran ke sang danh sach ke
void chuyen(){
    vector<pair<int, int>> res;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 1 && i < j){
                res.push_back({i,j});
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        inp();
        BFS(u);
        cout << endl;
    }
    
}
/*
1
6 9 1
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
*/