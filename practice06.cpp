//
// Created by kouko on 2023/05/15.
//
// 整数 N が与えられるので、1 × 2 × ... × (N-1) × N を最大で何回 2 で割ることができるかを求めてください。整数 N が与えられるので、1 × 2 × ... × (N-1) × N を最大で何回 2 で割ることができるかを求めてください。

#include <iostream>

using namespace std;

// kの階乗を求める
int factorial(int k){
    int sum = 1;

    for(int i = 1; i <= k; i++){
        sum *= i;
    }

    return sum;
}

int main() {
    int N, i = 0;

    cin >> N;

    N = factorial(N);

    while(N % 2 == 0){
        N = N / 2;
        i++;
    }

    cout << i << endl;

    return 0;
}