#include <iostream>
#include <cstdlib> 
using namespace std;

void print_word1(char*);  //��ƭ쫬�ŧi 
void print_word2(char*);  //��ƭ쫬�ŧi 

int main()
{
    void (*ptr)(char*); //��ƫ��Ыŧi 

    ptr = print_word1;  // �Nprint_word1���O�����}���w��ptr ��ƫ���
    ptr("hello");       //�ϥ�ptr()����print_word1 ()���\�� 
    cout<<"------------------------------------"<<endl;
    ptr = print_word2;  // �Nprint_word2���O�����}���w��ptr ��ƫ���
    ptr("Good bye!");       //�ϥ�ptr()����print_word2()���\�� 

    system("pause");
    return 0;
}

void print_word1 (char* str)
{
    cout<<"�o�Oprint_word1���"<<endl; 
    cout<<str<<endl;
}

void print_word2(char *str)
{
    cout<<"�o�Oprint_word2���"<<endl;
    cout<<str<<endl;
}

