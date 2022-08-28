#include<bits/stdc++.h>
using namespace std;
int n;
long long  ans = 1e18, cmin = 1e18, s = 0;
int a[16][16], tmp[16], check[16];

void Try(int i){
    for(int j = 2; j <= n; j++){
        if(!check[j]){ //kiem tra xem dinh do da duoc tham hay chua
            check[j] = 1;//danh dau dinh da duoc tham
            tmp[i] = j; //gan dinh tiep theo trong chu trinh la dinh da duoc tham
            s += a[tmp[i-1]][j]; // cong chi phi di tu diem truoc den diem hien tai dang xet
            if(i == n){
                if(s + a[j][1] < ans) ans = s + a[j][1]; //neu chi phi nho hon thi cap nhat
            }
            else if(s + (n-i+1)*cmin < ans) Try(i+1);//check chi phi di cac thanh pho tiep theo co lon hon chi phi nho nhat hay khong, neu lon hon thi dung lai
            s -= a[tmp[i-1]][j]; 
            check[j] = 0;
        }
    }
}
int main(){ 
    cin >> n; 
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] < cmin && a[i][j] != 0) cmin = a[i][j]; // tim gia tri nho nhat trong ma tran de so sanh
        }
    tmp[1] = 1;
    Try(2);
    cout << ans << endl; // chi phi nho nhat
    return 0;
}
/*
4
0 20 35 10
20 0 90 50
35 90 0 12
10 50 12 0
*/