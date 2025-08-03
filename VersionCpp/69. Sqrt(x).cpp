/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   69. Sqrt(x).cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:43:04 by zelabbas          #+#    #+#             */
/*   Updated: 2024/07/20 14:10:28 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class Solution 
{
	public:
		int mySqrt(int x)
		{
			int left = 0;
			int right = x;
			int mid;
			if (x == 1)
				return (1);
			while (left <= right)
			{
				mid = left + (right - left) / 2;
				if (mid && mid < x / mid)
					left = mid + 1;
				else if (mid && mid > x / mid)
					right = mid - 1;
				else
					return (mid);
			}
			return (right);
		}
};

int main()
{
	Solution a;
	cout << a.mySqrt(81);
}
