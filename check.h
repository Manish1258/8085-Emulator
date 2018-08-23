#include<bits/stdc++.h>
using namespace std;

void check(string reg)
{
	
	if(reg=="A")
	{
		if(A=="00")
		{
			ZF="01";		
		}
		if(hexToDec(A)>255)
			CF="01";
	}
	else if(reg=="B")
	{
		if(B=="00")
		{
			ZF="01";		
		}
		if(hexToDec(B)>255)
			CF="01";
		
	}
	else if(reg=="C")
	{
		if(C=="00")
		{
			ZF="01";		
		}
		if(hexToDec(C)>255)
			CF="01";
		
	}
	else if(reg=="D")
	{
		if(D=="00")
		{
			ZF="01";		
		}
		if(hexToDec(D)>255)
			CF="01";

	}
	else if(reg=="E")
	{
		if(E=="00")
		{
			ZF="01";		
		}
		if(hexToDec(E)>255)
			CF="01";
	}
	else if(reg=="H")
	{
		if(H=="00")
		{
			ZF="01";		
		}
		if(hexToDec(H)>255)
			CF="01";
	}
	else if(reg=="L")
	{
		if(L=="00")
		{
			ZF="01";		
		}
		if(hexToDec(L)>255)
			CF="01";
	}
}
