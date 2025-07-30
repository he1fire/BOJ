#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<char> v;
string S, ans;
int main() {
    cin >> S >> ans;
    reverse(ans.begin(),ans.end());
    for (int i=0;i<S.size();i++){
        v.push_back(S[i]);
        if (v.size()>=ans.size()){
            string cnt;
            for (int j=0;j<ans.size();j++)
                cnt.push_back(v[v.size()-j-1]);
            if (ans==cnt){
                for (int j=0;j<ans.size();j++)
                    v.pop_back();
            }
        }
    }
    if (v.size()==0)
        cout << "FRULA";
    for (int i=0;i<v.size();i++)
        cout << v[i];
    return 0;
}