#include<iostream>
#include<string>
using namespace std;
/*
	������
	�ڴ�ռ��ʾ������1.��ַ�����ڸ��ӣ� 2.���������ڴ�ռ�������
*/
/*
	�����������޸ģ��޸ı���
	1. #define �곣��: #define ������ ����ֵ
	2. const���α���: const
*/
/*
	�ؼ��֣�

*/
/*
	���ͣ�
	short 2���ֽ�(-32768~32767) /int 4���ֽ� /long windowsΪ4���ֽڣ�Linux4/8���ֽ� /long long 8���ֽ�
	
	�����ͣ�Ĭ������£����һ��С����double��floatֻ����ʾ��λ��Ч����
	float 4���ֽڣ�7λ��Ч���� / double 8���ֽ�,15~16λ��ЧС��
	��ѧ��������
	3e5:3*10^5

	�ַ��ͣ�������+һ���ַ�
	char 1���ֽ�
	��ŵ�ASCII���룬���ASCII����:(int���ַ�����
	
	��������:
	bool 1���ֽ�
*/
/*
	sizeof(����/��������):

*/
#define Day 7
int main() {
	cout << Day << endl;
	short a = -3227659; // ���½糬��ֻ��ȡ��15λ��ɵ�����,���λ�������ʧ
	cout << a << endl;
	cout << sizeof(long) << endl;
	float f1 = 553.144343; // PC��Ĭ��С��˫���ȣ�����ʱ��ת����float
	float ff1 = 3.14451244f;// +fĬ�ϵ�����
	float f2 = 3e-2;
	cout << ff1<<endl;//���553.144

	char ch = 'a';
	cout << sizeof(ch)<<endl;
	cout << (int)ch<<endl;// 'a'-97,'A'-65
	cout << (int)('A') << endl;
	cout << char(98) << endl;

	/* 
		ת���ַ�:��б��+��ĸ
		\n:����  \\����б��(һ��б�ܻᱨ��) \t:ˮƽָ����ţ�ǰ��+\t���˸�λ�ã�
	*/
	cout << "hello \n world\n";
	cout << "\\" << endl;
	cout << "aaa \t hello" << endl; // \tռ�����ո�
	cout << "aaaaaa \t hello" << endl;// \tռ�����ո�

	/*
		C�ַ�����char str[] = "�ַ���ֵ"
		C++�ַ�����string ������ = "�ַ���ֵ" ��Ҫ��ͷ�ļ�<string>

	*/
	char str1[] = "welcome to C";
	string str2 = "welcome to C++";
	cout << str1;
	cout << str2;


	/*
		���ݵ����룺cin
	*/
	string str = nullptr;
	cin >> str;
	cout << str << endl;

	bool flag;
	cin >> flag;
	cout << "��������:" << flag << endl;//��0�����棬���1��0����٣����0
	
	/*
		��������;
		ȡģ���㣻
		�ݼ����㣻
		
	*/

	/*
		��Ŀ�������
	*/

	/*
		switch��䣺
		switch(���ʽ)
		case ���1:...break;
		case ���2:...break;
		default:...break;
		ȱ��break��һֱ����ִ��
		ȱ�㣺switch�ж�ʱֻ����һ�����ͻ����ַ���
	*/
	
	system("pause");
	return 0;
}