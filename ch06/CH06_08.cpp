#include <iostream>                   // ��A���Y�� <iostream.h>
#include <cstdlib> 

using namespace std;

int main()
{
	 char Name[]="John";                //�w�q�r���}�C Name[]�A�ë��w���l��
	 char *p_N="Mary";                  //�w�q�r����� *p_N�A�ë��w���l��
	 cout<<"Name[] ����}:"<<&Name<<" �r�ꪺ���e:"<<Name<<endl;    
              //��ܦr���}�C�����e
	 //Name++; Name�����б`��,���i�B�� 
	 //Name=p_N Name�����б`��,���i���ܨ�� 
      
     cout<<"p_N����}:"<<(int*)p_N<<" �r�ꪺ���e:"<<p_N<<endl;
     //��ܦr����Ъ����e
	 p_N=Name;//p_N �����ܼ�,�i���ܨ��   
	 cout<<"p_N �r�ꪺ�s���e:"<<p_N<<endl;     //��ܦr����Ъ����e
	 p_N++; //p_N �����ܼ�,�i�i��B��  
     cout<<"p_N �r�ꪺ�s���e:"<<p_N<<endl; 
     
     system("pause");
     return  0;
}
