//#include<iostream>
//#include<vector>
//#include<algorithm>//�㷨	
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
//    // �ṩ�����ķ��ʷ���
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
//// ����һ�����������������ӡ Person �������Ϣ
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
//    v.push_back(p5); // �� p5 ��ӵ� vector ��
//
//    // ʹ�� for_each ��������ӡÿ�� Person �������Ϣ
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
//    v.push_back(p5); // �� p5 ��ӵ� vector ��
//
//    // ʹ�� for_each ��������ӡÿ�� Person �������Ϣ
//    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << "������" << it->m_name << " ���䣺" << it->m_age << endl;
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
//    //��������Сvector����
//    vector<int> v1;
//    vector<int> v2;
//    vector<int> v3;
//    vector<int> v4;
//
//    //��С�����������
//    for (int i = 0; i < 4; i++)
//    {
//        v1.push_back(i + 1);
//        v2.push_back(i + 2);
//        v3.push_back(i + 3);
//        v4.push_back(i + 4);
//    }
//
//    //��ŵ���vector������
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
//	//�ַ����ĸ�ֵ����
//	//���ط�ʽ
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
//	//assign ��ʽ
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
////�ַ���ƴ��
//void test01()
//{
//	//���ط�ʽ
//	string str1 = "��";
//
//	str1 += "������Ϸ";
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
//    //append��ʽ
//	string str3 = "I";
//	str3.append(" love ");
//	str3.append("game abcde", 4);
//	//str3.append(str2);
//	str3.append(str2, 4, 3); // ���±�4λ�ÿ�ʼ ����ȡ3���ַ���ƴ�ӵ��ַ���ĩβ
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
////���Һ��滻
//void test01()
//{
//	//����
//	string str1 = "abcdefg";
//	//��������
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "pos = " << pos << endl;
//	}
//
//	//��������
//	pos = str1.rfind("de");
//
//	cout << "pos = " << pos << endl;
//
//}
//
//void test02()
//{
//	//�滻
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
////�ַ����Ƚ�
//void test01()
//{
//
//	string s1 = "hello";
//	string s2 = "aello";
//
//	int ret = s1.compare(s2);
//
//	if (ret == 0) {
//		cout << "s1 ���� s2" << endl;
//	}
//	else if (ret > 0)
//	{
//		cout << "s1 ���� s2" << endl;
//	}
//	else
//	{
//		cout << "s1 С�� s2" << endl;
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
//	//�ַ��޸�
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
////�ַ��������ɾ��
//void test01()
//{
//    //����
//	string str = "hello";
//	str.insert(1, "111");//��1��λ�ÿ�ʼ����111
//	cout << str << endl;
//
//	//ɾ��
//	str.erase(1, 3);  //��1��λ�ÿ�ʼ3���ַ�
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
////�Ӵ�
//void test01()
//{
//
//	string str = "abcdefg";
//	string subStr = str.substr(1, 3);//��1��λ�ÿ�ʼ����ȡ3���ַ�
//	cout << "subStr = " << subStr << endl;
//
//	string email = "hello@sina.com";
//	int pos = email.find("@");//����@��
//	string username = email.substr(0,pos);//��ȡ@��֮ǰ���ַ�
//	string Email = email.substr(pos, email.size());//��ȡ@��֮����ַ�
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
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������ = " << v1.capacity() << endl;
//		cout << "v1�Ĵ�С = " << v1.size() << endl;
//	}
//
//	//resize ����ָ����С ����ָ���ĸ���Ĭ����0�����λ�ã������������ذ汾�滻Ĭ�����
//
//	//v1.resize(15);
//	//printVector(v1);
//
//	v1.resize(15, 10);
//	printVector(v1);
//
//	//resize ����ָ����С ����ָ���ĸ�С����������Ԫ�ر�ɾ��
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
////�����ɾ��
//void test01()
//{
//	vector<int> v1;
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//	//����
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//
//	//ɾ��
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//���
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
//	cout << "v1�ĵ�һ��Ԫ��Ϊ�� " << v1.front() << endl;
//	cout << "v1�����һ��Ԫ��Ϊ�� " << v1.back() << endl;
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
//	//��������
//	cout << "������" << endl;
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
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	v.resize(3);
//
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	//�����ڴ�
//	vector<int>(v).swap(v); //��������
//
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
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
//	//Ԥ���ռ�, �����ڴ����·���Ĵ���(���ݽϴ�ʱʹ��)
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
////deque����
//void test01() {
//
//	deque<int> d1; //�޲ι��캯��
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);//10��100
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
////��ֵ����
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);//����
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
////��С����
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//�ж������Ƿ�Ϊ��
//	if (d1.empty()) {
//		cout << "d1Ϊ��!" << endl;
//	}
//	else {
//		cout << "d1��Ϊ��!" << endl;
//		//ͳ�ƴ�С
//		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
//	}
//
//	//����ָ����С
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
////���˲���
//void test01()
//{
//	deque<int> d;
//	//β��
//	d.push_back(10);
//	d.push_back(20);
//	//ͷ��
//	d.push_front(100);
//	d.push_front(200);
//
//	printDeque(d);
//
//	//βɾ
//	d.pop_back();
//	//ͷɾ
//	d.pop_front();
//	printDeque(d);
//}
//
////����
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
////ɾ��
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
//	//�������
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
////���ݴ�ȡ
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
////����ѡ��
//void CreatePerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
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
////���÷���
//void SetScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		deque<double>d;
//
//		for (int i = 0; i < 10; i++)
//		{
//			double score = rand() % 41 + 60;//60~100
//			d.push_back(score);//����������
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
//		//��ƽ����
//		avg=avg/d.size();
//
//		//����ƽ����
//		it->m_Score = avg;
//	}
//}
//
//void ShowPerson(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout<<"������"<<it->m_Name<<" " << "������" << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	//���������
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
//		string name = "ѡ��";
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
//        cout<<"������"<<it->m_Name<<" "<<"������"<<it->m_Score<<endl;
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
//	cout << "����ǰ�� " << endl;
//	printList(L1);
//	printList(L2);
//
//	cout << endl;
//
//	L1.swap(L2);
//
//	cout << "������ " << endl;
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
////��С����
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
//		cout << "L1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "L1��Ϊ��" << endl;
//		cout << "L1�Ĵ�СΪ�� " << L1.size() << endl;
//	}
//
//	//����ָ����С
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
////�����ɾ��
//void test01()
//{
//	list<int> L;
//	//β��
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	//ͷ��
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	printList(L);
//
//	//βɾ
//	L.pop_back();
//	printList(L);
//
//	//ͷɾ
//	L.pop_front();
//	printList(L);
//
//	//����
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	printList(L);
//
//	//ɾ��
//	it = L.begin();
//	L.erase(++it);
//	printList(L);
//
//	//�Ƴ�
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);
//	printList(L);
//
//	//���
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
////���ݴ�ȡ
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//
//	//cout << L1.at(0) << endl;//���� ��֧��at��������
//	//cout << L1[0] << endl; //����  ��֧��[]��ʽ��������
//	cout << "��һ��Ԫ��Ϊ�� " << L1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ�� " << L1.back() << endl;
//
//	//list�����ĵ�������˫�����������֧���������
//	list<int>::iterator it = L1.begin();
//	//it = it + 1;//���󣬲�������Ծ���ʣ���ʹ��+1
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
////��ת������
//void test01()
//{
//	list<int> L;
//	L.push_back(90);
//	L.push_back(30);
//	L.push_back(20);
//	L.push_back(70);
//	printList(L);
//
//	//��ת������Ԫ��
//	L.reverse();
//	printList(L);
//
//	//����
//	L.sort(); //Ĭ�ϵ�������� ��С����
//	printList(L);
//
//	L.sort(myCompare); //ָ�����򣬴Ӵ�С
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
//	string m_Name;  //����
//	int m_Age;      //����
//	int m_Height;   //���
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
//	Person p1("����", 35, 175);
//	Person p2("�ܲ�", 45, 180);
//	Person p3("��Ȩ", 40, 170);
//	Person p4("����", 25, 190);
//	Person p5("�ŷ�", 35, 160);
//	Person p6("����", 35, 200);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age
//			<< " ��ߣ� " << it->m_Height << endl;
//	}
//
//	cout << "---------------------------------" << endl;
//	L.sort(ComparePerson); //����
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//		cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age
//			<< " ��ߣ� " << it->m_Height << endl;
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
////����͸�ֵ
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
//	//��������
//	set<int>s2(s1);
//	printSet(s2);
//
//	//��ֵ
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
////��С
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
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ�� " << s1.size() << endl;
//	}
//
//}
//
////����
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
//	cout << "����ǰ" << endl;
//	printSet(s1);
//	printSet(s2);
//	cout << endl;
//
//	cout << "������" << endl;
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
////�����ɾ��
//void test01()
//{
//	set<int> s1;
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//
//	//ɾ��
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);//ɾ��ָ��Ԫ��
//	printSet(s1);
//
//	//���
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
////���Һ�ͳ��
//void test01()
//{
//	set<int> s1;
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//����
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "�ҵ���Ԫ�� �� " << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	//ͳ��
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
//	//Ĭ�ϴ�С����
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//ָ���������
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

#include <iostream>
#include <set>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

class comparePerson
{
public:
    bool operator()(const Person& p1, const Person& p2) const
    {
        // ��������������򣬽���
        return p1.m_Age > p2.m_Age;
    }
};

// ��ӡset��Person�ĺ���
void printPersonSet(const set<Person, comparePerson>& s)
{
    for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << "������ " << it->m_Name << " ���䣺 " << it->m_Age << endl;
    }
}

void test01()
{
    set<Person, comparePerson> s;

    Person p1("����", 23);
    Person p2("����", 27);
    Person p3("�ŷ�", 25);
    Person p4("����", 21);

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    // ���ô�ӡ����
    printPersonSet(s);
}

int main()
{
    test01();

    system("pause");

    return 0;
}