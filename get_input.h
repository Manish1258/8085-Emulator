#include<bits/stdc++.h>
using namespace std;
void address_calculate()
{
	string a=starting_addr;
	//cout<<starting_addr<<endl;
	int x;
	for(int i=1;i<=line_no;i++)
	{
		//cout<<x<<endl;
		code[i].address=a;
		x=hexToDec(a);
		a=DecToHex2(x+op_size(code[i].mnemonic));
		//cout<<code[i].address<<" "<<code[i].mnemonic<<" "<<code[i].register1<<" "<<code[i].register2<<endl;
        	
	}
	//getch();
}

void get_code()
{
	int length=0;
	char file_name[30];
	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t_________________________________________"<<endl;
	cout<<"\n\t\t\t\tFile name>> ";
	cin>>file_name;
	ifstream fin(file_name);
	string str,tmp;
	
	while(true)
	{
		str.clear();
        getline(fin,str);
        //cout<<str<<endl;
        if(line_no==0)
        {
        	length=str.size();
    	    tmp = "";
        	int i = 0;
        	while(i<length)
        	{
            	tmp += str[i];
      	    	i++;
        	}
        	starting_addr=tmp;
			code[line_no].address=tmp;
			
		}
		else
		{
	        if(str == "HLT")
	        {
	        	code[++line_no].mnemonic="HLT";	
				break;
			}
			length=str.size();
    	    tmp = "";
        	int i = 0;
        	while(str[i] != ' ')
        	{
            	tmp += str[i];
      	    	i++;
        	}
        	i++;
        	code[line_no].mnemonic = tmp;
			if(i ==length)
				continue;
        	tmp = "";
        	while(str[i] != ' ' && i < length)
        	{
            	tmp += str[i];
            	i++;
        	}
        	i++;
        	code[line_no].register1 = tmp;
        	if(i == length)
				continue;
        	tmp = "";
        	while(i < length)
        	{
            	tmp += str[i];
            	i++;
        	}
        	code[line_no].register2 = tmp;
        	//cout<<code[line_no].address<<" "<<code[line_no].mnemonic<<" "<<code[line_no].register1<<" "<<code[line_no].register2<<endl;
        	
		}
		line_no++;    
	}
	address_calculate();
}

