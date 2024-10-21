#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &nums) {
    cout << "[";
    for (size_t i = 0; i < nums.size(); i++) {
        if (i != nums.size() - 1) {
            cout << nums[i] << ",";
        } else {
            cout << nums[i];
        }
    }
    cout << "]" << endl;
}

void print(int num)
{
    cout << num << endl;
}