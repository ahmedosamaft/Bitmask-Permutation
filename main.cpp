/****************************************************
         ❤ Bsmellah El Rahman El Rahim ❤
****************************************************/

#include <bits/stdc++.h>

using namespace std;
#define int long long

signed main() {
    freopen("output.txt", "w", stdout);

    vector<char> arr = {'a', 'h', 'm', 'e', 'd'};

    vector<vector<char>> ans;
    for (int i = 0; i < (1 << arr.size()); ++i) {
        vector<char> x;
        for (int j = 0; j < arr.size(); ++j) {
            if (i & (1 << j)) {
                x.push_back(arr[j]);
            }
        }
        ans.push_back(x);
    }
//    std::sort(ans.begin(), ans.end());

    for (const auto &item: ans) {
        for (const auto &item1: item) {
            cout << item1 << " ";
        }
        cout << endl;
    }


}
