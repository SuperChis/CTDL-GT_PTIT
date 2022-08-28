#include<bits/stdc++.h>
using namespace std;
int a[15], n;

//bool check[15];
bool check(){
    if(a[5] == 0) return false;
    return true;
}
void OutP(){
    for(int i = 1; i <= n; i++){
        if(a[i] == 1) cout << "2";
        else cout << a[i];
        if(i == 2 || i == 4) cout << '/';
    }
    cout << endl;
}

void Try(int i){
    int j;
    for(int j = 0; j <= 1; j++){
        a[i] = j;        
        if(i == n) if(check()) OutP();
        else Try(i+1);
    }
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  
    n = 8;
    Try(1);
    cout << endl;
    
}
/*
AC
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a1[3] = {"02", "20", "22"};
    string a2[1] = {"02"};
    string a3[8] = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 1; j++)
            for (int k = 0; k < 8; k++)
                cout << a1[i] + "/" + a2[j] + "/" + a3[k] << endl;
}