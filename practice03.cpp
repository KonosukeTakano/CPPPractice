//
// Created by kouko on 2023/05/14.
//
//整数 N , K と N 行 K 列 の二次元配列 A が与えられるので、その配列をそのまま出力してください。

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

    for(int i = 0; i < N; i++){
        for(int j = 0; j < K; j++){
            cout << a[i][j];
            if(j == K - 1)
                cout << endl;
        }
    }

    return 0;
}