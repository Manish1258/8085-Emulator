#include<bits/stdc++.h>
using namespace std;

int jump(string addr)
{
	int i,j=0;
	string str;
	for(i=1;i<line_no;i++)
	{
		str=code[i].address;
		if(str==addr)
		{
			j=i;
			break;
		}
	}
	if(j==0)
	{
		cout<<"wrong address";
	}
	else
	{
		return j;
	}
	
	
}
