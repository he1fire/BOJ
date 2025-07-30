#include <iostream>
#include <vector>
#include <algorithm>
#define INF 987654321
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<pair<int, int> > v1, v2;
    int N;
    int x[4]={INF,0,INF,0}, y[4]={INF,0,INF,0};
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        v1.push_back(make_pair(a,b));
        v2.push_back(make_pair(b,a));
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if ((v1[N-2].first-v1[0].first)<(v1[N-1].first-v1[1].first)){
        x[0]=v1[0].first;
        x[1]=v1[N-2].first;
        for (int i=0;i<N-1;i++){
            y[0]=min(y[0],v1[i].second);
            y[1]=max(y[1],v1[i].second);
        }
    }
    else{
        x[0]=v1[1].first;
        x[1]=v1[N-1].first;
        for (int i=1;i<N;i++){
            y[0]=min(y[0],v1[i].second);
            y[1]=max(y[1],v1[i].second);
        }
    }
    if ((v2[N-2].first-v2[0].first)<(v2[N-1].first-v2[1].first)){
        x[2]=v2[0].first;
        x[3]=v2[N-2].first;
        for (int i=0;i<N-1;i++){
            y[2]=min(y[2],v2[i].second);
            y[3]=max(y[3],v2[i].second);
        }
    }
    else{
        x[2]=v2[1].first;
        x[3]=v2[N-1].first;
        for (int i=1;i<N;i++){
            y[2]=min(y[2],v2[i].second);
            y[3]=max(y[3],v2[i].second);
        }
    }
    cout << min((x[1]-x[0])*(y[1]-y[0]),(x[3]-x[2])*(y[3]-y[2]));
    return 0;
}