using namespace std;
int op_size(string str)
{
	map<string, int> size;
	size["LDA"] = 3;
	size["STA"] = 2;
	size["MOV"] = 1;
    size["MVI"] = 2;
    size["ADD"] = 1;
	size["ADI"] = 2;
	size["SUB"] = 1;
	size["SUI"] = 2;
	size["INR"] = 1;
	size["DCR"] = 1;
	size["INX"] = 1;
	size["DCX"] = 1;
	size["ORA"] = 1;
	size["ORI"] = 2;
	size["XRA"] = 1;
	size["XRI"] = 2;
	size["ANA"] = 1;
	size["ANI"] = 2;
	size["JMP"] = 3;
	size["JC"] = 3;
	size["JNC"] = 3;
	size["JZ"] = 3;
	size["JNZ"] = 3;
	size["HLT"] = 1;

    if(!size[str])
		return -1;
	else
		return size[str];
}

