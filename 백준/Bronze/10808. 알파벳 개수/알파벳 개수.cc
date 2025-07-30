#include <iostream>
#include <string>
#include <map>
using namespace std;
int main () {
    map<char,int> m;
    string N;
    cin >> N;
    for (int i=0;i<N.size();i++)
        m[N[i]]++;
    for (char i='a';i<='z';i++)
        cout << m[i] << " ";
    return 0;
}