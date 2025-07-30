#include <iostream>
#include <vector>
using namespace std;
vector<pair<int,int> > v;
int N;
int main () {
    cin >> N;
    for (int i=0;i<N;i++){
        int M, cnt=0;
        cin >> M;
        for (int j=0;j<M;j++){
            int a;
            cin >> a;
            v.push_back(make_pair(a-1,1));
            }
        for (int j=0;j<M;j++){
            if (v[j].second){
                cnt++;
                v[j].second=0;
                int st=j, next=v[j].first;
                while (next!=st){
                    v[next].second=0;
                    next=v[next].first;
                    }
                }
            }
        cout << cnt << "\n";
        v.clear();
        }
    return 0;
    }