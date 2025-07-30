#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<string> v;
string a;
bool cmp (string a, string b){
    if (a.size()<b.size()) return 1;
    else if (a.size()>b.size()) return 0;
    else if (a<b) return 1;
    else return 0;
}
void f(){
    if (a[0]=='0'){
        for (int i=0;i<a.size();i++){
            if (a[i]!='0'){
                a.erase(0,i);
                break;
            }
        }
        if (a[0]=='0' && a.size()>1)
            a="0";
    }
}
int main(){
    cin >> N;
    while (N--){
        string S;
        cin >> S;
        for (auto i:S){
            if (i>='0' && i<='9')
                a+=i;
            else if (!a.empty()){
                f();
                v.push_back(a);
                a.clear();
            }
        }
        if (!a.empty()){
            f();
            v.push_back(a);
        }
        a.clear();
    }
    sort(v.begin(),v.end(), cmp);
    for (auto i:v)
        cout << i << "\n";
    return 0;
}