#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n = 0, m = 0;
    cin >> n;

    vector<string> ma(n);

    for(auto& ele : ma)
    {
        cin >> ele;
    }

    cin >> m;

    int counter = 0;

    //down, <-, UP, ->
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    int dir = 0;
    pair<int, int> cur;

    dir = (m - 1) / n;

    cur.first = m / n;

    //1행 가운데 열 중 하나
    if(m > 1 && m < n)
    {
        cur.second = (m % n) - 1;
    }
    //오른쪽
    else if(m >= n && m <= (n + 2))
    {
        cur.second = n - 1;
    }
    //아래쪽
    else if(m > (n + 2) && m < (n * 3))
    {
        cur.second = (m % n) - 1;
    }
    else
    {
        cur.second = 0;
    }

    do
    {
        //cout << cur.first << " " << cur.second << endl;
        if(ma[cur.first][cur.second] == '\\')
        {
            counter++;

            if(dir == 0)
                dir = 3;
            else if(dir == 3)
                dir = 0;
            else if(dir == 2)
                dir = 1;
            else
                dir = 2;
        }  
        else if(ma[cur.first][cur.second] == '/')
        {
            counter++;

            if(dir == 0)
                dir = 1;
            else if(dir == 1)
                dir = 0;
            else if(dir == 2)
                dir = 3;
            else
                dir = 2;
        }

        cur.first += dx[dir];
        cur.second += dy[dir];

        //cout << cur.first << " " << cur.second << endl;

        if(cur.first < 0 || cur.first > n || cur.second < 0 || cur.second > n)
        {
            break;
        }

    } while(1);


    cout << counter;

    return 0;
}