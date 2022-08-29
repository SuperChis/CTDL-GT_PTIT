#include<bits/stdc++.h>
using namespace std;

int n, m, k;
//int a[20][20];
vector<int> adj[1005]; // luu danh sach ke
bool visited[1005]; //check dinh da tham

void inp(){
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        //adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
    
}
//Depth first search (Tim kiem theo chieu sau)
void DFS(int u){
    cout << u << " ";
    //danh dau u da duoc tham
    visited[u] = true;
    for(int v : adj[u]){
        //Neu dinh v chua duoc tham
        if(!visited[v]){
            DFS(v);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){   
        inp();
        DFS(k);
        cout << endl;
    }
    
}
/*
1
6 9 5
1 2
1 3
2 3
2 4
3 4
3 5
4 5
4 6
5 6
*/