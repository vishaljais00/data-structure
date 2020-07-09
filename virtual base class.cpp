#include<iostream>
using namespace std;

class student
{
	protected:
		int rollno;
		
	public:
	void getno(int a)
	{
			
		rollno = a;	
		
	}
	 void putno()
	 {
	 	cout <<" roll no : " <<rollno<<"\n";
	 	 	
	 }
	
};

class test: public virtual student
{
	protected:
		float sem1,sem2;
		
		public:		
	
		void getmarks(float a,float b)
		{
			
		    sem1 = a;
			
			sem2 = b;
			
		}
		void putmarks()
		{
			cout<<" Marks obtained : "<<"\n"
			<<" sem1 = "<< sem1 <<"\n"
			<<" sem2 = "<< sem2 <<"\n";
	    }	
};

class sports: virtual public student
{
	protected:
		float score;
		
    public:
    	
       void getscore( float a)
       {
       	  score = a;
       	
	   }
	   void putscore()
	   {
	   	
	   	cout<<" Sport score : "<< score <<"\n";
	   	 	
	   }
	  	
};

class result : public test, public sports
{
	
	float total;
	
	public:
		 void display();
		 	
};

void result :: display()
{
	
	total = (sem1 + sem2 )/2+ score ;
	putno();
	putmarks();
	putscore();
	
	cout<<" total score = "<< total <<"\n";
		
}

int main()
{
	result student1;
	student1.getno(9237468);
	student1.getmarks(60.5,72.8);
	student1.getscore(7.0);
	student1.display();
	
	return 0;
}

 









