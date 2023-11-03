#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_to_index;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (num_to_index.count(complement)) {
            return {num_to_index[complement], i};
        }
        num_to_index[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums;
    int target = 9;
    nums[0] = 2;
    nums[0] = 7;
    nums[0] = 11;
    nums[0] = 15;
    vector<int> a = twoSum(nums, target);
    for (int i: a) {
        cout << i << '\t';
    }
    return 0;
}