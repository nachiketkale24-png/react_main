#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int hash[26] = {0};
        for(int i = 0; i < n; i++){
            hash[s[i] - 'a']++;
        }
        int maxi = 0;
        for(int i = 0; i < 26; i++){
            maxi = max(maxi, hash[i]);
        }
        cout << n - maxi << endl;
    }
}