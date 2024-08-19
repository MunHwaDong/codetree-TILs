#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {

    string comm;

    cin >> comm;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    pair<int, int> cur_pos = {0, 0};
    int cur_stat = 0;

    for(int i = 0; i < comm.size(); ++i)
    {
        if(comm[i] == 'L')
        {
            if(cur_stat == 0)
            {
                cur_stat = 3;
            }
            else
            {
                cur_stat = cur_stat -1;
            }
        }
        else if(comm[i] == 'R')
        {
            if(cur_stat == 3)
            {
                cur_stat = 0;
            }
            else
            {
                cur_stat = cur_stat + 1;
            }
        }
        else if(comm[i] == 'F')
        {
            cur_pos.first += dx[cur_stat];
            cur_pos.second += dy[cur_stat];
        }
    }

    cout << cur_pos.second << " " << cur_pos.first;

    return 0;
}