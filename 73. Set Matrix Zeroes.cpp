/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   73. Set Matrix Zeroes.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:53:06 by zelabbas          #+#    #+#             */
/*   Updated: 2024/07/20 15:46:40 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;


class Solution
{
	public:
		void setZeroes(vector<vector<int>>& matrix)
		{
			unordered_set<int> setrow;
			unordered_set<int> setcol;

			int rows = matrix.size();
			int cols = matrix[0].size();

			for (int r = 0; r < rows; r++)
			{
				for (int c = 0; c < cols; c++)
				{
					if (matrix[r][c] == 0)
					{
							setrow.insert(r);
							setcol.insert(c);
					}
				}
				
			}
			for (const int &r : setrow)
			{
				for (int c = 0; c < cols; c++)
				{
					matrix[r][c] = 0;
				}
			}
			
			for (const int &c : setcol)
			{
				for (int r = 0; r < rows; r++)
				{
					matrix[r][c] = 0;
				}
			}
			
		}
};


int main()
{
	Solution a;
	int rows = 3;
	int cols = 4;

	vector<vector<int>> matrix(rows, vector<int>(cols));
	int value;
	for (int r = 0; r < rows; ++r)
	{
		for (int c = 0; c < cols; ++c)
		{
			cout << "enter a value in " << r << "," << c << endl; 
			cin >> matrix[r][c];
		}
	}

	a.setZeroes(matrix);
	cout << "The matrix is:" << endl;
	for (const auto& row : matrix)
	{
		for (int val : row)
		{
			cout << val << " ";
		}
		cout << endl;
	}

	return 0;
}