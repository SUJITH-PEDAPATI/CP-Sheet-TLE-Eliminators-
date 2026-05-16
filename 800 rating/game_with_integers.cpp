#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int maxChances = 10;
        int flag = 0;
        while (maxChances--){
            if ( flag == 0){
                if ( ((n-1)%3 == 0) || ((n+1)%3 == 0)){
                    cout << "First" << endl;
                    break;
                }
                n = n + 1;
                flag = 1;
            }
            if ( flag == 1){
                if ( ((n-1)%3 == 0) || ((n+1)%3 == 0)){
                    cout << "Second" << endl;
                    break;
                }
                n = n + 1;
                flag = 0;
            }
        }
    }
}

