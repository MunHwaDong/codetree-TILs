#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n = 0, t = 0, r = 0, c = 0;
    char d = 0;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    cin >> n >> t;
    cin >> r >> c >> d;

    pair<int, int> cur = {r, c};
    int cur_stat = 0;

    if(d == 'U')
        cur_stat = 0;
    else if(d == 'D')
        cur_stat = 2;
    else if(d == 'R')
        cur_stat = 1;
    else
        cur_stat = 3;

    while(t--)
    {
        int nx = cur.first + dx[cur_stat];
        int ny = cur.second + dy[cur_stat];

        if(nx <= 0 || nx > n || ny <= 0 || ny > n)
        {
            if(d == 0)
                cur_stat = 2;
            else if(d == 1)
                cur_stat = 3;
            else if(d == 2)
                cur_stat = 0;
            else
                cur_stat = 1;
        }
        else
        {
            cur.first = nx;
            cur.second = ny;
        }
    }

    cout << cur.first << " " << cur.second;

    return 0;
}