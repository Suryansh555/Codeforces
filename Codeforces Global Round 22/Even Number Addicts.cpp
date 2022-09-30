#include<bits/stdc++.h>
using namespace std ;

bool AliceWins(int odd , int even){
    if(odd % 4 != 1 && odd % 4 != 2){
        return true;
    }
    return ((even % 4 == 1 || even % 4 ==3 ) && odd%4==1);
}

int main(){
    int T;
    cin >> T ;  
    while(T--){
        int n;
        cin >>n ;
        vector<int> ans(n) ;
        int odd = 0;
        int even = 0;
        for(int i = 0  ; i < n ; i++){
            cin >> ans[i];
            if(ans[i] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(AliceWins(odd,even)){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
    return 0;


}