#include <bits/stdc++.h>
using namespace std;

bool proposition1(bool p, bool q, bool r){
    return !(p && q) && r;
}
bool proposition2(bool p, bool q, bool r){
    return (!p || !q) && r;
}
int main(){
    for (bool p : {1, 0}){
        for (bool q : {1, 0}){
            for (bool r : {1, 0}){
                bool ans1 = proposition1(p, q, r);
                bool ans2 = proposition2(p, q, r);
                if (ans1 != ans2){
                    cout << "The propositions are not equivalent." << endl;
                }
            }
        }
    }
    cout << "The propositions are equivalent." << endl;
    return 0;
}