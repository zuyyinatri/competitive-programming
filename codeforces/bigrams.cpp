#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int k;
        cin >> k;

        int c2 = 0, c3 = 0;
        while(k--){
            int c;
            cin >> c;
            
            if(c == 2)
                c2++;
            if(c >= 3)
                c3++;
        }

        if(c2 >= 2 || c3 >= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}