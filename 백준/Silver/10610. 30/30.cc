#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    int check=0, cnt=0;
    string N;
    cin >> N;
    for (int i=0;i<N.size();i++){
        if (N[i]=='0')
            cnt++;
        else
            check+=N[i]-48;
    }
    sort(N.rbegin(),N.rend());
    check%3==0 && cnt ? cout << N : cout << "-1";
}