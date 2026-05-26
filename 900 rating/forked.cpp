#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main (){
    int t;
    cin >> t;
    while ( t--){
        int a,b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq,yq;
        cin >> xq >> yq;
        set<pair<int,int>>king;
        set<pair<int,int>>queen;
        king.insert({xk+a,yk+b});
        king.insert({xk+a,yk-b});
        king.insert({xk-a,yk+b});
        king.insert({xk-a,yk-b});
        king.insert({xk+b,yk+a});
        king.insert({xk+b,yk-a});
        king.insert({xk-b,yk+a});
        king.insert({xk-b,yk-a});

        queen.insert({xq+a,yq+b});
        queen.insert({xq+a,yq-b});
        queen.insert({xq-a,yq+b});
        queen.insert({xq-a,yq-b});
        queen.insert({xq+b,yq+a});
        queen.insert({xq+b,yq-a});
        queen.insert({xq-b,yq+a});
        queen.insert({xq-b,yq-a});

        int cnt = 0;
        for (auto i: king){
            for (auto j: queen){
                if ( (i.first == j.first) && (i.second == j.second) ) cnt ++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}