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