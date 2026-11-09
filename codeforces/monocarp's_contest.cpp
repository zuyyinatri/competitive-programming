#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        int easy = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];

            if(arr[i] == 0)
                easy++;
        }

        if(easy < 2){
            cout << -1 << "\n";
            continue;
        }

        int swap = 0;
        if(arr[0] != 0)
            swap++;
        if(arr[n-1] != 0)
            swap++;

        cout << swap << "\n";
    }
    return 0;
}