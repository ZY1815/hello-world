#include<iostream>
using namespace std;

//实现一个通用的对数组排序的函数
//从大到小
//选择排序
//char int

//交换
template<class T>
void myswap(T& a, T& b) {
	T temp = a;
	a = b;
	b=temp;
}

template<class T>
void paixu(T arr[],int len){
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			//交换
			myswap(arr[max], arr[i]);
		}
	}
}

template<class T>
void printArr(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

void test01(){
	char charArr[] = "abdcfe";
	int num = sizeof(charArr) / sizeof(char);
	paixu(charArr, num);
	printArr(charArr, num);
}
//kojS
int main() {
	test01();
	return 0;
}