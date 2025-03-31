#include<iostream>
#include<vector>
#include<algorithm>//Ëã·¨	
using namespace std;

void Printf(int a)
{
	cout << "value:" << a << endl;
}

void test01()
{
	vector<int>v;
    v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	for_each(v.begin(), v.end(), Printf);
}

int main()
{
    test01();

	system("pause");
	return 0;
}