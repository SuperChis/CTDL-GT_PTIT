#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i = s.size();
        while(i-- && s[i] == '1') s[i] = '0';//Duyệt ngược đổi các số 1 thành số 0 cho đến khi gặp số 0 thì ngừng
        if(i >= 0) s[i] = '1';// đổi số 0 tại vị trí đó thành số 1
        cout << s << endl;
    }
}
/*
2
010101
111111
*/
