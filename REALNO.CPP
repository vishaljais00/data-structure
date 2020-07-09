#include<iostream.h>
#include<conio.h>

class TIME
{
  int Real;
  int Imaginary;

  public:

  void gettime(int r,int i)
  {
      Real = r;
      Imaginary = i;
  }
  void puttime()
  {
       cout<< Real<<"+i"<<Imaginary<<"\n";
  }
  void sum(TIME , TIME );
};
  void TIME :: sum(TIME t1, TIME t2)
  {
     Real = t1.Real + t2.Real;
     Imaginary = t1.Imaginary + t2.Imaginary;
  }
void main()
  {
     clrscr();
     TIME x,y,z;
     x.gettime(4,8);
     y.gettime(3,12);
     z.sum(x,y); // Z = X + Y
     cout<< "\n x = "; x.puttime();
     cout<< "\n y = "; y.puttime();
     cout<< "\n z = "; z.puttime();

     getch();
  }























