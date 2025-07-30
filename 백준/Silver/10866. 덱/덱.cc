#include <iostream>
#include <deque>
#include <string>
using namespace std;
int main () {
    deque<int> dq;
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        string a;
        cin >> a;
        if (a=="push_front"){
            int b;
            cin >> b;
            dq.push_front(b);
        }
        else if (a=="push_back"){
            int b;
            cin >> b;
            dq.push_back(b);
        }
        else if (a=="pop_front"){
            if (!dq.empty()){
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            else
                cout << "-1\n";
        }
        else if (a=="pop_back"){
            if (!dq.empty()){
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            else
                cout << "-1\n";
        }
        else if (a=="size")
            cout << dq.size() << "\n";
        else if (a=="empty"){
            if (!dq.empty())
                cout << "0\n";
            else
                cout << "1\n";
        }
        else if (a=="front"){
            if (!dq.empty())
                cout << dq.front() << "\n";
            else
                cout << "-1\n";
        }
        else if (a=="back"){
            if (!dq.empty())
                cout << dq.back() << "\n";
            else
                cout << "-1\n";
        }
    }
    return 0;
}