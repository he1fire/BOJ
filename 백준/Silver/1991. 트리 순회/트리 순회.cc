#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N, parent[30], lc[30], rc[30];
void MakeTree(int a,int b,int c){
    if (b>=0){
        parent[b]=a;
        lc[a]=b;
    }
    if (c>=0){
        parent[c]=a;
        rc[a]=c;
    }
}
void Preorder(int x){
    cout << char(x+'A');
    if(lc[x]!=-1)
        Preorder(lc[x]);
    if(rc[x]!=-1)
        Preorder(rc[x]);
}
void Inorder(int x){
    if(lc[x]!=-1)
        Inorder(lc[x]);
    cout << char(x+'A');
    if(rc[x]!=-1)
        Inorder(rc[x]);
}
void Postorder(int x){
    if(lc[x]!=-1)
        Postorder(lc[x]);
    if(rc[x]!=-1)
        Postorder(rc[x]);
    cout << char(x+'A');
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(&parent[0],&parent[29],-1);
    fill(&lc[0],&lc[29],-1);
    fill(&rc[0],&rc[29],-1);
    cin >> N;
    for (int i=0;i<N;i++){
        char a, b, c;
        cin >> a >> b >> c;
        MakeTree(a-'A',b-'A',c-'A');
    }
    Preorder(0);
    cout << "\n";
    Inorder(0);
    cout << "\n";
    Postorder(0);
    return 0;
}