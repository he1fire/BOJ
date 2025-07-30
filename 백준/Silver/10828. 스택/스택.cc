#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main () {
    stack<int> st;
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        if (a=="push"){
            int b;
            cin >> b;
            st.push(b);
        }
        else if (a=="pop"){
            if (!st.empty()){
                cout << st.top() << "\n";
                st.pop();
            }
            else
                cout << "-1\n";
        }
        else if (a=="size")
            cout << st.size() << "\n";
        else if (a=="empty"){
            if (!st.empty())
                cout << "0\n";
            else
                cout << "1\n";
        }
        else if (a=="top"){
            if (!st.empty())
                cout << st.top() << "\n";
            else
                cout << "-1\n";
        }
    }
    return 0;
}