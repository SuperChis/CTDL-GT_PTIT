#include<bits/stdc++.h>
using namespace std;
int n, start;
long long  ans = 1e18, cmin = 1e18, s = 0;
int a[16][16], tmp[16], check[16];

void Try(int i){
    for(int j = 2; j <= n; j++){
        if(!check[j]){ //kiem tra xem dinh do da duoc tham hay chua
            check[j] = 1;//danh dau dinh da duoc tham
            tmp[i] = j; //gan dinh tiep theo trong chu trinh la dinh da duoc tham
            s += a[tmp[i-1]][j]; // cong chi phi di tu diem truoc den diem hien tai dang xet
            if(i == n){
                if(s + a[j][start] < ans) ans = s + a[j][start]; //neu chi phi nho hon thi cap nhat bien ans
                // cout << "Hanh trinh nguoi di du lich:\n";
                // for(int i = 1; i <= n; i++) cout << tmp[i] << " ";
                // cout << tmp[start] << endl;
            }
            else if(s + (n-i+1)*cmin < ans) Try(i+1);//check chi phi di cac thanh pho tiep theo co lon hon chi phi nho nhat hay khong, neu lon hon thi dung lai
            s -= a[tmp[i-1]][j]; 
            check[j] = 0;
        }
    }
}
int main(){ 
    cin >> n >> start; // strat la dinh bat dau chu trinh
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] < cmin && a[i][j] != 0) cmin = a[i][j]; // tim gia tri nho nhat trong ma tran de so sanh
        }
    tmp[1] = start;
    Try(2);
    cout << "Hanh trinh nguoi di du lich:\n"; 
    for(int i = 1; i <= n; i++) cout << tmp[i] << " ";
    cout << tmp[start] << "\n";
    cout << "Chi phi nho nhat:";
    cout << ans << endl; // chi phi nho nhat
    return 0;
}
/*
6 1
0 20 35 10 15 31
20 0 90 50 50 55
35 90 0 12 35 70
10 50 12 0 5 5
15 50 35 5 0 95
31 55 70 5 95 0
*/