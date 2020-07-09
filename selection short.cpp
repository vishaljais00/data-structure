#include<iostream>
using namespace std;

int main()
{

        int i,j, key ,loc,size,ar[20], temp;

        cout<<"Enter the size of element"<<"\n";
        cin>> size;
        cout<<"\n"<<"Enter the element"<<"\n";
        
        
            for(i=0; i<=size-1; i++)
            
                {
                   cin>>ar[i];
	
                }

            for(i=0;i< size-1; i++)
                {
	                key= ar[i];
	                loc = i;

	                        for(j=i+1;j<size; j++)
	                           {
	 	                            if(ar[j]<key)
	 	                           {
									 
	 	                            key = ar[j];
	 	                            loc = j;
	 	                           }
	 	                       }
	 	        temp = ar[i];
				ar[i] = ar[loc];
				ar[loc] = temp;       
	 	                       
	 	                       
		     	}
		     	

  cout<<" element after sorting "<<"\n";
for(j=0; j<=size-1; j++)
{
   cout<<ar[j]<<"\t";
	
}

return 0;
}

