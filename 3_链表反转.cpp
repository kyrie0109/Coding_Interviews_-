#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : //初始化列表 构造函数
    val(x), next(NULL) {
	}
 };

//递归实现 适合printf的情形
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> value;
		if (head != NULL) {
			value.insert(value.begin(), head->val); //插入到value的起始位置
			if (head->next != NULL) {
				vector<int> temp = printListFromTailToHead(head->next);
				if (temp.size() > 0)
					value.insert(value.begin(), temp.begin(), temp.end());
			}
		}
		return value;
	}
};

/* 非递归 
class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> value;
		if (head != NULL) {
			value.insert(value.begin(), head->val); //插入到value的起始位置
			while (head->next != NULL) {
				value.insert(value.begin(), head->next->val);
				head = head -> next;
			}
		}
		return value;
	}
};
*/

int main() {
	Solution s;

	system("pause");
	return 0;
}
