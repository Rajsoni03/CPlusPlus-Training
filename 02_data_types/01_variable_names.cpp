#include <iostream>
using namespace std;

/*
	Rule 1 - (A-Z, a-z, 0-9, _, $)
	Rule 2 - first char shoud not be neumeric 0-9 
	Rule 3 - first char shoud not be Special Symbol 
	Rule 4 - keywords can not be used as a variable name
	Rule 5 (only for C) - max len 247 char
*/

int main(){
	// type name = value;
	int a = 10;
	int ABC;
	int Aabb;
	int aBB;
	int Ab29c21d;
	// int 2raj;

	int raj_soni;
	int _raj;  
	int __raj;
	int ___raj;
	int _;

	// int $raj;
	// int raj$soni;

	int my_class;
	int myClass;

	int gudhgsadbauioychuiwesbucyihbisaunbcuyvbuiylwbCJubUYB__uiieshuipcCVL;

	int _raj_;
	int __raj__;

	int Raj;
	int RAJ;
	int raj;

	// int while;
	// int int;
	// int register;

	int myNmae&raj;
	int myNmae#raj;

	return 0;
}