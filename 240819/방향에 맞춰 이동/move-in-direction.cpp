#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n = 0;

    cin >> n;

    int dx[4] = {1, 0, -1, 1};
    int dy[4] = {0, 1, 0, -1};

    char ch = 0;
    int num = 0;

    int cur_x = 0;
    int cur_y = 0;

    while(n--)
    {
        cin >> ch >> num;

        if(ch == 'N')
        {
            while(num--)
            {
                cur_x += dx[0];
            }
        }
        else if(ch == 'E')
        {
            while(num--)
            {
                cur_y += dy[1];
            }
        }
        else if(ch == 'S')
        {
            while(num--)
            {
                cur_x += dx[2];
            }
        }
        else if(ch == 'W')
        {
            while(num--)
            {
                cur_y += dy[3];
            }
        }
    }

    cout << cur_y << " " << cur_x;

    return 0;
}