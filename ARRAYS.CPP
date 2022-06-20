#include "iostream.h"
#include "conio.h"

int A[6],s=5,n=0;

void ADD_END(int ele)
{
    if(n==s)
    {
	cout<<"list is full";
	return;
    }
    n=n+1;
    A[n]=ele;
}
int DEL_END()
{
	 if(n==0)
	 {
	      cout<<"list is empty";
	      return NULL;
	 }
	 int ele=A[n];
	 n=n-1;
	 return ele;
}
void LIST_ALL()
{
  cout<<endl<<"Elements of List are:";
  for(int i=1;i<=n;i++)
  {
    cout<<A[i]<<" ";
  }
}
void MENU()
{
   int opt;
   do
   {
      cout<<"\n 1.ADD";
      cout<<"\n 2.DELETE";
      cout<<"\n 3.LIST";
      cout<<"\n 4.EXIT";
      cout<<"Enter your options";
      cin>>opt;
      switch()
      {
	 case 1:
		cout<<"Enter element to array";
		cin>>ele;
		ADD_END(10);
		break;
	 case 2:
		int ele=DEL_END();
		cout<<endl<<ele"";
		break;
	 case 3:
		LIST_ALL();
		break;
	 case 4:
		return;
	 default:
		cout<<"Invalid options";
       }
  }while(1);
}

   int ele=DEL_END();
   cout<<endl<<ele<<"is deleted";
   LIST_ALL();

   ele=DEL_END();
   cout<<endl<<ele<<"is deleted";
   LIST_ALL();

   ele=DEL_END();
   cout<<endl<<ele<<"is deleted";
   LIST_ALL();

}
void main()
{
   int ele;
   clrscr();
   //-------
   ADD_END(10);
   ADD_END(20);
   ADD_END(30);
   ADD_END(40);
   ADD_END(50);
   ADD_END(60);
   LIST_ALL();

   ele=DEL_END();
   cout<<endl<<ele<<"is deleted";
   LIST_ALL();

   ele=DEL_END();
   cout<<endl<<ele<<"is deleted";
   LIST_ALL();

   ele=DEL_END();
   cout<<endl<<ele<<"is deleted";
   LIST_ALL();
   //-------
   getch();
}

