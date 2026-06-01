#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while ( t-- ){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 1;
        int maxCnt = 1;
        for (int i = 1; i <n; i ++){
            if ( s[i] == s[i-1]){
                cnt ++;
            }
            else{
                cnt = 1;
            }
            maxCnt = max(maxCnt,cnt);
        }
        cout << maxCnt + 1<< endl;
    }
}