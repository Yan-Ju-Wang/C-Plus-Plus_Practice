#include <iostream>                             
#include <cstdlib> 
using namespace std;

#define CHOICE 2                                  //�w�q�ѧO�r CHOICE 

#if CHOICE==1                           //�p�G CHOICE==1,�w�q�ѧO�r START �� 11,
                                        //�ѧO�r END �� 20
  #define START 11                                
  #define END 20  
                                  
#elif CHOICE==2                                   //�p�G CHOICE==2,�w�q�ѧO�r START �� 21,
                                                  //�w�q�ѧO�r END �� 30 
  #define START 21                                
  #define END 30   
                                 
#else                                            //�p�G�e�������󳣤�����,�w�q�ѧO�r START �� 1,
                                                 //�w�q�ѧO�r START �� 10
  #define START 1                                 
  #define END 10   
                                 
#endif                                            //�����e�m�B�z���O #if *

int main()                       
{
	 int Total=0,count; 
                                     //�w�q����ܼ� Total 
	 for (count=START; count <= END; count++) // for �j�����[�k�B�� 
	 {
		 cout<<count;
		 if (count < END) cout<<" + ";          //�p�G����ܼ� (count < END)�A���"+"�Ÿ� 
		 Total+=count;
	 }
	  cout<<" = "<<Total<<endl;    // ��ܾ���ܼ� Total ���� 
	  
      system("pause");
      return 0;                              
}
