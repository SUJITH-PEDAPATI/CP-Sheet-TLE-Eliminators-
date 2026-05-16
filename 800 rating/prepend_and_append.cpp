#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int t;
    cin >> t;
    while ( t--){
        int n ;
        cin >> n;
        string s;
        cin >> s;
        int left = 0;
        int right = n-1;
        int length = 0;
        while ( left < right){
            if ( (s[left] == '1' && s[right] == '0') || (s[left] == '0' && s[right] == '1')){
                left ++;
                right --;
            }
            else{
                break;
            }
        }
        cout << max(0,right-left + 1) << endl;
    }
    return 0;
}