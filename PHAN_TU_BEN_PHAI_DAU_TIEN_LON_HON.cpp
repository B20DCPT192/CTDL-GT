#include<bits/stdc++.h>
using namespace std;

vector <int> a, b, c;
void Processing(int n){
    stack <int> st;
    b[n] = -1;
    for(int i = n; i >= 1; i--){
        while(!st.empty() && a[i] >= a[st.top()]) st.pop();
        if(st.empty()) b[i] = -1;
        else b[i] = st.top();
        st.push(i);
    }
    
    stack <int> st2;
    c[n] = -1;
    for(int i = n; i >= 1; i--){
    	while(!st2.empty() && a[i] <= a[st2.top()]) st2.pop();
    	if(st2.empty()) c[i] = -1;
    	else c[i] = st2.top();
    	st2.push(i);
	}
	
	for(int i = 1; i <= n; i++){
		if(b[i] != -1 && c[b[i]] != -1) cout << a[c[b[i]]] << " ";
		else cout << -1 << " ";
	}
	cout << endl;
}
main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        a.resize(n + 1);
        b.resize(n + 1);
        c.resize(n + 1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        Processing(n);

        a.clear();
        b.clear();
        c.clear();
    }
}
