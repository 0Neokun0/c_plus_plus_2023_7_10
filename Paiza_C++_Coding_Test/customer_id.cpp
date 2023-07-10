/*
ある銀行では顧客がつけたニックネームを表す文字列 S の先頭の文字と最後の文字をつなぎ合わせた文字列 X にランダムな数字を加えたものを ID にしています。

文字列 X を出力してください。

入力例 1 の場合
neko
neko の先頭 n と 最後の o をつなぎ合わせるので、
no
と出力してください。
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i=0; i<str.length();i++)
    {
        if (i == 0)
            cout << str[i];
        if (i == str.length() -1)
            cout << str[i];
    }

    return 0;
}