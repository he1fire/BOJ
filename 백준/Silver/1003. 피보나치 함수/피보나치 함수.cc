#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<pair<int, int> > x;
    x.push_back(make_pair(1,0));
    x.push_back(make_pair(0,1));
    for (int j=2;j<=40;j++)
        {
        int a, b;        
        a=x[j-1].first+x[j-2].first;
        b=x[j-1].second+x[j-2].second;
        x.push_back(make_pair(a,b));
        }
    int N, M;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        cin >> M;
        cout << x[M].first << " " << x[M].second << "\n";
        }
    return 0;
    }