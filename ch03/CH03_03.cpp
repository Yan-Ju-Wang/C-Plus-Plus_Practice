#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int a=13,b=57;
	
	//標示a與b的二進位表示法 
	cout<<"a=13,二進位為00001101"<<endl;
	cout<<"b=57,二進位為00111001"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"位元運算子運算範例"<<endl; 
	cout<<"----------------------------------------"<<endl;
	//位元運算子運算關係
	cout<<"13 & 57 ="<<(a&b)<<endl;//&位元運算子
	cout<<"13 | 57 ="<<(a|b)<<endl;//|位元運算子
    cout<<"13 ^ 57 ="<<(a^b)<<endl;//^位元運算子
    cout<<"~57 ="<<(~b)<<endl;//~位元運算子
	cout<<"13>>2 ="<<(a>>2)<<endl;// >>位元運算子
	cout<<"13<<2 ="<<(a<<2)<<endl;//<<位元運算子
	
    system("pause");  
    return 0;
 }
