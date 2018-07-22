#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		if (rotateArray.size() == 0)
			return 0;
		int left = 0, right = rotateArray.size() - 1;
		int mid = 0;
		while (rotateArray[left] >= rotateArray[right]) {
			if (right - left == 1) {
				mid = right;
				break;
			}
			mid = (left + right) / 2;
			if (rotateArray[left] == rotateArray[right] && rotateArray[left] == rotateArray[mid]) {
				return MinOrder(rotateArray, left, right);
			}
			else if (rotateArray[mid] >= rotateArray[left])
				left = mid;
			else
				right = mid;
		}
		return rotateArray[mid];
	}
private:
	int MinOrder(vector <int> num, int left, int right) {
		int result = num[left];
		for (int i = left + 1; i < right; i++) {
			if (num[i] < result)
				result = num[i];
		}
		return result;
	}
};

int main() {
	Solution s;
	//vector<int> num = {0,1,2,3,4,5};
	//vector<int> num = {4,5,6,7,1,2,3};
	vector<int> num = { 2,2,2,2,1,2 };
	int result = s.minNumberInRotateArray(num);
	// 输出
	cout << result << endl;
	system("pause");
	return 0;
}
