//#include<iostream>
//#include<vector>
//#include<algorithm>//算法	
//using namespace std;
//
//void Printf(int a)
//{
//	cout << "value:" << a << endl;
//}
//
//void test01()
//{
//	vector<int>v;
//    v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	for_each(v.begin(), v.end(), Printf);
//}
//
//int main()
//{
//    test01();
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Person
//{
//public:
//    Person(string name, int age)
//    {
//        this->m_name = name;
//        this->m_age = age;
//    }
//
//    // 提供公共的访问方法
//    string getName()
//    {
//        return m_name;
//    }
//
//    int getAge()
//    {
//        return m_age;
//    }
//
//private:
//    string m_name;
//    int m_age;
//};
//
//// 定义一个函数对象或函数来打印 Person 对象的信息
//void Myprintf(Person& p)
//{
//    cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;
//}
//
//void test01()
//{
//    vector<Person> v;
//
//    Person p1("aaa", 10);
//    Person p2("bbb", 20);
//    Person p3("ccc", 30);
//    Person p4("ddd", 40);
//    Person p5("eee", 50);
//
//    v.push_back(p1);
//    v.push_back(p2);
//    v.push_back(p3);
//    v.push_back(p4);
//    v.push_back(p5); // 将 p5 添加到 vector 中
//
//    // 使用 for_each 遍历并打印每个 Person 对象的信息
//    for_each(v.begin(), v.end(), Myprintf);
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Person
//{
//public:
//    Person(string name, int age)
//    {
//        this->m_name = name;
//        this->m_age = age;
//    }
//
//
//
//public:
//    string m_name;
//    int m_age;
//};
//
//void test01()
//{
//    vector<Person> v;
//
//    Person p1("aaa", 10);
//    Person p2("bbb", 20);
//    Person p3("ccc", 30);
//    Person p4("ddd", 40);
//    Person p5("eee", 50);
//
//    v.push_back(p1);
//    v.push_back(p2);
//    v.push_back(p3);
//    v.push_back(p4);
//    v.push_back(p5); // 将 p5 添加到 vector 中
//
//    // 使用 for_each 遍历并打印每个 Person 对象的信息
//    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
//    }
//}
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}

//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//class Person
//{
//public:
//
//    Person(string name, int age)
//    {
//        this->m_name = name;
//        this->m_age = age;
//    }
//
//
//    string m_name;
//    int m_age;
//};
//
//void test01()
//{
//    vector<vector<int>> v;
//
//    //创建三个小vector容器
//    vector<int> v1;
//    vector<int> v2;
//    vector<int> v3;
//    vector<int> v4;
//
//    //给小容器添加数据
//    for (int i = 0; i < 4; i++)
//    {
//        v1.push_back(i + 1);
//        v2.push_back(i + 2);
//        v3.push_back(i + 3);
//        v4.push_back(i + 4);
//    }
//
//    //存放到大vector容器中
//    v.push_back(v1);
//    v.push_back(v2);
//    v.push_back(v3);
//    v.push_back(v4);
//
//    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++)
//        {
//            cout << *it2<<"  ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    test01();
//
//	system("pause");
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void test01()
//{
//	//字符串的赋值操作
//	//重载方式
//	string str1;
//	str1 = "hello world";
//	cout << "str1 = " << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2 = " << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << "str3 = " << str3 << endl;
//
//	//assign 方式
//	string str4;
//	str4.assign("hello c++");
//	cout << "str4 = " << str4 << endl;
//
//	string str5;
//	str5.assign("hello c++", 5);
//	cout << "str5 = " << str5 << endl;
//
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6 << endl;
//
//	string str7;
//	str7.assign(5, 'x');
//	cout << "str7 = " << str7 << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
////字符串拼接
//void test01()
//{
//	//重载方式
//	string str1 = "我";
//
//	str1 += "爱玩游戏";
//
//	cout << "str1 = " << str1 << endl;
//
//	str1 += ':';
//
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = "LOL DNF";
//
//	str1 += str2;
//
//	cout << "str1 = " << str1 << endl;
//
//    //append方式
//	string str3 = "I";
//	str3.append(" love ");
//	str3.append("game abcde", 4);
//	//str3.append(str2);
//	str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
//	cout << "str3 = " << str3 << endl;
//}
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
////查找和替换
//void test01()
//{
//	//查找
//	string str1 = "abcdefg";
//	//从左往右
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "pos = " << pos << endl;
//	}
//
//	//从右往左
//	pos = str1.rfind("de");
//
//	cout << "pos = " << pos << endl;
//
//}
//
//void test02()
//{
//	//替换
//	string str1 = "abcdefgde";
//	str1.replace(1, 3, "1111");
//
//	cout << "str1 = " << str1 << endl;
//}
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
////字符串比较
//void test01()
//{
//
//	string s1 = "hello";
//	string s2 = "aello";
//
//	int ret = s1.compare(s2);
//
//	if (ret == 0) {
//		cout << "s1 等于 s2" << endl;
//	}
//	else if (ret > 0)
//	{
//		cout << "s1 大于 s2" << endl;
//	}
//	else
//	{
//		cout << "s1 小于 s2" << endl;
//	}
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//void test01()
//{
//	string str = "hello world";
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//
//	//字符修改
//	str[0] = 'x';
//	str.at(1) = 'x';
//	cout << str << endl;
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
////字符串插入和删除
//void test01()
//{
//    //插入
//	string str = "hello";
//	str.insert(1, "111");//从1号位置开始插入111
//	cout << str << endl;
//
//	//删除
//	str.erase(1, 3);  //从1号位置开始3个字符
//	cout << str << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
////子串
//void test01()
//{
//
//	string str = "abcdefg";
//	string subStr = str.substr(1, 3);//从1号位置开始，截取3个字符
//	cout << "subStr = " << subStr << endl;
//
//	string email = "hello@sina.com";
//	int pos = email.find("@");//查找@号
//	string username = email.substr(0,pos);//截取@号之前的字符
//	string Email = email.substr(pos, email.size());//截取@号之后的字符
//	cout << "username: " << username << endl;
//    cout << "Email: " << Email << endl;
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	if (v1.empty())
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量 = " << v1.capacity() << endl;
//		cout << "v1的大小 = " << v1.size() << endl;
//	}
//
//	//resize 重新指定大小 ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
//
//	//v1.resize(15);
//	//printVector(v1);
//
//	v1.resize(15, 10);
//	printVector(v1);
//
//	//resize 重新指定大小 ，若指定的更小，超出部分元素被删除
//	v1.resize(5);
//	printVector(v1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////插入和删除
//void test01()
//{
//	vector<int> v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//	//插入
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//
//	//删除
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//清空
//	v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "v1的第一个元素为： " << v1.front() << endl;
//	cout << "v1的最后一个元素为： " << v1.back() << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void printVector(vector<int>& v) 
//{
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	//互换容器
//	cout << "互换后" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//	}
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	//收缩内存
//	vector<int>(v).swap(v); //匿名对象
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//}
//
//int main() {
//
//	test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//void test01()
//{
//	vector<int> v;
//
//	//预留空间, 减少内存重新分配的次数(数据较大时使用)
//	v.reserve(100000);
//
//	int num = 0;
//	/*int* p = NULL;*/
//	for (int i = 0; i < 100000; i++) 
//	{
//		v.push_back(i);
//		//if (p != &v[0]) {
//		//	p = &v[0];
//		//	num++;
//		//}
//	}
//
//	cout << "num:" << num << endl;
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include<deque>
//#include<iostream>
//using namespace std;
//
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
////deque构造
//void test01() {
//
//	deque<int> d1; //无参构造函数
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);//10个100
//	printDeque(d3);
//
//	deque<int>d4 = d3;
//	printDeque(d4);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <deque>
//#include <iostream>
//using namespace std;
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
////赋值操作
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);//常用
//
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <deque>
//#include <iostream>
//using namespace std;
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) 
//	{
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//
////大小操作
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//判断容器是否为空
//	if (d1.empty()) {
//		cout << "d1为空!" << endl;
//	}
//	else {
//		cout << "d1不为空!" << endl;
//		//统计大小
//		cout << "d1的大小为：" << d1.size() << endl;
//	}
//
//	//重新指定大小
//	d1.resize(15, 1);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <deque>
//#include <iostream>
//using namespace std;
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
////两端操作
//void test01()
//{
//	deque<int> d;
//	//尾插
//	d.push_back(10);
//	d.push_back(20);
//	//头插
//	d.push_front(100);
//	d.push_front(200);
//
//	printDeque(d);
//
//	//尾删
//	d.pop_back();
//	//头删
//	d.pop_front();
//	printDeque(d);
//}
//
////插入
//void test02()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	printDeque(d);
//
//	d.insert(d.begin(), 1000);
//	printDeque(d);
//
//	d.insert(d.begin(), 2, 10000);
//	printDeque(d);
//
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d.insert(d.begin(), d2.begin(), d2.end());
//	printDeque(d);
//
//}
//
////删除
//void test03()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	printDeque(d);
//
//	d.erase(d.begin());
//	printDeque(d);
//
//	//清空容器
//	d.erase(d.begin(), d.end());
//	d.clear();
//	printDeque(d);
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	//test03();
//
//	system("pause");
//
//	return 0;
//}

//#include <deque>
//#include <iostream>
//using namespace std;
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) 
//	{
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//
////数据存取
//void test01()
//{
//
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//
//	for (int i = 0; i < d.size(); i++) 
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//
//	cout << "front:" << d.front() << endl;
//
//	cout << "back:" << d.back() << endl;
//
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <deque>
//#include <algorithm>
//using namespace std;
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//
//void test01()
//{
//
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//
//	printDeque(d);
//	sort(d.begin(), d.end());
//	printDeque(d);
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//
//class Person
//{
//public:
//	Person(string name, double score);
//
//	string m_Name;
//	double m_Score;
//};
//
//Person::Person(string name, double score)
//{
//	this->m_Name=name;
//    this->m_Score=score;
//}
//
////创建选手
//void CreatePerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);
//
//		v.push_back(p);
//	}
//}
//
////设置分数
//void SetScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		deque<double>d;
//
//		for (int i = 0; i < 10; i++)
//		{
//			double score = rand() % 41 + 60;//60~100
//			d.push_back(score);//放入容器中
//		}
//
//		sort(d.begin(), d.end());
//
//		double avg = 0;
//		for (deque<double>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			avg+=*dit;
//		}
//
//		//求平均分
//		avg=avg/d.size();
//
//		//设置平均分
//		it->m_Score = avg;
//	}
//}
//
//void ShowPerson(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout<<"姓名："<<it->m_Name<<" " << "分数：" << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	//随机数种子
//	srand(time(NULL));
//
//	vector<Person> v;
//
//	CreatePerson(v);
//
//	SetScore(v);
//
//	ShowPerson(v);
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//
//class Person
//{
//public:
//	Person(string name, double score);
//
//    string m_Name;
//    double m_Score;
//};
//
//Person::Person(string name, double score)
//{
//	this->m_Name = name;
//    this->m_Score = score;
//}
//
//void CreatePerson(vector<Person>& v)
//{
//	string NameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name+=NameSeed[i];
//
//		double score = 0;
//
//		Person p(name, score);
//
//		v.push_back(p);
//	}
//}
//
//void SetScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		deque<double>d;
//		for (int i = 0; i < 10; i++)
//		{
//			double score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//
//		sort(d.begin(), d.end());
//
//		d.pop_front();
//        d.pop_back();
//
//		double avg = 0;
//
//		for (deque<double>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			avg+=*dit;
//		}
//
//        avg = avg / d.size();
//
//		it->m_Score = avg;
//	}
//
//}
//
//void ShowPerson(vector<Person>& v)
//{
//    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout<<"姓名："<<it->m_Name<<" "<<"分数："<<it->m_Score<<endl;
//    }
//}
//
//int main()
//{
//	srand(time(NULL));
//
//	vector<Person>v;
//
//	CreatePerson(v);
//
//	ShowPerson(v);
//
//	SetScore(v);
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <list>
//
//void printList(const list<int>& L) 
//{
//
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) 
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	list<int>L3(L2);
//	printList(L3);
//
//	list<int>L4(10, 1000);
//	printList(L4);
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <list>
//
//void printList(const list<int>& L)
//{
//
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test02()
//{
//
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2;
//	L2.assign(10, 100);
//
//	cout << "交换前： " << endl;
//	printList(L1);
//	printList(L2);
//
//	cout << endl;
//
//	L1.swap(L2);
//
//	cout << "交换后： " << endl;
//	printList(L1);
//	printList(L2);
//
//}
//
//int main() 
//{
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <list>
//
//void printList(const list<int>& L) 
//{
//
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////大小操作
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	if (L1.empty())
//	{
//		cout << "L1为空" << endl;
//	}
//	else
//	{
//		cout << "L1不为空" << endl;
//		cout << "L1的大小为： " << L1.size() << endl;
//	}
//
//	//重新指定大小
//	L1.resize(10);
//	printList(L1);
//
//	L1.resize(2);
//	printList(L1);
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <list>
//
//void printList(const list<int>& L) {
//
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////插入和删除
//void test01()
//{
//	list<int> L;
//	//尾插
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	//头插
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	printList(L);
//
//	//尾删
//	L.pop_back();
//	printList(L);
//
//	//头删
//	L.pop_front();
//	printList(L);
//
//	//插入
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	printList(L);
//
//	//删除
//	it = L.begin();
//	L.erase(++it);
//	printList(L);
//
//	//移除
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);
//	printList(L);
//
//	//清空
//	L.clear();
//	printList(L);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <list>
//
////数据存取
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//
//	//cout << L1.at(0) << endl;//错误 不支持at访问数据
//	//cout << L1[0] << endl; //错误  不支持[]方式访问数据
//	cout << "第一个元素为： " << L1.front() << endl;
//	cout << "最后一个元素为： " << L1.back() << endl;
//
//	//list容器的迭代器是双向迭代器，不支持随机访问
//	list<int>::iterator it = L1.begin();
//	//it = it + 1;//错误，不可以跳跃访问，即使是+1
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <list>
//
//void printList(const list<int>& L) 
//{
//
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) 
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//bool myCompare(int val1, int val2)
//{
//	return val1 > val2;
//}
//
////反转和排序
//void test01()
//{
//	list<int> L;
//	L.push_back(90);
//	L.push_back(30);
//	L.push_back(20);
//	L.push_back(70);
//	printList(L);
//
//	//反转容器的元素
//	L.reverse();
//	printList(L);
//
//	//排序
//	L.sort(); //默认的排序规则 从小到大
//	printList(L);
//
//	L.sort(myCompare); //指定规则，从大到小
//	printList(L);
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <list>
//#include <string>
//class Person {
//public:
//	Person(string name, int age, int height) {
//		m_Name = name;
//		m_Age = age;
//		m_Height = height;
//	}
//
//public:
//	string m_Name;  //姓名
//	int m_Age;      //年龄
//	int m_Height;   //身高
//};
//
//
//bool ComparePerson(Person& p1, Person& p2) {
//
//	if (p1.m_Age == p2.m_Age) {
//		return p1.m_Height > p2.m_Height;
//	}
//	else
//	{
//		return  p1.m_Age < p2.m_Age;
//	}
//
//}
//
//void test01() {
//
//	list<Person> L;
//
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 45, 180);
//	Person p3("孙权", 40, 170);
//	Person p4("赵云", 25, 190);
//	Person p5("张飞", 35, 160);
//	Person p6("关羽", 35, 200);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age
//			<< " 身高： " << it->m_Height << endl;
//	}
//
//	cout << "---------------------------------" << endl;
//	L.sort(ComparePerson); //排序
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age
//			<< " 身高： " << it->m_Height << endl;
//	}
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <set>
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////构造和赋值
//void test01()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <set>
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////大小
//void test01()
//{
//
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小为： " << s1.size() << endl;
//	}
//
//}
//
////交换
//void test02()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int> s2;
//
//	s2.insert(100);
//	s2.insert(300);
//	s2.insert(200);
//	s2.insert(400);
//
//	cout << "交换前" << endl;
//	printSet(s1);
//	printSet(s2);
//	cout << endl;
//
//	cout << "交换后" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//
//int main() {
//
//	test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <set>
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////插入和删除
//void test01()
//{
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//删除
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);//删除指定元素
//	printSet(s1);
//
//	//清空
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <set>
//
////查找和统计
//void test01()
//{
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//查找
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "找到了元素 ： " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
//	int num = s1.count(30);
//	cout << "num = " << num << endl;
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <set>
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) {
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(50);
//
//	//默认从小到大
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//指定排序规则
//	set<int, MyCompare> s2;
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(30);
//	s2.insert(50);
//
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <set>
//#include <string>
//using namespace std;
//
//class Person
//{
//public:
//    Person(string name, int age)
//    {
//        this->m_Name = name;
//        this->m_Age = age;
//    }
//
//    string m_Name;
//    int m_Age;
//};
//
//class comparePerson
//{
//public:
//    bool operator()(const Person& p1, const Person& p2) const
//    {
//        // 按照年龄进行排序，降序
//        return p1.m_Age > p2.m_Age;
//    }
//};
//
//// 打印set中Person的函数
//void printPersonSet(const set<Person, comparePerson>& s)
//{
//    for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//    {
//        cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
//    }
//}
//
//void test01()
//{
//    set<Person, comparePerson> s;
//
//    Person p1("刘备", 23);
//    Person p2("关羽", 27);
//    Person p3("张飞", 25);
//    Person p4("赵云", 21);
//
//    s.insert(p1);
//    s.insert(p2);
//    s.insert(p3);
//    s.insert(p4);
//
//    // 调用打印函数
//    printPersonSet(s);
//}
//
//int main()
//{
//    test01();
//
//    system("pause");
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include <map>
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m; //默认构造
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair<int, int>(2, 20));
//	m.insert(make_pair<int, int>(3, 30));
//	printMap(m);
//
//	map<int, int>m2(m); //拷贝构造
//	printMap(m2);
//
//	map<int, int>m3;
//	m3 = m2; //赋值
//	printMap(m3);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <map>
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的大小为： " << m.size() << endl;
//	}
//}
//
//
////交换
//void test02()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(4, 100));
//	m2.insert(pair<int, int>(5, 200));
//	m2.insert(pair<int, int>(6, 300));
//
//	cout << "交换前" << endl;
//	printMap(m);
//	printMap(m2);
//
//	cout << "交换后" << endl;
//	m.swap(m2);
//	printMap(m);
//	printMap(m2);
//}
//
//int main() {
//
//	test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <map>
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//插入
//	map<int, int> m;
//	//第一种插入方式
//	m.insert(pair<int, int>(1, 10));
//	//第二种插入方式
//	m.insert(make_pair(2, 20));
//	printMap(m);
//
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);//删除key指定元素
//	printMap(m);
//
//	//清空
//	m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <map>
//
////查找和统计
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	//查找
//	map<int, int>::iterator pos = m.find(3);//查找key为3的元素
//
//	if (pos != m.end())
//	{
//		cout << "找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <map>
//
//class MyCompare {
//public:
//	bool operator()(int v1, int v2) const//const限定
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	//默认从小到大排序
//	//利用仿函数实现从大到小排序
//	map<int, int, MyCompare> m;
//
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//	m.insert(make_pair(5, 50));
//
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key:" << it->first << " value:" << it->second << endl;
//	}
//}
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <map>
//
//class Person
//{
//public:
//	Person(int age, int weight)
//	{
//		this->m_Age = age;
//		this->m_weight = weight;
//	}
//
//	int m_Age;
//	int m_weight;
//};
//
//class MyCompare {
//public:
//	bool operator()(const Person&v1, const Person&v2) const//const限定
//	{
//		return v1.m_Age > v2.m_Age;
//	}
//};
//
//void test01()
//{
//	//默认从小到大排序
//	//利用仿函数实现从大到小排序
//
//	Person p1(10, 10);
//	Person p2(20, 20);
//	Person p3(30, 30);
//	Person p4(40, 40);
//	Person p5(50, 50);
//
//
//	map<Person,int, MyCompare> m;
//
//	m.insert(make_pair(p1, 100));
//	m.insert(make_pair(p2, 200));
//	m.insert(make_pair(p3, 300));
//	m.insert(make_pair(p4, 400));
//	m.insert(make_pair(p5, 500));
//
//	for (map<Person, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) 
//	{
//		cout << "key:" << it->first.m_Age << " weight:" << it->first.m_Age << ", value: " << it->second << endl;
//	}
//}
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
////普通函数
//void print01(int val)
//{
//	cout << val << " ";
//}
////函数对象
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
////for_each算法基本用法
//void test01() 
//{
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//遍历算法
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
////常用遍历算法  搬运 transform
//
//class TransForm
//{
//public:
//	int operator()(int val)
//	{
//		return val;
//	}
//
//};
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>vTarget; //目标容器
//
//	vTarget.resize(v.size()); // 目标容器需要提前开辟空间
//
//	transform(v.begin(), v.end(), vTarget.begin(), TransForm());
//
//	for_each(vTarget.begin(), vTarget.end(), MyPrint());
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//
//class Transform
//{
//public:
//	int operator()(int val)
//	{
//		return val;
//	}
//};
//
//class Printf
//{
//public:
//	void operator()(int val)
//	{
//		cout<<val<<" ";
//	}
//};
//
//int main()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>vtarget;
//	vtarget.resize(v.size());
//
//	transform(v.begin(),v.end(),vtarget.begin(),Transform() );
//	for_each(vtarget.begin(), vtarget.end(), Printf());
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//#include <string>
//
//void test01() 
//{
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++) 
//	{
//		v.push_back(i + 1);
//	}
//	//查找容器中是否有 5 这个元素
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "没有找到!" << endl;
//	}
//	else
//	{
//		cout << "找到:" << *it << endl;
//	}
//}
//
//class Person 
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	//重载==
//	bool operator==(const Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//public:
//	string m_Name;
//	int m_Age;
//};
//
//void test02() {
//
//	vector<Person> v;
//
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//	if (it == v.end())
//	{
//		cout << "没有找到!" << endl;
//	}
//	else
//	{
//		cout << "找到姓名:" << it->m_Name << " 年龄: " << it->m_Age << endl;
//	}
//}
//
//int main() 
//{
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//#include<algorithm>
//
//class Person
//{
//	friend void test01();
//public:
//	//friend void test01();
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	bool operator==(const Person& p)
//	{
//		if (this->m_age == p.m_age && this->m_name == p.m_name)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//private:
//	string m_name;
//	int m_age;
//};
//
//void test01()
//{
//	vector <Person> v;
//
//	Person p1("aaa", 10);
//    Person p2("bbb", 20);
//    Person p3("ccc", 30);
//    Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it =find(v.begin(), v.end(), p2);
//
//	if (it == v.end())
//	{
//        cout << "没有找到!" << endl;
//	}
//	else
//	{
//        cout << "找到姓名:" << it->m_name << " 年龄: " << it->m_age << endl;
//	}
//}
//
//int main() 
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//#include <string>
//
////内置数据类型
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01() {
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i + 1);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end()) {
//		cout << "没有找到!" << endl;
//	}
//	else {
//		cout << "找到大于5的数字:" << *it << endl;
//	}
//}
//
////自定义数据类型
//class Person {
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//
//class Greater20
//{
//public:
//	bool operator()(Person& p)
//	{
//		return p.m_Age > 20;
//	}
//
//};
//
//void test02() {
//
//	vector<Person> v;
//
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
//	if (it == v.end())
//	{
//		cout << "没有找到!" << endl;
//	}
//	else
//	{
//		cout << "找到姓名:" << it->m_Name << " 年龄: " << it->m_Age << endl;
//	}
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//找到相邻重复的元素
//#include <iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//
//int main() 
//{
//	vector<int> v;
//
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//
//	vector<int>::iterator ops = adjacent_find(v.begin(), v.end());
//
//	if (ops == v.end())
//	{
//        cout << "没有找到!" << endl;
//	}
//	else
//	{
//        cout << "找到相邻重复的元素:" << *ops << endl;
//	}
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//void test01()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//二分查找
//	bool ret = binary_search(v.begin(), v.end(), 2);
//	if (ret)
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
////内置数据类型
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(4);
//
//	int num = count(v.begin(), v.end(), 4);
//
//	cout << "4的个数为： " << num << endl;
//}
//
////自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(const Person& p)//重载==加const
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test02()
//{
//	vector<Person> v;
//
//	Person p1("刘备", 35);
//	Person p2("关羽", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 30);
//	Person p5("曹操", 25);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p("诸葛亮", 35);
//
//	int num = count(v.begin(), v.end(), p);
//	cout << "num = " << num << endl;
//}
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//class Greater4
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 4;
//	}
//};
//
////内置数据类型
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(4);
//
//	int num = count_if(v.begin(), v.end(), Greater4());
//
//	cout << "大于4的个数为： " << num << endl;
//}
//
////自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//class AgeLess35
//{
//public:
//	bool operator()(const Person& p)
//	{
//		return p.m_Age < 35;
//	}
//};
//void test02()
//{
//	vector<Person> v;
//
//	Person p1("刘备", 35);
//	Person p2("关羽", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 30);
//	Person p5("曹操", 25);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	int num = count_if(v.begin(), v.end(), AgeLess35());
//	cout << "小于35岁的个数：" << num << endl;
//}
//
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	//sort默认从小到大排序
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	//从大到小排序
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//#include <ctime>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	srand(time(NULL));
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	//打乱顺序
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//
//	vector<int> vtarget;
//	//目标容器需要提前开辟空间
//	vtarget.resize(v1.size() + v2.size());
//	//合并  需要两个有序序列
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
//	for_each(vtarget.begin(), vtarget.end(), myPrint());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	cout << "反转前： " << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	cout << "反转后： " << endl;
//
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) 
//	{
//		v1.push_back(i + 1);
//	}
//	vector<int> v2;
//	v2.resize(v1.size());//提前开辟空间
//	copy(v1.begin(), v1.end(), v2.begin());
//
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "替换前：" << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	//将容器中的20 替换成 2000
//	cout << "替换后：" << endl;
//	replace(v.begin(), v.end(), 20, 2000);
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//class ReplaceGreater30
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 30;
//	}
//
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "替换前：" << endl;
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	//将容器中大于等于的30 替换成 3000
//	cout << "替换后：" << endl;
//	replace_if(v.begin(), v.end(), ReplaceGreater30(), 3000);
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 100);
//	}
//
//	cout << "交换前： " << endl;
//	for_each(v1.begin(), v1.end(), myPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//
//	cout << "交换后： " << endl;
//	swap(v1, v2);
//	for_each(v1.begin(), v1.end(), myPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <numeric>
//#include <vector>
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i <= 100; i++) 
//	{
//		v.push_back(i);
//	}
//
//	int total = accumulate(v.begin(), v.end(), 1);
//
//	cout << "total = " << total << endl;
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <numeric>
//#include <vector>
//#include <algorithm>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//
//	vector<int> v;
//	v.resize(10);
//	//填充
//	fill(v.begin(), v.end(), 100);
//
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//求交集
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> vTarget;
//	//取两个里面较小的值给目标容器开辟空间
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	//返回目标容器的最后一个元素的迭代器地址
//	vector<int>::iterator itEnd =
//		set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//求并集
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> vTarget;
//	//取两个容器的和给目标容器开辟空间
//	vTarget.resize(v1.size() + v2.size());
//
//	//返回目标容器的最后一个元素的迭代器地址
//	vector<int>::iterator itEnd =
//		set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}

//求差集
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 10; i++) 
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> vTarget;
//	//取两个里面较大的值给目标容器开辟空间
//	vTarget.resize(max(v1.size(), v2.size()));
//
//	//返回目标容器的最后一个元素的迭代器地址
//	cout << "v1与v2的差集为： " << endl;
//	vector<int>::iterator itEnd =
//		set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//
//
//	cout << "v2与v1的差集为： " << endl;
//	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//}
//
//int main() 
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}