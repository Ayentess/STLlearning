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