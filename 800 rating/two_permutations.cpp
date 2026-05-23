#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n,a,b;
        cin >> n >> a >> b;
        if ((a==b && b==n) || (a+b+2 <= n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}