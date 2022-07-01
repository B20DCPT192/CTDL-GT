#include<bits/stdc++.h>
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int a[n+1], b[n+1], c[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];

    stack <int> st;
    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && a[i] <= st.top()) st.pop();
        if(st.empty()) b[i] = -1;
        else b[i] = st.top();
        st.push(a[i]);
    }
    /* for(int i = 0; i < n; i++) cout << b[i] << " ";
    cout << endl; */
    int dem = 0;
    stack <int> st2; st2.push(-1);
    for(int i = n-1; i >= 0; i--){
        while()
    }
}