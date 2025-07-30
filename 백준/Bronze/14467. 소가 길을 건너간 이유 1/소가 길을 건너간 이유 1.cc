#include <iostream>
#include <map>
using namespace std;
map<int,int> m;
int main() {
    int N, cnt=0;
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        auto it = m.find(a);
        if(it!=m.end()){
            if (m[a]!=b)
                cnt++;
        }
        m[a]=b;
    }
    cout << cnt;
    return 0;
}