#include<bits/stdc++.h>
using namespace std;

void decrement(string reg)
{
	int n1;
	ostringstream str1;
	
	if(reg=="A")
	{
		n1 = hexToDec(A);
		n1--;
		str1<<DecToHex(n1);
		A = str1.str();
		
	}
	else if(reg=="B")
	{
		n1 = hexToDec(B);
		n1--;
		str1<<DecToHex(n1);
		B = str1.str();
	}		
	else if(reg=="C")
	{
		n1 = hexToDec(C);
		n1--;
		str1<<DecToHex(n1);
		C = str1.str();
	}	
	else if(reg=="D")
	{
		n1 = hexToDec(D);
		n1--;
		str1<<DecToHex(n1);
		D = str1.str();
	}
	else if(reg=="E")
	{
		n1 = hexToDec(E);
		n1--;
		str1<<DecToHex(n1);
		E = str1.str();
	}	
	else if(reg=="H")
	{
		n1 = hexToDec(H);
		n1--;
		str1<<DecToHex(n1);
		H = str1.str();
	}
	else if(reg=="L")
	{
		n1 = hexToDec(L);
		n1--;
		str1<<DecToHex(n1);
		L = str1.str();
	}
	if(n1>255)
		CF="01";
	if(n1==0)
		ZF="01";
}
