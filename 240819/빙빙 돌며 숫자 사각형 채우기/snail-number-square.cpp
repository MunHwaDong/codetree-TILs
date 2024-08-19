#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    int n = 0, m = 0;

    cin >> n >> m;

    vector<vector<int>> ma(n, vector<int>(m, 0));
    pair<int, int> cur = {0, 0};

    int cur_dir = 1;
    int num = 2;

    ma[0][0] = 1;

    for(int i = 1; i < n * m; ++i)
    {
        int nx = cur.first + dx[cur_dir];
        int ny = cur.second + dy[cur_dir];
    
        if(ny >= m)
        {
            cur_dir = 2;

            nx = cur.first + dx[cur_dir];
            ny = cur.second + dy[cur_dir];
        }
        else if(nx >= n)
        {
            cur_dir = 3;

            nx = cur.first + dx[cur_dir];
            ny = cur.second + dy[cur_dir];
        }
        else if(ny < 0)
        {
            cur_dir = 0;

            nx = cur.first + dx[cur_dir];
            ny = cur.second + dy[cur_dir];
        }
        else if(nx < 0)
        {
            cur_dir = 1;

            nx = cur.first + dx[cur_dir];
            ny = cur.second + dy[cur_dir];
        }

        if(ma[nx][ny] != 0)
        {
            cur_dir++;

            if(cur_dir == 4)
            {
                cur_dir = 0;
            }

            nx = cur.first + dx[cur_dir];
            ny = cur.second + dy[cur_dir];
        }

            ma[nx][ny] = num;
            cur.first = nx;
            cur.second = ny;
            num++;
    }

    for(int i = 0; i < ma.size(); ++i)
    {
        for(int j = 0; j < ma[i].size(); ++j)
        {
            cout << ma[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}