#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<pair<int,int> > arr;
    int N, ans=0;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int x, y;
        cin >> x >> y;
        arr.push_back(make_pair(x,y));
        }
    for (int i=1;i<N;i++)
        {
        if (arr[i].first==arr[i-1].first)
        arr[i].second>arr[i-1].second ? ans+=arr[i].second-arr[i-1].second : ans+=arr[i-1].second-arr[i].second;
        else
        arr[i].first>arr[i-1].first ? ans+=arr[i].first-arr[i-1].first : ans+=arr[i-1].first-arr[i].first;
        }
    if (arr[0].first==arr[N-1].first)
        arr[0].second>arr[N-1].second ? ans+=arr[0].second-arr[N-1].second : ans+=arr[N-1].second-arr[0].second;
        else
        arr[0].first>arr[N-1].first ? ans+=arr[0].first-arr[N-1].first : ans+=arr[N-1].first-arr[0].first;
    cout << ans;
    return 0;
    }