#pragma once
#include <iostream>
using namespace std;

class MyString {
	char* str;
	int lenght;
public:
	MyString();
	MyString(const char* obj);
	~MyString();
	int MyStrlen();
	void Input();
	void Show();
	void MyStrCpy(const MyString& obj);
	void MyChr();
	void MyStrCat(const MyString& b);
	int MyStrStr(const char* str);
	/*int MyStrCmp(MyString& b);*/
	/*void MyDelChr();*/
};