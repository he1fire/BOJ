#include <iostream>
#include <set>
using namespace std;
int main () {
    string a[105], b[105];
    int N, M, ans=0;
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> a[i];
    for (int i=0;i<N;i++)
        cin >> b[i];
    for (int i=0;i<M;i++){
        int chk=1;
        set<char> s1, s2;
        for (int j=0;j<N;j++){
            s1.insert(a[j][i]);
            s2.insert(b[j][i]);
        }
        for (set<char>::iterator it1=s1.begin();it1!=s1.end();it1++){
            for (set<char>::iterator it2=s2.begin();it2!=s2.end();it2++){
                if (*it1==*it2){
                    chk=0;
                    break;
                }
            }
        }
        if (chk)
            ans++;
    }
    cout << ans;
    return 0;
}