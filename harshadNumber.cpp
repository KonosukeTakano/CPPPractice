// Determines if N is a Harshad Number
// Created by kouko on 2023/11/12.
//

#include <bits/stdc++.h>
using namespace std;

int main() {

    int X,N, fN = 0;

    cout << "Input N." << endl;
    cin >> N;
    X = N;

    while(N > 0){
        fN += N % 10;
        N /= 10;
    }

    if(X % fN == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
