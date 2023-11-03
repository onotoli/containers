#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int, int> counts;
    for (int num : nums) {
        counts[num]++;
    }

    vector<int> result;
    for (auto& pair : counts) {
        if (pair.second > nums.size() / 2) {
            result.push_back(pair.first);
        }
    }

    return result;
}


int main() {
    return 0;
}
