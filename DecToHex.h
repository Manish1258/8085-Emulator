#include<iostream>
using namespace std;

string DecToHex(int n)
{
	int rem;
    string s="00";
    for(int i=1;i>=0;i--)
    {
    	rem=n%16;
    	if(rem<10)
    	{
    		s[i]=char(48+rem);
		}
		else
		{
			s[i]=char(55+rem);
		}
		n=n/16;
	}
	return s;

}

string DecToHex2(int n)
{
	int rem;
    string s="0000";
    for(int i=3;i>=0;i--)
    {
    	rem=n%16;
    	if(rem<10)
    	{
    		s[i]=char(48+rem);
		}
		else
		{
			s[i]=char(55+rem);
		}
		n=n/16;
	}
	return s;

}
