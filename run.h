#include<bits/stdc++.h>
using namespace std;
void run()
{
	int i;
	for(i=1;i<=line_no;i++)
	{
		if(code[i].mnemonic=="MOV")
			move(code[i].register1,code[i].register2);
		else if(code[i].mnemonic=="MVI")
			move_immediate(code[i].register1,code[i].register2);
		else if(code[i].mnemonic=="ADD")
			addition(code[i].register1);
		else if(code[i].mnemonic=="ADI")
			addition_immediate(code[i].register1);
		else if(code[i].mnemonic=="INC")
			increment(code[i].register1);
		else if(code[i].mnemonic=="SUB")
			subtract(code[i].register1);
		else if(code[i].mnemonic=="SUI")
			subtract_immediate(code[i].register1);
		else if(code[i].mnemonic=="DCR")
			decrement(code[i].register1);
		else if(code[i].mnemonic=="LDA")
			load_in_accumulator(code[i].register1);
		else if(code[i].mnemonic=="STA")
			store_from_accumulator(code[i].register1);
		else if(code[i].mnemonic=="ANA")
			andOperation(code[i].register1);
		else if(code[i].mnemonic=="ORA")
			orOperation(code[i].register1);						
		else if(code[i].mnemonic=="NOT")
			notOperation(code[i].register1);
		else if(code[i].mnemonic=="XRA")
			xorOperation(code[i].register1);				
		else if(code[i].mnemonic=="JMP")
		{
			i=jump(code[i].register1);				
			i--;
		}
		else if(code[i].mnemonic=="JNZ")
		{
			if(ZF=="00")
			{
				i=jump(code[i].register1);
				i--;
			}
		}
		else if(code[i].mnemonic=="JZ")
		{
			if(ZF=="01")
			{
				i=jump(code[i].register1);				
				i--;
			}
		}
		else if(code[i].mnemonic=="JNC")
		{
			if(CF=="00")
			{
				i=jump(code[i].register1);				
				i--;
			}
		}
		else if(code[i].mnemonic=="JC")
		{
			if(CF=="01")
			{
				i=jump(code[i].register1);				
				i--;
			}
		}		
	}
	
	
}
