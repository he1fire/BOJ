#include <bits/stdc++.h>
#define ll long long
using namespace std;
priority_queue<int,vector<int>,greater<int> > pq;
int main(){
    while (1){
        int N, ans=1;
        cin >> N;
        if (N==-1)
            break;
        for (int i=2;i*i<=N;i++){
            if (N%i==0){
                ans+=i;
                ans+=N/i;
                pq.push(i);
                pq.push(N/i);
            }
        }
        if (ans==N){
            cout << N << " = 1";
            while (!pq.empty()){
                cout << " + " << pq.top();
                pq.pop();
            }
            cout << "\n";
        }
        else{
            while (!pq.empty())
                pq.pop();
            cout << N << " is NOT perfect.\n";
        }
    }
    return 0;
}