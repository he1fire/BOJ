#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
map<string,int> m;
vector<pair<int,string> > v;
string name[7]={"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
vector<string> sec;
int main() {
    int N;
    cin >> N;
    for (int i=0;i<7;i++)
        m[name[i]]=0;
    for (int i=0;i<N;i++){
        string a;
        int b;
        cin >> a >> b;
        m[a]+=b;
    }
    for (auto it=m.begin();it!=m.end();it++){
        v.push_back(make_pair(it->second,it->first));
    }
    sort(v.begin(),v.end());
    int cnt=-1;
    for (int i=0;i<v.size();i++){
        if (sec.empty() && v[i].first>v[0].first){
            sec.push_back(v[i].second);
            cnt=v[i].first;
        }
        else if (cnt==v[i].first)
            sec.push_back(v[i].second);
    }
    sec.size()==1 ? cout << sec[0] : cout << "Tie";
    return 0;
}