class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
	{

        if (matrix.empty() || matrix[0].empty()) return false;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        int left = 0;
        int right = rows * cols - 1;
        int mid = 0;
        int mid_element = 0;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            mid_element = matrix[mid / cols][mid % cols];
            
            if (mid_element == target) return true;
            else if (mid_element < target) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};