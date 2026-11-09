#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x, y;
        long long k; //x jumlah pekerja, y jumlah projek, k bulan
        cin >> x >> y >> k;

        long long mono = 0, a = y - x, id = -1;
        for(long long i = 1; i <= k; i++){
            if(x > a){
                id = i;
                break;
            }
            
            mono += (y % x);
            x++;
            y++;
        }

        if(id != -1) 
            mono += (a*(k - id + 1));
        cout << mono << "\n";
    }
    return 0;
}