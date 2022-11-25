#include <bits/stdc++.h>

using namespace std;

string cmd;

int ic,cc, sc, bc, dc;
struct INT {
    string id;
    int value;
};
vector<INT> ints;
struct CHAR {
    string id;
    char value;
};
vector<CHAR> chars;
struct STRING {
    string id, value;
};
vector<STRING> strings;
struct BOOL
{
    string id;
    bool value;
};
vector<BOOL> bools;
struct DOUBLE
{
    string id;
    double value;
};
vector<DOUBLE> doubles;

int main()
{
    cout << "欢迎使用“苍穹”！" << endl;
    cout << "使用“帮助”以查看更多帮助，“版本”以查看版本，“退出”以退出程序。" << endl;

    while (true)
    {
        cout << ">>> ";
        getline(cin, cmd);
        if (cmd == "退出")
        {
            cout << "欢迎再次使用~" << endl;
            return 0;
        }
        if (cmd == "版本")
            cout << "苍穹0.1" << endl;
        if (cmd == "帮助")
            cout << "这里空空如也……" << endl;
        if (cmd.substr(0, 1) == "定义")
        {
            if (cmd.substr(3, 4) == "整数")
            {
                ints[ic].id = cmd.substr(6, cmd.length() - 1);
                ic++;
                continue;
            }
            if (cmd.substr(3, 5) == "字符串")
            {
                strings[sc].id = cmd.substr(7, cmd.length() - 1);
                sc++;
                continue;
            }
            if (cmd.substr(3, 4) == "字符")
            {
                chars[cc].id = cmd.substr(6, cmd.length() - 1);
                cc++;
                continue;
            }
            if (cmd.substr(3, 4) == "布尔")
            {
                bools[bc].id = cmd.substr(6, cmd.length() - 1);
                bc++;
                continue;
            }
            if (cmd.substr(3, 4) == "浮点")
            {
                doubles[dc].id = cmd.substr(6, cmd.length() - 1);
                dc++;
                continue;
            }
        }
    }

    return 0;
}
