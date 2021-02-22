#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class CharSet 
{
private:
	string str;
	int strLength;

public:
	CharSet()
	{
		str = "";
		strLength = 0;
	}

	CharSet(string str) 
	{
		SetString(str);
	}
	~CharSet() {}

	void SetString(string str)
	{
		this->str = str;
		strLength = str.length();
	}

	void Print()
	{
		cout << str << endl;
	}

	bool IsEqualTo(string strToCompare)
	{
		return str == strToCompare;
	}

	bool IsGreaterThan(string strToCompare)
	{
		return str > strToCompare;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	CharSet charSet("Привіт світ!");
	//charSet.Set("Привіт світ!");

	charSet.Print();

	cout << charSet.IsEqualTo("Привіт світ!") << endl;
	cout << charSet.IsGreaterThan("Привіт") << endl;

	system("pause");	
}