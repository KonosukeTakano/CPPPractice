//
// Created by konosuke on 2023/05/15.
//

#include <iostream>

using namespace std;

int main(){
    int X, Y, Z, L, M, x, y, min;

    cin >> X >> Y >> Z;

    if(X > Y){
        L = X;
        M = Y;
    }
    else{
        L = Y;
        M = X;
    }

    if(Z % L >= M)
        x = Z / L + Z % L / M + Z % L % M;
    else
        x = Z / L + Z % L;

    y = Z / M + Z % M;

    if(x < y)
        min = x;
    else
        min = y;

    cout << min << endl;

    return 0;
}