#include <iostream>
#include <string>
using namespace std;
int main () {
    while (1)
        {
        int arr[26]={0, }, cnt=1;
        string x;
        getline(cin,x);
        if (x=="*")
        break;
        for (int i=0;i<x.size();i++)
            {
            if (x[i]>=97)
            arr[x[i]-97]++;
            }
        for (int i=0;i<26;i++)
            {
            if (arr[i]==0)
                {
                cnt=0;
                break;
                }
            }
        cnt==1 ? cout << "Y\n" : cout << "N\n";
        }
    return 0;
    }