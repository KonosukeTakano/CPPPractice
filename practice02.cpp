//
// Created by kouko on 2023/05/14.
//
#include <iostream>

using namespace std;

//あなたは健康のために、1日1万歩を歩くことを目標にしました。
//入力として、歩いた距離(km)と歩幅(cm)が与えられるので、
//1万歩を歩いているかどうかを判定して結果を出力してください。

//入力は以下のフォーマットで与えられます
//
//  d s
//
//・d は歩いた距離(km)
//・s は歩幅(cm)
//
//入力値最終行の末尾に改行が１つ入ります。
//文字列は標準入力から渡されます。

bool isOver(int d, int s){
    bool result;
    if(d * 100000 / s >= 10000)
        return true;
    else
        return false;
}

int main() {
    int d, s;

    cin >> d >> s;

    cout << isOver(d, s) << endl;

    return 0;
}
