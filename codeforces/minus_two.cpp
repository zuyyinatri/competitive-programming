#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n], odd = 0, even1 = 0, even0 = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];

            if(arr[i] % 2 == 1)
                odd++;
            else{
                if((arr[i]/2) % 2 == 1)
                    even1++;
                else
                    even0++;
            }
        }
        int res = (even1 > even0 ? 
                  (even1 > odd ? even1 : odd) : 
                  (even0 > odd ? even0 : odd));

        cout << res << endl;
    }
    return 0;
}