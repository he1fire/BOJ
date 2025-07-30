#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main () {
    map<int,int> m;
	int N, M;
	cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        m[a]=b;
    }
    cin >> M;
    for (int i=0;i<M;i++){
        int T, cnt=1;
        vector<int> x, y;
        cin >> T;
        for (int j=0;j<T;j++){
            int a;
            cin >> a;
            if (m.find(a)!=m.end())
                x.push_back(m[a]);
            else
                cnt=0;
        }
        if (cnt)
            for (int j=0;j<T;j++)
            cout << x[j] << " ";
        else
            cout << "YOU DIED";
        cout << "\n";
    }
    return 0;
}