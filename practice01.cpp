//
// Created by kouko on 2023/05/13.
//
#include <iostream>
#include <vector>
#include <map>

using namespace std;

//    スペースで区切られた英単語列が与えられます。
//    英単語列に含まれる英単語の出現回数を出現した順番に出力してください。
// 入力例
//basketball,badminton,soccer,baseball,soccer,baseball,tennis,tabletennis,tennis,tennis
// 出力例
//[basketball,1]
//[badminton,1]
//[soccer,2]
//[baseball,2]
//[tennis,3]
//[tabletennis,1]

vector<string> split(string str, string del) {
    int first = 0;
    int last = str.find_first_of(del);

    std::vector<string> result;

    while (first < str.size()) {
        string subStr(str, first, last - first);

        result.push_back(subStr);

        first = last + 1;
        last = str.find_first_of(del, first);

        if (last == string::npos) {
            last = str.size();
        }
    }

    return result;
}

int main() {
    string str;
    string del = ",";
    map<string, int> mp;

    cin >> str;

    for (int i = 0; i < split(str, del).size(); i++) {
        if(mp.count(split(str, del)[i]) == 0){
            mp.insert({split(str, del)[i], 1});
        }
        else{
            mp.at(split(str, del)[i]) += 1;
        }
    }

    for (const auto& [key, value] : mp) {
        cout << "[" << key << "," << value << "]" << endl;
    }

    return 0;
}