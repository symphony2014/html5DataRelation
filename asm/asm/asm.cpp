// asm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{

	try{
		int a = 0;
		int b = 0;
		short c = 0;
		a = c;
		_asm{
			mov ax,0
				mov ds,ax
				mov ebx,2
		}
		int aa[4];
	}
	catch (int value[]){
		cout << "";
	}

	return 0;
}

