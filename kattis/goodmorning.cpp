#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

vector<vector<int>> keypad = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {-1, 0, -1}
};

set<int> possible_numbers;

void generate(int r, int c, int current_num) {
    if (current_num > 200) {
        return;
    }

    possible_numbers.insert(current_num);
    for (int nr = r; nr < 4; ++nr) {
        for (int nc = (nr == r) ? c : 0; nc < 3; ++nc) {
            if (keypad[nr][nc] != -1) {
                if (current_num == 0 && keypad[nr][nc] == 0) continue;

                generate(nr, nc, current_num * 10 + keypad[nr][nc]);
            }
        }
    }
}

void precompute() {
    for (int r = 0; r < 4; ++r) {
        for (int c = 0; c < 3; ++c) {
            if (keypad[r][c] != -1) {
                generate(r, c, keypad[r][c]);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    vector<int> possible_vec(possible_numbers.begin(), possible_numbers.end());

    for (int num : possible_vec) {
        cout<<num<<" ";
    }

    return 0;
}