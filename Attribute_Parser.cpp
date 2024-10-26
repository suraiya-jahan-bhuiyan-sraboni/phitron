#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<string> hrml(n);
    getchar();
    while (n--)
    {
        string s;
        getline(cin, s);
        hrml.push_back(s);
    }
    while (q--)
    {
        string s, tag;
        cin >> s;
        int size = s.size();
        size_t pos = s.find('~');
        size_t p_dot = s.find('.');
        if (p_dot != string::npos)
        {
            tag = s.substr(p_dot + 1, pos - 1);
        }
        else
        {
            tag = s.substr(0, pos - 1);
        }
        string r = tag + ' ' + s.substr(pos + 1, size - 1) ;
        string ans;
        bool flag = false;
        int c = 0;
        for (auto &e : hrml)
        {
            size_t p = e.find(r);
            if (p != string::npos)
            {
                flag = true;
                int srt = p + r.size() + 4;
                for (int i = srt; i < e.size(); i++)
                {
                    if (e[i] == '"')
                    {
                        c = 1;
                        break;
                    }
                    else
                    {
                        cout << e[i];
                    }
                }
                cout << endl;
                // e.erase(p,srt-3);
            }
            else
            {
                flag = false;
            }
        }
        if (!c && flag == false)
        {
            cout << "Not Found!" << endl;
        }
    }
    return 0;
}
