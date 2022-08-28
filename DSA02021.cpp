#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        long long n, k;
        cin >> s >> k;
        n = s.size();
        while(n < k) n *= 2; 
        while(n > s.size()){ 
            if(k > n/2){ 
                k -= n/2; 
                if(k > 1) k -= 1; 
                else k = n/2;
            }
            n /= 2; 
        }
        cout << s[k-1] << endl;
    }
    return 0;
}