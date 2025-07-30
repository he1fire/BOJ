#include <iostream>
#include <string>
using namespace std;
int main () {
    int cnt=0, le=0, ri=0;
    string N;
    cin >> N;
    for (int i=0;i<N.size();i++){
        if (N[i]=='0')
            cnt=1;
        if (N[i]=='@'){
            if (cnt==0)
                le++;
            else
                ri++;
        }
    }
    cout << le << " " << ri;
    return 0;
}