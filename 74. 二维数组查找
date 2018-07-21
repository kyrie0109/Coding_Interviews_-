/*
第一题 
在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，
每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，
判断数组中是否含有该整数。
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool Find(int target, vector<vector<int>> array) {
		int rowCount = array.size();
		int colCount = array[0].size();
		int i, j;
		for (i = rowCount - 1, j = 0; i >= 0 && j < colCount;) {
			if (target > array[i][j]) {
				j++;
				continue;
			}
			if (target == array[i][j]) {
				return true;
			}
			if (target < array[i][j]) {
				i--;
				continue;
			}
		}
		return false;
	}
};
/*class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.empty())
			return false;
		//if (target < array[0][0])return false;
		int _length = array.size();
		for (int i = 0; i < _length; i++)
		{
			if (array[i].empty())continue;
			else if (target >= array[i][0])
			{
				if (target <= array[i][array[i].size() - 1])
				{
					for (int j = array[i].size() - 1; j >= 0; j--)
					{
						if (target == array[i][j])return 1;
						else if (target > array[i][j])break;
					}
				}
				else {
					continue;
				}
			}
			else return false;
		}
		return false;
	}
};
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
       // bool found = false;
        if(array.size()!= 0)
        {
            int row = 0;
            int col = array[0].size()-1;
            while(row < array.size() && col >= 0)
            {
                if(array[row][col] == target)
                    return true;
                else if(array[row][col] > target)
                    --col;
                else
                    ++row;
            }
             
        }
        return false;
         
    }
};*/
int main() {
	vector<vector<int>> array_test = { { 1, 2, 3, 9, 15 },{ 3, 4, 5, 17, 28 },{ 4, 6, 7, 18, 30 },{ 19, 27, 33, 45, 56 } };
	Solution s;
	cout << s.Find(7, array_test) << endl;
	system("pause");
	return 0;
}


