#include <iostream>
#include <string>
using namespace std;
int main () {
    string N, a;
    int ans=0;
    getline(cin,N);
    getline(cin,a);
    if (N.size()<a.size()){
        cout << "0";
        return 0;
    }
    for (int i=0;i<=N.size()-a.size();i++){
        int cnt=1;
        for (int j=0;j<a.size();j++){
            if (N[i+j]!=a[j]){
                cnt=0;
                break;
            }
        }
        if (cnt){
            ans++;
            i+=a.size()-1;
        }
    }
    cout << ans;
    return 0;
}