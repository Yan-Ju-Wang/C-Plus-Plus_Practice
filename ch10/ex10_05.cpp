#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct product
{
    char name[20];
    int price;
    int number;
};  //�b����d�򤺧@�ŧi 
int calculate(struct product &);
// �ǰѦҩI�s���쫬�ŧi 

int main()
{
    struct product book;
    
    cout<<"�ѦW:";
    cin>>book.name;
    cout<<"���:";
    cin>>book.price;
    cout<<"�ƶq:";
    cin>>book.number;
    cout<<"-----------------------------------------"<<endl;
    cout<<"�ѦW :"<<book.name<<endl;
    cout<<"��� ="<<book.price<<endl;
    cout<<"�ƶq ="<<book.number<<endl;
    cout<<"�q�ʪ��B ="<<calculate(book)<<endl; //�I�s�ɡA�����N���c�ܼƦW�ٶǤJ��ƧY�i   
    cout<<book.name<<endl;
    system("pause");
    return 0;
}
int calculate(struct product &inbook)
{
    int money;
    
    strcpy(inbook.name,"���Ѥw�I�ڤF!!");
    money = inbook.price*inbook.number;//�p��q�ʪ��B 
    return money;
}
