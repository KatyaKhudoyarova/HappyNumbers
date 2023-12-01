#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;


        for (int num : arr) {
            freq[num]++;
        }

        int maxLucky = -1;
        for (auto& pair : freq) {
            if (pair.first == pair.second) { // Число є "щасливим"
                maxLucky = max(maxLucky, pair.first);

            }

        }

        return maxLucky;
    }
};

int main() {
    vector<int> items;
    int item;
    string line;
    cout << "Enter a vector of number to find a happy one"<< endl;
    getline(cin, line);
    istringstream is(line);

    while (is >> item) {
        items.push_back(item);
    }

    Solution solution;
    cout << solution.findLucky(items);

    return 0;
}
