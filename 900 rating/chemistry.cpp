#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int t;
    cin >> t;
    while ( t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int>hash(26,0);
        for (int i = 0; i < s.size(); i ++){
            hash[s[i]-'a'] ++;
        }
        int cnt = 0;
        for (int i = 0; i < hash.size(); i ++){
            if (hash[i] == 1 || hash[i]%2 != 0) cnt ++;
        }
        if ( (cnt-k) <= 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
