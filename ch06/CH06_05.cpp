#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int arr[] = { 10, 20, 30, 40, 50};//�ŧi�}�Carr�Ψ䤸��
    int i;

    for ( i = 0; i < 5; i++ )
        cout<<"arr["<<i<<"] = "<<arr[i]<<"  *(arr+"<< i<<")="<<*(arr+i)<<" *(&arr["<<i<<"])="<<*(&arr[i])<<endl;
    //�C�L�}�C�P���б`�ƪ����N�B��
    system("pause");
    return 0;
}
