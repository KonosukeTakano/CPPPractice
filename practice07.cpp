//
// Created by konosuke on 2023/05/16.
//

// 整数 N が与えられるので、2 以上 N 以下の素数の個数を求めてください。

#include <iostream>

using namespace std;

int main(){
    int N, count = 0;

    cin >> N;

    int a[N + 1];

    for(int i = 2; i < N + 1; i++){
        a[i] = 1;
    }

    for(int i = 2; i < N + 1; i++){
        if(a[i] == 1){
            count++;
            for(int j = 2; j <= N / i; j++){
                a[i * j] = 0;
            }
        };
    }

    cout << count << endl;

    return 0;
}