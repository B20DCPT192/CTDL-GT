#include<bits/stdc++.h>
using namespace std;

int n, m;
vector <int> dsKe[1005];
int color[1005];

void khoitao(){
    for(int i = 1; i <= n; i++) dsKe[i].clear();
    memset(color, 0, sizeof(color));
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        dsKe[u].push_back(v);
    }
}
bool DFS(int u){
    color[u] = 1;
    for(auto os: dsKe[u]){
        if(color[os] == 0){
            if(DFS(os)) return true;
        } else if(color[os] == 1) return true;
    }
    color[u] = 2;
    return false;
}
bool Processing(){
    cin >> n >> m;
    khoitao();
    for(int i = 1; i <= n; i++){
        if(DFS(i)) return true;
    }
    return false;
}
main(){
    int t; cin >> t;
    while(t--){
        if(Processing()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}