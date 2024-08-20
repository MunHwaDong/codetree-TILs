#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    int time = 0;
    string s;

    cin >> s;

    pair<int, int> cur = {0, 0};
    int dir = 0; //north

    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == 'F')
        {
            cur.first += dx[dir];
            cur.second += dy[dir];
        }
        else if(s[i] == 'L')
        {
            dir -= (-1);

            if(dir <= -1)
            {
                dir = 3;
            }
        }
        else if(s[i] == 'R')
        {
            dir += 1;

            if(dir >= 4)
            {
                dir = 0;
            }
        }

        time++;

        if(cur.first == 0 && cur.second == 0)
        {
            break;
        }
    }

    (cur.first == 0 && cur.second == 0) ? cout << time : cout << -1;

    return 0;
}