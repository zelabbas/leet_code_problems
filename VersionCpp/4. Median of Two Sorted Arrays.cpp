/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4. Median of Two Sorted Arrays.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:51:16 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/29 11:51:34 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int size_num1 = nums1.size();
        int size_num2 = nums2.size();
        int size = 0;
        double result = -1;
    
        if (size_num1 > size_num2 && size_num2 != 0)
        {
            for(size_t i = 0; i < size_num2; i++)
                nums1.push_back(nums2.at(i));
            sort(nums1.begin(), nums1.end());
            size = nums1.size();
            if (size % 2 == 0)
                result = (double)(nums1.at((size / 2) - 1) + nums1.at(((size / 2) - 1 ) + 1)) / 2;
            else
                result = (double)nums1.at((size / 2));
        }
        else if (size_num1 != 0)
        {
            for(size_t i = 0; i < size_num1; i++)
                nums2.push_back(nums1.at(i));
            sort(nums2.begin(), nums2.end());
            size = nums2.size();
            if (size % 2 == 0)
                result = (double)(nums2.at((size / 2) - 1) + nums2.at(((size / 2) - 1 ) + 1)) / 2;
            else
                result = (double)nums2.at((size / 2));
        }
        else
        {
            size = nums2.size();
            if (size % 2 == 0)
                result = (double)(nums2.at((size / 2) - 1) + nums2.at(((size / 2) - 1 ) + 1)) / 2;
            else
                result = (double)nums2.at((size / 2));
        }
        return (result);
}
};