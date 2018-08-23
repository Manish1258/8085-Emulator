#include<iostream>
#include<string>
using namespace std;
 
int hexToDec(string hexVal)
{   
    int len = hexVal.length();
    int base = 1;
    int dec_val = 0;
    for (int i=len-1; i>=0; i--)
    {   
        if (hexVal[i]>='0' && hexVal[i]<='9')
        {
            dec_val += (hexVal[i] - 48)*base;
            base = base * 16;
        }
        else if (hexVal[i]>='A' && hexVal[i]<='F')
        {
            dec_val += (hexVal[i] - 55)*base;
            base = base*16;
        }
    }
     
    return dec_val;
}
