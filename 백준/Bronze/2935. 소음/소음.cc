#include <iostream>
#include <string>
using namespace std;
int main () {
    string A, B;
    char N;
    cin >> A >> N >> B;
    if (N=='*')
        {
        cout << "1";
        for (int i=1;i<=A.size()+B.size()-2;i++)
        cout << "0";
        }
    else
        {
        if (A.size()>B.size())
        for (int i=1;i<=A.size();i++)
            {
            if (i==1 || i==(A.size()-B.size())+1)
            cout << "1";
            else
            cout << "0";
            }
        else if (A.size()<B.size())
        for (int i=1;i<=B.size();i++)
            {
            if (i==1 || i==(B.size()-A.size())+1)
            cout << "1";
            else
            cout << "0";
            }
        else
            {
            cout << "2";
            for (int i=1;i<A.size();i++)
            cout << "0";
            }
        }
    return 0;
    }