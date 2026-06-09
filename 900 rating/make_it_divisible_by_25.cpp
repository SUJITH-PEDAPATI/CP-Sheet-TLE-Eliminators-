#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main (){
    int t;
    cin >> t;
    while ( t--){
        long long n;
        cin >> n;
        string num = to_string(n);
        long long ans = INT64_MAX;
        int len = num.size();
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                string last2 = "";
                last2 += num[i];
                last2 += num[j];

                if (last2 == "00" || last2 == "25" ||
                    last2 == "50" || last2 == "75") {

                    int deletions = (len - 1 - j) + (j - i - 1);
                    // Here the value (j-i-1) is the number of elements present betweeen left and right pointers

                    // Whereas the value (len - - j) represents the distance between j pointer and the endl of the string
                    ans = min<long long>(ans, deletions);
                }
            }
        }
        cout << ans << endl;
    }
}