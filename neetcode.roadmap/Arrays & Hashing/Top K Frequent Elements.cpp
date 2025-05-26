#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
#include<algorithm>
using namespace std;




// using sorting 
class Solution {

    public:
    static vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> frequencyMap;

        // Count the frequency of each number
        for (int num : nums) {
            frequencyMap[num]++;
        }
        // Create a max heap based on frequency using  class std::priority_queue<std::pair<int, int>>
        // A standard container automatically sorting its contents.

        priority_queue<pair<int, int>> maxHeap;
        for (const auto& entry : frequencyMap) {

            cout << "num: " << entry.first << ", frequency: " << entry.second << endl;
            maxHeap.push({entry.second, entry.first});
        }

        // display the max heap
        cout << "Max Heap: ";
        priority_queue<pair<int, int>> tempHeap = maxHeap;
        while (!tempHeap.empty()) {
            cout << "(" << tempHeap.top().first << ", " << tempHeap.top().second << ") ";
            tempHeap.pop();
        }
        cout << endl;

        // Extract the top k frequent elements
        for (int i = 0; i < k; i++) {
            if (!maxHeap.empty()) {
                result.push_back(maxHeap.top().second);
                maxHeap.pop();
            }
        }
        return result;
    }
};

// test
int main() {
    // Input: nums = [1,2,2,3,3,3], k = 2
    // Output: [2,3]
    vector<int>   input = {4 , 1, 2,2,3,3, 2, 2,3};
    int k = 2;
    Solution Solution;
    vector<int> result = Solution.topKFrequent(input, k);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;

}