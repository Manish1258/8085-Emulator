#include<bits/stdc++.h>
using namespace std;

void andOperation(string reg)
{
int n;
	ostringstream str1;
	
	if(reg=="B")
	{
		int n1 = hexToDec(B);
		int n2 = hexToDec(A);
		n = n1&n2;
		str1<<DecToHex(n);
		A = str1.str();
		
	}
	else if(reg=="C")
	{
		int n1 = hexToDec(C);
		int n2 = hexToDec(A);
		n = n1&n2;
		str1<<DecToHex(n);
		A = str1.str();
		
	}
	else if(reg=="D")
	{
		int n1 = hexToDec(D);
		int n2 = hexToDec(A);
		n = n1&n2;
		str1<<DecToHex(n);
		A = str1.str();
	}
	else if(reg=="E")
	{
		int n1 = hexToDec(E);
		int n2 = hexToDec(A);
		n = n1&n2;
		
		str1<<DecToHex(n);
		A = str1.str();
	}
	else if(reg=="H")
	{
		int n1 = hexToDec(H);
		int n2 = hexToDec(A);
		n = n1&n2;
		str1<<DecToHex(n);
		A = str1.str();
	}
	else if(reg=="L")
	{
		int n1 = hexToDec(L);
		int n2 = hexToDec(A);
		n = n1&n2;
		str1<<DecToHex(n);
		A = str1.str();
	}	
	if(n>255)
		CF="01";
	if(n==0)
		ZF="01";	
}
