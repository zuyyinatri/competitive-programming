#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        int best = 0;
        for(int x = 1; x <= m; x++){
            vector<int> freq(m+1, 0);
            for(int i = 0; i < n; i++){
                if(a[i] < x)
                    freq[a[i]]++;
                else{
                    freq[x]++;
                    freq[a[i] - x]++;
                }
            }

            for(int j = 1; j <= m; j++)
                best = (freq[j] > best ? freq[j] : best);
        }

        cout << best << "\n";
    }
    return 0;
}