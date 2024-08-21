#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n = 0, m = 0;

    cin >> n >> m;

    vector<vector<bool>> p(n + 1, vector<bool>(n + 1, 0));

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    while(m--)
    {
        int r = 0, c = 0;

        cin >> r >> c;

        p[r][c] = 1;
        int counter = 0;

        for(int i = 0; i < 4; ++i)
        {
            int nx = r + dx[i];
            int ny = c + dy[i];

            if(nx <= 0 || nx > n || ny <= 0 || ny > n) continue;
            if(p[nx][ny] != 1) continue;
            else
            {
                counter++;
            }
        }

        (counter == 3) ? cout << 1 << '\n' : cout << 0 << '\n';
    }

    return 0;
}