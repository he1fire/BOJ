#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
pair<int,char> arr[105][2];
int main() {
    int ans=0;
    string N, a, b;
    cin >> N >> a >> b;
    for (int i=0;i<a.size();i++){
        char x=N[0];
        if (a[i]==x)
            arr[i][0]={1,a[i]};
        else
            arr[i][0]={0,a[i]};
        if (b[i]==x)
            arr[i][1]={1,b[i]};
        else
            arr[i][1]={0,b[i]};
    }
    for (int i=1;i<N.size();i++){
        char x=N[i], ax=N[i-1];
        for (int j=a.size()-1;j>=0;j--){
            if (arr[j][0].second==x){
                int cnt=0;
                for (int k=0;k<j;k++){
                    if (arr[k][1].second==ax)
                        cnt+=arr[k][1].first;
                }
                arr[j][0].first=cnt;
            }
            if (arr[j][1].second==x){
                int cnt=0;
                for (int k=0;k<j;k++){
                    if (arr[k][0].second==ax)
                        cnt+=arr[k][0].first;
                }
                arr[j][1].first=cnt;
            }
        }
    }
    for (int i=0;i<a.size();i++){
        char x=N[N.size()-1];
        if (arr[i][0].second==x)
            ans+=arr[i][0].first;
        if (arr[i][1].second==x)
            ans+=arr[i][1].first;
    }
    cout << ans;
    return 0;
}