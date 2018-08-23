#include<bits/stdc++.h>
using namespace std;
void move(string destination,string source)
{
	if(destination=="A")
	{
		if(source == "B")
			A=B;
		else if(source == "C")
			A=C;
		else if(source == "D")
			A=D;
		else if(source == "E")
			A=E;
		else if(source == "H")
			A=H;
		else if(source == "L")
			A=L;
	}
	else if(destination=="B")
	{
		if(source == "A")
			B=A;
		else if(source == "C")
			B=C;
		else if(source == "D")
			B=D;
		else if(source == "E")
			B=E;
		else if(source == "H")
			B=H;
		else if(source == "L")
			B=L;
	}
	else if(destination=="C")
	{
		if(source == "B")
			C=B;
		else if(source == "A")
			C=A;
		else if(source == "D")
			C=D;
		else if(source == "E")
			C=E;
		else if(source == "H")
			C=H;
		else if(source == "L")
			C=L;
	}
	else if(destination=="D")
	{
		if(source == "B")
			D=B;
		else if(source == "A")
			D=A;
		else if(source == "C")
			D=C;
		else if(source == "E")
			D=E;
		else if(source == "H")
			D=H;
		else if(source == "L")
			D=L;
	}
	else if(destination=="E")
	{
		if(source == "B")
			E=B;
		else if(source == "A")
			E=A;
		else if(source == "D")
			E=D;
		else if(source == "C")
			E=C;
		else if(source == "H")
			E=H;
		else if(source == "L")
			E=L;
	}
	else if(destination=="H")
	{
		if(source == "B")
			H=B;
		else if(source == "A")
			H=A;
		else if(source == "D")
			H=D;
		else if(source == "E")
			H=E;
		else if(source == "C")
			H=C;
		else if(source == "L")
			H=L;
	}
	else if(destination=="L")
	{
		if(source == "B")
			L=B;
		else if(source == "A")
			L=A;
		else if(source == "D")
			L=D;
		else if(source == "E")
			L=E;
		else if(source == "H")
			L=H;
		else if(source == "C")
			L=C;
	}
}
void move_immediate(string destination,string source)
{
	if(destination=="A")
		A=source;
	else if(destination=="B")
		B=source;
	else if(destination=="C")
		C=source;
	else if(destination=="D")
		D=source;
	else if(destination=="E")
		E=source;
	else if(destination=="H")
		H=source;
	else if(destination=="L")
		L=source;
}
