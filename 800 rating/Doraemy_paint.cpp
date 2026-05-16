#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string isGood(vector<int>& a) {
        unordered_map<int,int> freq;

        for (int x : a) freq[x]++;

        if (freq.size() > 2) return "NO";
        if (freq.size() == 1) return "YES";

        auto it = freq.begin();
        int c1 = it->second;
        it++;
        int c2 = it->second;

        if (abs(c1 - c2) <= 1) return "YES";
        return "NO";
    }
};

int main () {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        Solution sol;
        cout << sol.isGood(arr) << endl;
    }
}