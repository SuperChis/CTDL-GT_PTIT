#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<string> v;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        mp[s]++;
    }
    string s = "";
    v.push_back(s);
    for(auto x : mp){
        v.push_back(x.first);
    }
    n = v.size() - 1;
    int a[k+1];
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
    while(1){
        for(int i = 1; i <= k; i++){
            cout << v[a[i]] << " ";
        }
        cout << endl;
        bool ok = false;
        for(int i = k; i >= 1; i--){
            if(a[i] != n - k + i){
                ok = true;
                a[i]++;
                for(int j = i + 1; j <= k; j++){
                    a[j] = a[j-1] + 1;
                }
                break;
            }
        }
        if(ok == false) break;
    }
}
/*
6 2
DONG TAY NAM BAC TAY BAC
*/