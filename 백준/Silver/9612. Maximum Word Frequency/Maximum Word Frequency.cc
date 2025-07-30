#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
map<string,int> m;
int main () {
    string ans;
    int N, cnt=0;
    cin >> N;
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        m[a]++;
    }
    for (auto it=m.begin();it!=m.end();it++){
        if (it->second>=cnt){
            ans=it->first;
            cnt=it->second;
        }
    }
    cout << ans << " " << cnt;
    return 0;
}