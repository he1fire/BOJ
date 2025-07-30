#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    set<string> s;
    int N;
    cin >> N;
    while (N--){
        string a, b;
        cin >> a >> b;
        if (b=="enter")
            s.insert(a);
        else
            s.erase(a);
    }
    if (!s.empty()){
        set<string>::iterator it=s.end();
        it--;
        for (;it!=s.begin();it--)
            cout << *it << "\n";
        cout << *it << "\n";
    }
    return 0;
}