#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n){
	stack<int>st;
	int r[n];
	for (int i=n-1; i>=0; i--){
		while (!st.empty() && a[i] >= a[st.top()]) st.pop();
		if (st.empty()) r[i]= -1;
		else r[i] = st.top();
		st.push(i);
	}
	for (int i=0; i<n; i++){
		if(r[i] != -1)  cout << a[r[i]] << " ";
		else cout << -1 << " ";
	}
	cout << endl;
}

int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n];
		for (int i=0; i<n; i++) cin >> a[i];
		solve(a,n);
	}
	return 0;
}
