#include<bits/stdc++.h>
using namespace std;

int n, S, kq;
vector <int> a;
void DoiTien(int i, int dem, int sum){
	if(sum > S || dem > kq || i > n) {
		if(sum == S) kq = min(kq, dem);
		return;
	}
	DoiTien(i + 1, dem, sum);
	DoiTien(i + 1, dem + 1, sum + a[i]);
}
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	
	int t; cin >> t;
	while(t--){
		cin >> n >> S;
		kq = INT_MAX;
		a.resize(n + 1);
		
		for(int i = 1; i <= n; i++) cin >> a[i];
		DoiTien(1, 0, 0);
		if(kq == INT_MAX) cout << -1 << endl;
		else cout << kq << endl;
		
		a.clear();
	}
}
