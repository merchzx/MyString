#pragma once
#include "myString.h"


int MyString::countOfObjects = 0;

	MyString::MyString()
	{
		lenght = 80;
		str = new char[lenght];
		++countOfObjects;
	}

	MyString::MyString(const char* obj)
	{
		lenght = strlen(obj);
		str = new char[lenght + 1];
		strcpy_s(str, lenght + 1, obj);
	}

	void MyString::MyStrCpy(const MyString& obj)
	{
		lenght = obj.lenght;
		str = new char[lenght + 1];
		strcpy_s(str, lenght + 1, obj.str);
	}

	void MyString::MyChr()
	{
		char c;
		cout << "Enter ur Symbol ->";
		cin >> c;
		int index = 0;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == c) {
				index = i;
				break;
			}
		}
		cout << "Ur index of Symbol:" << c << " = " << index;
	}

	void MyString::MyStrCat(const MyString& b)
	{
		char* newChar = new char[lenght + b.lenght + 1];
		strcpy_s(newChar, lenght + 1, str);
		strcat_s(newChar, lenght + 1 + b.lenght, b.str);
		delete[]str;
		str = newChar;
		lenght = lenght + b.lenght;
	}

	MyString::MyString(const MyString& obj)
	{
			lenght = obj.lenght;
			str = new char[lenght + 1];
			strcpy_s(str, lenght + 1, obj.str);	
	}

	int MyString::MyStrStr(const char* _str)
	{
		const char* result = std::strstr(str, _str);
		if (result) {
			cout << "Stroke is found: " << result << endl;
		}
		else {
			cout << "Stroke isn`t found :(" << endl;
		}
		

		return 1;
	}

	void MyString::operator[](int index)
	{
		if (index >= 0 and index <= lenght) {
			cout<<str[index];
		}
		cout << endl;
	}

	//void MyString::MyDelChr()
	//{
	//	int j = 0;
	//	char c;
	//	cout << "Enter ur Symbol ->";
	//	cin >> c;
	//	char* buff = new char[lenght];
	//	for (int i = 0; i < strlen(str); i++) {
	//		if (str[i] != c) {
	//			buff[j] = str[i];
	//			j++;
	//		}
	//		else {
	//			cout << "Symbol isn`t found!!!";
	//		}
	//	}
	//	buff[j] = '\0';
	//	delete[]str;
	//	lenght = j + 1;
	//	str = new char[lenght];
	//	strcpy_s(str, lenght, buff);
	//	delete[] buff;
	//	cout <<"New Text:" << str;
	//}

	int MyString::MyStrlen() {
		return lenght - 1;
	}

	MyString::~MyString()
	{
		delete[] str;
	}


	void MyString::Input() {
		char buff[1000];
		cout << "Enter ur Text -> ";
		cin.getline(buff,1000);
		if (str != nullptr) {
			delete[] str;
		}
		lenght = strlen(buff);
		str = new char[lenght + 1];
		strcpy_s(str, lenght + 1, buff);
	}

	void MyString::Show() {
		cout << str<<endl;
		cout << "Count Of Created Objects ->"<<countOfObjects;
	}

	/*int MyString::MyStrCmp(MyString& b)
	{
		if (strlen(str) > b.lenght) {
			cout << "First line bigger than second";
			return 1;
		}
		else if (strlen(str) < b.lenght) {
			cout << "Second line bigger than first";
			return -1;
		}
		else if (strlen(str) == b.lenght) {
			cout << "They are equals";
			return 0;
		}
	}*/
