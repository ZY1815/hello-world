//容器 vector
//算法 for_each
//迭代器 vector<int>::iterator
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>  //标准算法的头文件

//vector容器存放内置数据类型

void myprint(int val)
{
	cout << val << endl;
}

void test01() {
	//创建了一个vector容器，数组
	vector<int> v;
	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//通过迭代器访问容器中的数据
	vector<int>::iterator itbegin = v.begin();//起始迭代器  指向容器中第一个元素
	vector<int>::iterator itend = v.end();
	
	////while
	//while (itbegin != itend)
	//{
	//	cout << *itbegin << endl;
	//	itbegin++;
	//}

	////for
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	//算法
	for_each(v.begin(), v.end(), myprint);
}


int main() {
	test01();
	return 0;
}