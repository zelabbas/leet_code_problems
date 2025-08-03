/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Products of Array Discluding Self.cpp              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:41:30 by zelabbas          #+#    #+#             */
/*   Updated: 2024/10/24 21:02:22 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;


// class Solution {

// 	protected:
// 		int caluclPorduct(vector<int> &nums, int pos) {
// 			int product = 1;
// 			for (int i = 0; i < nums.size(); i++)
// 			{
// 				if (i != pos)
// 					product *= nums[i];
// 			}
// 			return (product);
// 		}
// 	public:
// 		vector<int> _product;
// 		vector<int> productExceptSelf(vector<int>& nums) {

// 			if (nums.empty() || nums.size() == 1)
// 				return (nums);
// 			for(int i = 0; i < nums.size(); i++) {
// 				_product.push_back(caluclPorduct(nums, i));
// 			}
// 			return (_product);
// 		}
// };


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        vector<int> pref(n);
        vector<int> suff(n);
        pref[0] = 1;
        suff[n - 1] = 1;
        for (int i = 1; i < n; i++) {
            pref[i] = nums[i - 1] * pref[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            suff[i] = nums[i + 1] * suff[i + 1];
        }
        for (int i = 0; i < n; i++) {
            res[i] = pref[i] * suff[i];
        }
        return res;
    }
};

int main() {

	Solution a;
	 vector<int> _vec = {1,2,3,4};
	a.productExceptSelf(_vec);
}
