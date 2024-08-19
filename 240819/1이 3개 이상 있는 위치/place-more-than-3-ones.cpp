#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int n = 0;
    cin >> n;

    vector<vector<int>> ma(n, vector<int>(n, 0));

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> ma[i][j];
        }
    }

    int result = 0;
    int counter = 0;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            for(int k = 0; k < 4; ++k)
            {
                int nx = (i + dx[k]);
                int ny = (j + dy[k]);

                if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                if(ma[nx][ny] == 1) counter++;
            }
            if(counter >= 3) result++;
            counter = 0;
        }
    }

    cout << result;

    return 0;
}