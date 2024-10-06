#include <iostream>
#include "myString.h"
#include <Windows.h>
#include <iostream>
#include <cstring>
using namespace std;


int main() {
	MyString a;
	a.Input();
	MyString b;
	b.Input();
	a.MyStrCat(b);
	a.Show();

	/*a.MyStrStr("LOX");*/
 }