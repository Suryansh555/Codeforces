#include<bits/stdc++.h>
using namespace std ;

int main(){
    int tt;
    cin >> tt;
    while(tt--){

        int n,k;
        cin >> n >> k;
        vector<long long>s(n+1);
        vector<long long>a(n+1);
        for(int i = n - k + 1 ; i <= n ; i++)
            cin >> s[i];
        bool ok = 1 ;
        for(int i = n ; i > n-k+1 ; i--){
            a[i] = s[i] - s[i - 1];
            if(i < n && a[i] > a[i + 1] ) ok = 0;
        }
        long long uly = 1e12;
        if(k > 1) uly = a[n - k + 2];
        long long ef = 1 ;
        if( ef * (n-k+1) * uly < s[n-k+1] ) ok = 0;
        cout << (ok ? "YES\n" : "NO\n");
        
    }
    return 0;
}