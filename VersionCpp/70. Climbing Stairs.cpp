/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   70. Climbing Stairs.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:17:41 by zelabbas          #+#    #+#             */
/*   Updated: 2024/07/20 14:40:25 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;


// time limit
// class Solution
// {
// 	public:
// 		int climbStairs(int n)
// 		{
// 			if (n <= 1)
// 				return (1);
// 			return (climbStairs(n - 1) + climbStairs(n - 2));
// 		}
// };

class Solution
{
	public:
		int climbStairs(int n)
		{
			int i;
			int prev1;
			int prev2;
			int cur;
			if (n <= 1)
				return (1);
			
			prev1 = 1, prev2 = 1;
			i = 1;
			while (++i <= n)
			{
				cur = prev1 + prev2;
				prev2 = prev1;
				prev1 = cur;
			}
			return (prev1);
		}
};

int main()
{
	Solution a;
	cout << a.climbStairs(44);
}