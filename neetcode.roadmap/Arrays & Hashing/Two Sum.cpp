#include <vector>
#include <unordered_map>
using namespace std;

// using hash map
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> mapIndex;

            for(int i = 0; i < nums.size(); i++) {
                if (mapIndex.find(nums[i]) != mapIndex.end()) {
                    return {mapIndex[nums[i]], i};
                }
                mapIndex[target - nums[i]] = i; 
            }
            return {}; // return an empty vector if no solution is found
        }
};