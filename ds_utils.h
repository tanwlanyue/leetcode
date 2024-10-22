#include <iostream>
#include <map>
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

void print(int num)
{
    cout << num << endl;
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