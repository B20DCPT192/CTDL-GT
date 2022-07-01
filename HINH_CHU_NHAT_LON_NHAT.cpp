#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n){
    int maxa = 0;
    int i, j, tam;
    for (int i = 0; i < n; i++){
        tam = 1;
        for (j = i + 1; j < n; j++){
            if (a[j] >= a[i]) tam++;
            else break;
        }
        for (j = i - 1; j >= 0; j--){
            if (a[j] >= a[i]) tam++;
            else break;
        }
        if (maxa < (a[i] * tam)) maxa = a[i] * tam;
    }
    return maxa;
}

main(){
    int t, n, a[100005], i;
    cin >> t;
    while (t--){
        cin >> n;
        for (i = 0; i < n; i++) cin >> a[i];
        cout <<  solve(a, n) << endl;
    }
}