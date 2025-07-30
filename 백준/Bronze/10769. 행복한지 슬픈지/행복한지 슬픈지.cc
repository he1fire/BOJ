#include <iostream>
#include <string>
using namespace std;
int main () {
    int happy=0, sad=0;
    string N;
    getline(cin,N);
    for (int i=2;i<N.size();i++)
        {
        if (N[i-2]==':' && N[i-1]=='-' && N[i]==')')
        happy++;
        if (N[i-2]==':' && N[i-1]=='-' && N[i]=='(')
        sad++;
        }
    if (happy==0 && sad==0)
    cout << "none";
    else if (happy==sad)
    cout << "unsure";
    else if (happy>sad)
    cout << "happy";
    else if (happy<sad)
    cout << "sad";
    return 0;
    }