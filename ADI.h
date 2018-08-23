#include<bits/stdc++.h>
using namespace std;

void addition_immediate(string num)
{
	ostringstream str1;
	
	
		int n1 = hexToDec(num);
		int n2 = hexToDec(A);
		int n = n1+n2;
		str1<<DecToHex(n);
		A = str1.str();
		if(n>255)
			CF="01";
		if(n==0)
			ZF="01";
	
}
