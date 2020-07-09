#include<iostream>
#include<string>

using namespace std;

class Queue{
	private:
		int front;
		int rear;
		int arr[5];
		
	public:
		Queue()
		{
		    int i;
			front = -1;
			rear = -1;
			for(i=0; i<5; i++)
			{
				arr[i]=0;
			}
		}
		
		bool isEmpty()
		{
			if(front == -1 && rear == -1)
			return true;
			
			else 
			return false; 
		}
		
		bool isFull()
		{
			if(rear == sizeof(arr[i])-1) 
			return true;
			
			else 
			return false;
		}
		 void Enqueue( int val)
		 {
		 	
	       if(isFull())
	       cout<<"Queue is full "<<endl;
	       
	       else if( isEmpty())
	       {
	       rear = 0;
	       front = 0;
	       arr[rear]= val;
	       
	       }
	       
	       else
	       {
	       	rear ++;
	       	arr[rear] = val;
	       	
		   }
		 }
		 
		 int Dequeue()
		 {
		 	int x;
		 	if(isEmpty())
		 	{
		 	  cout<<" Queue is empty"<<endl;
			  return 0;	
			}
			else if(front == rear)
			{
				x = arr[front];
				arr[front] = 0;
				front = -1;
				rear = -1;
				return x;
			}
			
			else
		
			x = arr[front];
			arr[front] = 0 ;
			front ++;
			return x;
			
		 }
		 int count()
		 {
		 	return(rear-front-1);
		 }
		 
		void display()
		{
			cout<<" All the values are displayed here"<<endl;
			for(int i=0; i<=4; i++)
			{
				cout<<arr[i]<<" "<<endl;
			}
			
		} 
		 
		  
		
};

int main()
{
	Queue q1;
	int option , value;
		do
   {
		cout<<"What operation do you want to perform"<<endl;
 		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. count()"<<endl;                         
		cout<<"6. display()"<<endl;
		cout<<"7. Clear screen"<<endl;
		cout<<"8. Enter 0 for exit "<<endl;
	
        cin>> option;
	    switch(option)
	 {
		case 0:
		{ break; }
	   case 1:
	   	{
	   		cout<<"  Enqueue operation \n Enter an item to Enqueue in the queue "<<endl;
	   		cin>> value;
	   	    q1.Enqueue(value);
	   	    break;
	   		
		}
		 case 2:
	   	{
	   		cout<<"  Dequeue operation \n  item that Dequeue in the queue : "<< q1.Dequeue()<<endl;
	   	   
	   	    break;
		}
		 case 3:
	   	{
	   		if(q1.isEmpty())
	   		cout<<"Queue is empty"<<endl;
	   		
	   		else
	   		cout<<" Queue is not empty"<<endl;
	   		break;
		}
		 case 4:
	   	{
	   		if(q1.isFull())
	   		cout<<"Queue is full"<<endl;
	   		
	   		else
	   		cout<<" Queue is not Full"<<endl;
	   		break;
		}
		 case 5:
	   	{
	   			cout<<"Count operation \n Count of item in Queue : "<< q1.count()<<endl;
	   			break;
		}
		 case 6:
	   	{
	   		cout<<" Display function called : "<<endl;
	   		q1.display();
	   		break;
		}	
		case 7:
		{
		    system("cls");
			break;	
		}	
		default:
			cout<<" Enter proper number"<<endl;
			break; 
     }
      
   }while(option!=0); 
 return 0;
}


