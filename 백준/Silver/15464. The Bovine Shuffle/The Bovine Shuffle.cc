#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main () {
    vector<string>v2;
    vector<pair<int,string> > v;
    int N;
    cin >> N;
    int v1[N+1]={0};
    for (int i=1;i<=N;i++){
        int a;
        cin >> a;
        v1[a-1]=i;
    }
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        v2.push_back(a);
        v.push_back(make_pair(i+1,v2[i]));
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<N;j++){
            v[j].first=v1[j];
        }
        sort(v.begin(),v.end());
    }
    for (int i=0;i<N;i++){
        cout << v[i].second << "\n";
    }
    return 0;
}