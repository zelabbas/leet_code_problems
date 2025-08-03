#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
    public:

        // using binary search
        // Time complexity: O(log n)
        // Space complexity: O(1)


        // The function returns the index of the target if found, otherwise returns -1.
        

        int search(vector<int>& nums, int target) {
           int end = nums.size() - 1;
           int start = 0;

           while (end >= start)
           {
                int mid = start + (end - start) / 2;

                if (nums[mid] == target)
                    return mid; // Target found
                else if (nums[mid] < target)
                    start = mid + 1;
                else
                    end = mid - 1;
           }
           
           return -1; // that mean target not found
        }
    };


// test 

int main() {
    Solution solution;
    vector<int> nums = {-1, 0 , 2, 4, 6, 8};
    int target = 4;

    int result = solution.search(nums, target);
    
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found." << endl;
    }

    return 0;
}
    