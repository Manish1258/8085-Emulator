#include <bits/stdc++.h>
#include <fstream>
#include <conio.h>
#include "register_memory.h"
#include "MOV.h"
#include "hexToDec.h"
#include "DecToHex.h"
#include "check.h"
#include "ADD.h"
#include "INR.h"
#include "opcode_size.h"
#include "get_input.h"
#include "SUI.h"
#include "ADI.h"
#include "SUB.h"
#include "DCR.h"
#include "LDA.h"
#include "STA.h"
#include "AND.h"
#include "OR.h"
#include "XOR.h"
#include "NOT.h"
#include "JUMP.h"
#include "run.h"

using namespace std;

int main() {
	int option;
	string mem,data;
	cout<<"\t\t\t_________________________________________"<<endl;
	cout<<"\t\t\t\t\tENTER"<<endl;
	cout<<"\t\t\t\t1:Get program from file\n";
	cout<<"\t\t\t\t2:Input data to memory\n";
	cout<<"\t\t\t\t3:Exit\n";
	cout<<"\t\t\t_________________________________________"<<endl;
	cout<<"\t\t\t\t\t>>";
	cin>>option;
	system("cls");
	//clrscr();
	if(option==1)
	{
		get_code();
	}
	else if(option==2)
	{
		int n=0;
		do
		{
			cout<<"\t\t___________________________________________________"<<endl;
			cout<<"\n\t\t\tMemory Address>> ";
			cin>>mem;
			if(mem=="-1")
				break;
			if(mem.size()>4)
			{
				cout<<"\n\t\t\tWarning! Wrong Memory Address\n";
				n=1;
				break;
			}
			cout<<"\t\t\tData          >> ";
			cin>>data;
			int num=hexToDec(mem);
			memory[num]=data;
		}while(true);
		if(n!=1)
		{
			system("cls");
			get_code();
		}
	}
	else
	{
		exit(0);
	}
	run();
	system("cls");

	do{
		system("cls");
		
		cout<<"\t\t\t_________________________________________"<<endl;
		cout<<"\t\t\t\t\tENTER"<<endl;
		cout<<"\t\t\t\t1:Contents of Register\n";
		cout<<"\t\t\t\t2:Contents of Memory\n";
		cout<<"\t\t\t\t3:Status Flags\n";
		cout<<"\t\t\t\t4:Exit\n";
		cout<<"\t\t\t_________________________________________"<<endl;
		cout<<"\t\t\t\t\t>>";
		cin>>option;
		switch(option)
		{
			case 1:
			cout<<"\t\t\t\tAccumulator: "<<A;
			cout<<"\n\t\t\t\tRegister B : "<<B;
			cout<<"\n\t\t\t\tRegister C : "<<C;
			cout<<"\n\t\t\t\tRegister D : "<<D;
			cout<<"\n\t\t\t\tRegister E : "<<E;
			cout<<"\n\t\t\t\tRegister H : "<<H;
			cout<<"\n\t\t\t\tRegister L : "<<L;
			getch();
			break;
			case 2:
			int n;
			do
			{
				cout<<"\n\n\t\t\tMemory Address: ";
				cin>>mem;
				if(mem=="-1")
					break;
				if(mem.size()>4)
				{
					cout<<"\n\t\t\tWarning! Wrong Memory Address\n";
					n=1;
					break;
				}
				
				int num=hexToDec(mem);
				cout<<"\t\t\tData          : "<<memory[num];
				cout<<"\n\t\t___________________________________________________"<<endl;
			}while(true);
			getch();
			break;
		
			case 3:
			cout<<"Carry Flag="<<CF<<"\n";
			cout<<"Zero Flag="<<ZF<<"\n";
			getch();
		}
		
	}while(option!=4);
	return 0;
}
