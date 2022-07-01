#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int n;

struct MaTran{
    long long f[15][15];
};

MaTran operator* (MaTran A, MaTran B){
    MaTran C;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            C.f[i][j] = 0;
            for (int k = 0; k < n; k++){
                C.f[i][j] = (C.f[i][j] + A.f[i][k] * B.f[k][j] % MOD) % MOD;
            }
        }
    }
    return C;
}

MaTran powMod(MaTran A, int k){
    if (k == 1) return A;
    MaTran X = powMod(A, k / 2);
    if (k % 2 == 0) return X * X;
    return A * X * X;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        long long k; cin >> k;

        MaTran A;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> A.f[i][j];
            }
        }

        MaTran KQ = powMod(A, k); // Tins luy thua

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << KQ.f[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
