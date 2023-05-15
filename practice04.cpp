//
// Created by konosuke on 2023/05/15.
//
//行列 A についての情報が与えられるので、A の転置行列を出力してください。

#include <iostream>

using namespace std;

int main(){
    int N, K;

    cin >> N >> K;

    int a[N][K];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < K; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < K; i++){
        for(int j = 0; j < N; j++){
            cout << a[j][i] << " ";
            if(j == N - 1)
                cout << endl;
        }
    }

    return 0;
}