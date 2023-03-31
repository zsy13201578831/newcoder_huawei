//#include<iostream>
//using namespace std;
//
//// 有序数组的接口
//int RankedArray(int n) {
//	int random_num; // 输入随机数
//	// 初始化一个数组，用于表示随机数集合中的元素（某个0~1000之间的随机整数）的有无情况
//	int a[1001] = { 0 };
//	// 连续输入n个随机整数
//	while (n--) {
//		cin >> random_num;
//		// 数组的下标等于输入的随机整数，下标对应的元素为1表示该随机整数存在
//		a[random_num] = 1;
//	}
//	// 按从小到大的顺序，依次输出随机数集合（数组）中所包含的的随机整数
//	for (int i = 0; i < 1001; i++) {
//		if (a[i] == 1) {
//			cout << i << endl;
//		}
//	}
//	
//	return 0;
//}
//
//// 主函数
//int main() {
//	int n; // 输入随机数的个数
//	while (cin >> n) {
//		if (cin.get() == 'over') break;
//		RankedArray(n); // 调用有序数组的接口
//	}
//	return 0;
//}