#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main () {
    int x[26]={0, }, ans=0, first=0, second=0;
    string N;
    cin >> N;
    for (int i=0;i<N.size();i++)
        {
        if (N[i]<95)
        x[N[i]-65]++;
        else
        x[N[i]-97]++;
        }
    for (int i=0;i<26;i++)
        {
        if (x[i]>=first)
            {
            second=first;
            first=x[i];
            ans=i;
            }
        }
    first==second ? cout << "?" : cout << (char)(ans+65);
    return 0;
    }