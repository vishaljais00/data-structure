#include<iostream>
using namespace std;

int main()
{

 int x,n,i,j;
 float s ,s1 = 0, s2=0 , p , fact;
 cout<<" Enter  the no of terms "<<"\n";
 cin>> n;
 
 cout<<" enter the value of X"<<"\n" ;
 cin>> x;
 
 for(i=0; i<=n; i++)
     {
 	    fact=1;
 	    p=1;
 	    
 	    for(j=1;j<=i;j++)
 	      {
 	      	fact=fact*j;
 	      	p=p*x;
 	      	
		  }
		  
		       if(i%2 == 0)
		       {
			   
		         s2 = s2 + (float)p/fact;
		       }
			   else
			   {
			   
			     s1 = s1 + (float)p/fact;
			   }
			   
     }
     
     s = s1 - s2;
     cout<<" Sum of series = "<< s <<"\n";
     
 return 0;		
}
