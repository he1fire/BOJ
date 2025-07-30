#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N, cnt=0;
    cin >> N;
    for (int i=0;i<N;i++){
        vector<char> v;
        string S;
        cin >> S;
        for (int j=0;j<S.size();j++){
            v.push_back(S[j]);
            if (v.size()>=2 && v[v.size()-1]==v[v.size()-2]){
                v.pop_back();
                v.pop_back();
            }
        }
        if (v.empty())
            cnt++;
    }
    cout << cnt;
    return 0;
}