
#include<conio.h>

using namespace std;
struct data
{
	int a;
	struct data *next;
};


void push(struct data **ref,int ele)
{
	struct data *nnode;
	nnode=(struct data*)malloc(sizeof(struct data));
	if(nnode==NULL)
	  {
		cout<<"Insufficient Storage !!\n";
		getch();
	  }
	else if(*ref==NULL)
	{
		nnode->a=ele;
		nnode->next=*ref;
		*ref=nnode;
		cout<<"Element successfully pushed.\n";

	}
	else
	  { 	nnode->a=ele;
		nnode->next=*ref;
		*ref=nnode;
		cout<<"Element successfully pushed.\n";
	  }
}


void pop(struct data **ref)
{
	struct data *temp=*ref;
	
	(*ref)->next=temp->next;
	
	cout<<"Node successfully popped.\n\n";
	free(temp);

	getch();
}

void display(struct data **ref)
{
	struct data *temp=*ref;

	if(temp==NULL)
	{
		cout<<"List is Empty";
	}
	else
	while(temp!=NULL)
	{
	   cout<<temp->a<<" ";
	   temp=temp->next;   
	}
}

int main()
{
  struct data *start=NULL;
  int n,test,choice;
  char ch;

  do
  {
  cout<<"1. Push an element \n";
  cout<<"2. Pop an element\n";
  cout<<"3. Display the elements\n";
  cout<<"0. Exit\n";
  cout<<"\n\nEnter your choice : ";
  cin>>choice;

  switch(choice)
  {
	case 1 :    cout<<"Enter the element to be pushed : ";
				cin>>n;
				push(&start,n);
				break;
	case 2 :	pop(&start); break;
	case 3 :	display(&start); break;
	case 0 :	exit(0);
	default :   cout<<"Invalid entry !!!!";


  }
  cout<<"Want to do more operations ? (Y/N) ";
  cin>>ch;
  }
  while(ch== 'y' || ch=='Y');
  getch();


    return 0;
}
