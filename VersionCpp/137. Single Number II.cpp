// 137. Single Number II
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> map;

        for (int x: nums) {
            map[x]++;
        }

        for (auto it : map) {
            if (it.second != 3)
                return it.first;
        }

        return -1;
    }
};