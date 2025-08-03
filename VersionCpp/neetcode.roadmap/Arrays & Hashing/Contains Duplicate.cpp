#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>


using namespace std;

// using sorting

class Solution {
    public:
        bool hasDuplicate(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] == nums[i - 1]) {
                    return true;
                }
            }
            return false;
        }
};

// using hash set

class Solution {
    public:
        bool hasDuplicate(vector<int>& nums) {
            unordered_set<int> seen;

            for(int num: nums) {
                if (seen.find(num) != seen.end())
                    return true;
                seen.insert(num);
            }
            return false;
        }
};



// test
int main() 
{

}