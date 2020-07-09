#include<iostream>
#include<string>

using namespace std;

class stack{
	
	private: 
	    int top;
	    int arr[5];
	    
    public:
    	int i;
	    stack()
	    {
	    	top = -1;
	    	for(i=0; i<5; i++)
	    	{
	    		arr[i] = 0;
			}  	
		}
		
		bool isEmpty()
		{
		  if( top == -1)
		    return true;
		  else
		    return false;	 		
		}
		bool isFull()
		{
			if(top == 4)
			   return true;
			else
			   return false;   
		}
	     
	    void push( int val)
		{
			 if(isFull())
			 {
			 	cout<<" stack overflow "<< endl;
			 	
			 }
			 else
			 {
			 	top++;
			 	arr[top] = val;
			 }
	    } 
	    
	    int pop()
	    {
	    	if(isEmpty())
	    	{
	    	   cout<<" stack underflow "<< endl;
			   return 0;	
			}
			else
			{
				int popValue = arr[top];
				arr[top] = 0;
				top--;
				return popValue;
			}
		}
		
		int count()
		{
			return(top+1);
		}
		
		int peek( int pos)
		{
		 	if(isEmpty())
		 	{
		 		cout<<" stack underflow "<< endl;
		 		return 0;
		    }
		    else
		    {
		    	return arr[pos];
			}
		}
		 
		void display()
		{
			cout<<" All the values are displayed here"<<endl;
			for(int i=4; i>=0; i--)
			{
				cout<<arr[i]<<endl;
			}
			
		} 
	
	
};

int main()
{
	stack s1;
	int option, position, value;
	
	do
   {
		cout<<"What operation do you want to perform"<<endl;
 		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;                         
		cout<<"7. display()"<<endl;
		cout<<"8. Clear screen"<<endl;
		cout<<"9. Enter 0 for exit "<<endl;
	
    cin>> option;
	switch(option)
	{
		case 0:
		{ break; }
	   case 1:
	   {
	   	 cout<<" Enter an iten to push in the stack"<<endl;
	   	 cin>> value;
	   	 s1.push(value);
	   	 break;
	   }	
	   case 2:
	   	{
	   		cout<<" pop function called - pop value: "<<s1.pop()<<endl;
	   		break;
	    }
	    case 3:
	    {
	    	if(s1.isEmpty())
	      	   cout<<" Stack is Empty"<<endl;
	      	else
	      	   cout<<" Stack is not empty"<<endl;
	      	break;
		}
		case 4:
		{
		    if(s1.isFull())	
		    	   cout<<" Stack is full"<<endl;
	      	else
	      	   cout<<" Stack is not full"<<endl;
	      	break;
		}
		case 5:
		{
		    cout<<" Enter the postion of the item you want to peek"<<endl;
			cin>> position;
			cout<<" Peek function is called - value at postion  "<<position<<" is "<<s1.peek(position)<<endl;
			break;	
		}
		case 6:
		{
			cout<<" Count function is called - Number of item in stack are: "<<s1.count()<<endl;
			break; 
		}
		case 7:
		{
			cout<<" Display function called - "<<endl;
			s1.display();
		    break;	
		}
		case 8:
		{
		    system("cls");
			break;	
		}	
		default:
			cout<<" Enter proper number"<<endl;
	}	
		
    }while(option!=0);
		
	return 0;
}

