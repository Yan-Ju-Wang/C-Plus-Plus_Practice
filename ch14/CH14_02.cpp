#include<iostream>
#include<cstdlib>
using namespace std;
	
// �ŧi���Ostudent
class student
 {
  private:
     int age;
   protected:
     int lang;
   public:
     int math;
    student()  // �غc�l
     {
           age=0;
           lang=0;
           math=0;
     }
   void set_age(int a1)
      {
         age=a1;
       }
   void show_age()
      {
      cout << "age=" << age << endl;	
      }
  };

// �Hprotected���O�����Ostudent�~�Ӧ����s�����Os1
  class s1:protected student
  {
   public:
    void set_lang(int v3)
      {
        lang=v3;   // �i�����]�w���O��protected���������lang
      }
    void set_math(int v4)
   	{
    	math=v4;   // �i�����]�w���O��public���������math
    }
    void setage(int v5)
    {
        // �]���L�k�����s��private���O���������age
        // �����ǥѩI�sset_age�����ӳ]�w�������age
       set_age(v5); 
 	}
    void show_data()
    {
       // �]���L�k�����s��private���O���������age�A����
       // �ǥѩI�sshow_age()�����禡�Ө��oage�Ȩæb�ù��W���
       show_age();
      // �N�������lang��math��ܦb�ù��W
         cout << "lang=" << lang << endl;
         cout << "math=" << math << endl;
	}
    };	
   int main()
   {
     // �ŧi����obj1
      s1 obj1;
    // �i�ǥѩI�ssetage�����禡�өI�s���Ostudent��public���O�������禡set_age()
      obj1.setage(10); 
      // �i�����s�����Ostudent����protected���O���������lang
      obj1.set_lang(90);
      // �i�����s�����Ostudent����public���O���������math
      obj1.set_math(88);
      // �i�����s�����Ostudent����protected���O���������lang
      // �i�����s�����Ostudent����public���O���������math
      obj1.show_data();
      
      system("pause");
      return 0;
	}