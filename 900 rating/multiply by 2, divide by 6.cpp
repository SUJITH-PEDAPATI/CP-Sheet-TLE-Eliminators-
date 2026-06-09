#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    int t;
    cin >> t;
    while ( t-- ){
        long long n;
        cin >> n;
        long long countOf2 = 0;
        long long countOf3 = 0;
        while ( n > 0 && n%2 == 0){
            countOf2 ++;
            n = n / 2;
        }
        while (n > 0 && n%3 == 0){
            countOf3 ++;
            n = n/3;
        }
        long long sum = countOf3 + (countOf3 - countOf2);
        if ( n > 1 || (countOf2 > countOf3)) cout << -1 << endl;
        else cout << sum << endl;
    }
}