#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        vector<int> pref1(n+1);
        vector<int> pref2(n+1);
        for(int i = 0; i < n; i++){
            pref1[i+1] = pref1[i] + (a[i] == 1 ? 1 : -1);
            pref2[i+1] = pref2[i] + (a[i] == 3 ? -1 : 1);
        }

        int mn = INF;
        int flag = 0;
        for(int i = 1; i < n; i++){
            if(pref2[i] - mn >= 0){
                cout << "YES" << endl;
                flag = 1;
                break;
            }
            if(pref1[i] >= 0)
                mn = min(mn, pref2[i]);
        }

        if(!flag)
            cout << "NO" << endl;
    }

    return 0;
}