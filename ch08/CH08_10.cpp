#include <iostream>
#include <cstdlib>
using namespace std;

char* getData(char*);//��ƭ�Φh��
int getData(int);
float getData(float);
double getData(double);

int main()
{
    char* cVal="�a�ܬ��";//�w�q���P��ƫ��O 
    int iVal=2004;    
    float fVal=2.3f;    
    double dVal=2.123;        
    cout<<"���� char* getData(char*)   => "<<getData(cVal)<<endl;
    cout<<"���� int getData(int)       => "<<getData(iVal)<<endl;    
    cout<<"���� float getData(float)   => "<<getData(fVal)<<endl;        
    cout<<"���� double getData(double) => "<<getData(dVal)<<endl;            
    
    system("pause");
    return 0;
}
//�w�q�h����Ƥ��e 
char* getData(char* cVal)
{
    return cVal;
}

int getData(int iVal)
{
    return iVal;
}

float getData(float fVal)
{
    return fVal;
}

double getData(double dVal)
{
    return dVal;
}
