#include<bits/stdc++.h>
using namespace std;

#define mnemonic second.first
#define register1 second.second.first
#define register2 second.second.second
#define address first
vector <pair <string , pair < string , pair < string , string > > > > code(100);

string A="00",B="00",C="00",D="00",E="00",H="00",L="00";
string starting_addr;
int line_no=0;
string CF="00",ZF="00"; 
string memory[65536];

