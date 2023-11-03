#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<string>> groupByName(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;
    for (string& str : strs) {
        string sorted_str = str;
        sort(sorted_str.begin(), sorted_str.end());
        groups[sorted_str].push_back(str);
    }

    vector<vector<string>> result;
    for (auto& pair : groups) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {
    return 0;
}