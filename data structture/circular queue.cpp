#include<iostream>
#include<string>

using namespace std;

class circularqueue{
	
	private:
		int front;
		int rear;
		int arr[5];
		int itemcount;
		
	public:
		
		circularqueue()
		{
			int i;
			itemcount = 0;
			front = -1;
			rear = -1;
			for(i=0; i<5; i++)
			{
				arr[i] = 0;
			}
		}
		
		bool IsEmpty()
		{
			if(front == -1 && rear == -1 )
			return true;
			
			else 
			return false;	
		}
		
		bool IsFull()
		{
			if( (rear+1)%5 == front)
			return true;
			 
			else
			return false;		 
		}
		
		void enqueue( int val)
		{
			if(IsFull())
			{ 
			    cout<<" queue is full "<<endl;
		        return;	
			}
			
			else if(IsEmpty())
			{
				front = 0;
				rear = 0;
				arr[rear] = val;	
			}
			
			else
			{
		       	rear = (rear+1)%5 ;
		     	arr[rear] = val;
	     	}
	     	itemcount ++;
		}
		
		int dequeue()
		{
			int x;
			if(IsEmpty())
			{
				cout<<" queue is empty"<<endl;
				return 0;
			}
			else if( front == rear )
		   {
				
		       	x = arr[front];
		    	rear = -1;
			    front = -1;
			    itemcount --;
		     	return x;
		    }
			
			else
			{
				x = arr[front];
				arr[front] = 0;
				front = (front+1)%5;
				itemcount --;
				return x;
			}
			
		}
		
		int count()
		{
			return(itemcount);
		}
		
		void display()
		{
			cout<<" All the values are displayed here"<<endl;
			for(int i=0; i<5; i++)
			{
				cout<<arr[i]<<" "<<endl;
			}
		}
		
};

int main()
{
	circularqueue q1;
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
	   	    q1.enqueue(value);
	   	    break;
	   		
		}
		 case 2:
	   	{
	   		cout<<"  Dequeue operation \n  item that Dequeue in the queue : "<< q1.dequeue()<<endl;
	   	   
	   	    break;
		}
		 case 3:
	   	{
	   		if(q1.IsEmpty())
	   		cout<<"Queue is empty"<<endl;
	   		
	   		else
	   		cout<<" Queue is not empty"<<endl;
	   		break;
		}
		 case 4:
	   	{
	   		if(q1.IsFull())
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
