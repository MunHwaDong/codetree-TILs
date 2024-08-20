#include <iostream>
#include <utility>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n = 0;

    cin >> n;

    pair<int, int> cur = {0, 0};

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    int time = 0;

    while(n--)
    {
        char d = 0;
        int step = 0;

        cin >> d >> step;

        int nx = 0;
        int ny = 0;

        for(int i = 0; i < step; ++i)
        {
            if(d == 'N')
            {
                nx = dx[0];
                ny = dy[0];

                cur.first += nx;
                cur.second += ny;
            }
            else if(d == 'E')
            {
                nx = dx[1];
                ny = dy[1];

                cur.first += nx;
                cur.second += ny;
            }
            else if(d == 'S')
            {
                nx = dx[2];
                ny = dy[2];

                cur.first += nx;
                cur.second += ny;
            }
            else if(d == 'W')
            {
                nx = dx[3];
                ny = dy[3];

                cur.first += nx;
                cur.second += ny;
            }
            time++;

            if(cur.first == 0 && cur.second == 0)
            {
                n = 0;
                break;
            }
        }
    }

    (cur.first == 0 && cur.second == 0) ? cout << time : cout << -1;

    return 0;
}