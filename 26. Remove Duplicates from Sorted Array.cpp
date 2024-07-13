/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   26. Remove Duplicates from Sorted Array.cpp        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 21:29:15 by zelabbas          #+#    #+#             */
/*   Updated: 2024/07/13 22:12:27 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
	public:
		int removeDuplicates(vector<int>& nums)
		{
			int i;
			int j;
			vector<int> new_vec;

			i = 1;
			j = 0;
			while (i < nums.size())
			{
				if (nums.at(i) != nums.at(j))
				{
					j++;
					nums.at(j) = nums.at(i);
				}
				i++;
			}
			return (j + 1);
		}
};



int main()
{
	vector<int> test = {1,1,2, 3, 3};
	Solution a;
	cout <<a.removeDuplicates(test);

}