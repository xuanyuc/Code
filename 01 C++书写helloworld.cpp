#include<iostream>
#include<string>
using namespace std;
/*
	变量：
	内存空间表示方法：1.地址（过于复杂） 2.变量名（内存空间起名）
*/
/*
	常量：不可修改，修改报错
	1. #define 宏常量: #define 常量名 常量值
	2. const修饰变量: const
*/
/*
	关键字：

*/
/*
	整型：
	short 2个字节(-32768~32767) /int 4个字节 /long windows为4个字节，Linux4/8个字节 /long long 8个字节
	
	浮点型：默认情况下，输出一个小数，double和float只会显示六位有效数字
	float 4个字节，7位有效数字 / double 8个字节,15~16位有效小数
	科学计数法：
	3e5:3*10^5

	字符型：单引号+一个字符
	char 1个字节
	存放的ASCII编码，输出ASCII编码:(int）字符变量
	
	布尔类型:
	bool 1个字节
*/
/*
	sizeof(变量/数据类型):

*/
#define Day 7
int main() {
	cout << Day << endl;
	short a = -3227659; // 上下界超出只会取后15位组成的数字,多的位数溢出丢失
	cout << a << endl;
	cout << sizeof(long) << endl;
	float f1 = 553.144343; // PC会默认小数双精度，定义时再转换成float
	float ff1 = 3.14451244f;// +f默认单精度
	float f2 = 3e-2;
	cout << ff1<<endl;//输出553.144

	char ch = 'a';
	cout << sizeof(ch)<<endl;
	cout << (int)ch<<endl;// 'a'-97,'A'-65
	cout << (int)('A') << endl;
	cout << char(98) << endl;

	/* 
		转义字符:反斜杠+字母
		\n:换行  \\：反斜杠(一条斜杠会报错) \t:水平指标符号（前面+\t共八个位置）
	*/
	cout << "hello \n world\n";
	cout << "\\" << endl;
	cout << "aaa \t hello" << endl; // \t占三个空格
	cout << "aaaaaa \t hello" << endl;// \t占两个空格

	/*
		C字符串：char str[] = "字符串值"
		C++字符串：string 变量名 = "字符串值" 需要加头文件<string>

	*/
	char str1[] = "welcome to C";
	string str2 = "welcome to C++";
	cout << str1;
	cout << str2;


	/*
		数据的输入：cin
	*/
	string str = nullptr;
	cin >> str;
	cout << str << endl;

	bool flag;
	cin >> flag;
	cout << "布尔类型:" << flag << endl;//非0代表真，输出1；0代表假，输出0
	
	/*
		四则运算;
		取模运算；
		递减运算；
		
	*/

	/*
		三目运算符：
	*/

	/*
		switch语句：
		switch(表达式)
		case 结果1:...break;
		case 结果2:...break;
		default:...break;
		缺少break会一直向下执行
		缺点：switch判断时只能是一个整型或者字符型
	*/
	
	system("pause");
	return 0;
}