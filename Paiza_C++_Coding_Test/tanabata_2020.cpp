/*
あなたは室内の快適な湿度を保つために湿度を確認するプログラムを作成しています。

快適な湿度の基準は 40 〜 60 %と言われています。

室内の湿度が入力されるので湿度が 40 % 以上、60 %以下であれば「OK」、それ以外の場合は「NG」と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int humidity{};
    cin >> humidity;
    if (humidity >= 40 && humidity <=60)
        cout << "OK";
    else
        cout << "NG";

    return 0;
}