#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
#include <stack>
#include <vector>
using namespace std;

void print(vector<int> &nums) {
    cout << "[";
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i];
        if (i != nums.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

void print(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            cout << setw(2) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

template<typename T>
void print(T num)
{
    cout << num << endl;
}

void print(bool ret)
{
    cout << (ret ? "true" : "false") << endl;
}

template<typename K, typename V>
void print(map<K,V> map)
{
    cout << "[";
    for(const auto& pair : map) {
        cout << "(" <<pair.first<<", "<< pair.second<< ")";
    }
    cout << "]" << endl;
}