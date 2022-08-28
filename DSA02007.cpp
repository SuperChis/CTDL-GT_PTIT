#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        //xet tu dau day, chon phan tu lon nhat va o xa nhat de swap
        for(int i = 0; i < s.size(); i++){
            char Max = s[s.size() - 1];
            int key = s.size() - 1;
            //tim ptu lon nhat o xa nhat
            for(int j = s.size() - 1; j>i && k>0; j--){
                if(Max < s[j]){
                    Max = s[j];
                    key = j; //vtri ptu max
                }
            }
            if(Max > s[i] && k > 0){
                swap(s[i], s[key]);
                k--;
            }
        }
        cout << s << endl;
    }
}
/*
3
4
1234567
3
3435335
2
1034
*/
