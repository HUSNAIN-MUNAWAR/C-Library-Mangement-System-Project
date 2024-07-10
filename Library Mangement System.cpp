#include<iostream>
#include<string>
using namespace std;
// OWN DATATYPE 
struct Hus
{
	int isbn[10];
	int price[10];
	string title[10];
	string author[10];
	string Edition[10];
	
};
// PROGRAM
int main()
{
	// All Variable declare here
	Hus a;
	char aname[15],book[15];
	int opt,opt1,isbn;
	
	//
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"                  Welcome To Library Mangement System  ";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"           Press 1 For Enter Book Details ";
	cout<<"\n";
	cout<<"           Press 2 For Search Book Details ";
	cin>>opt;
	if(opt==1) 
	{
	for (int i=0; i<10; i++)
	{
		cout<<"Enter Book Title ";
		cin>>a.title[i];
		cout<<"Enter Book Author Name ";
		cin>>a.author[i];
		cout<<"Enter the Book Edition Name ";
		cin>>a.Edition[i];
		cout<<"Enter Book ISBN Number ";
		cin>>a.isbn[i];
		cout<<"Enter Book Price ";
		cin>>a.price[i];
	}
   }
   if(opt==2)  // TO SERACH BOOK BY ITS DETAILS
   {
   	cout<<" Press 1 To Search By Book Name ";
   	cout<<" Press 2 To Serach By Book ISBN Number ";
   	cout<<" Press 3 To Search By Book Author Name ";
   	cin>>opt1;
   	// Search By Book Name
   	if(opt1==1)
   	{
   	 cout<<"Enter Book Name ";
   	 cin>>book;
   	 for (int i=0; i<10; i++)
   	 {
		if(book==a.title[i])
		{
			cout<<" Book Name "<<a.title[i]<<"\n";
			cout<<" Book Author Name "<<a.author[i]<<"\n";
			cout<<" Book Edition "<<a.Edition<<"\n";
			cout<<" Book ISBN Number "<<a.isbn<<"\n";
			cout<<" Book Price "<<a.price<<"\n";
		 } 
   	 	
		}
   		
	   }
	   // Search By ISBN Number 
	   if(opt1==2)
	   {
	   	cout<<"Enter Book ISBN Number ";
   	    cin>>isbn;
   	     for (int i=0; i<10; i++)
   	     {
		if(aname==a.author[i])
		{
			cout<<" Book Name "<<a.title[i]<<"\n";
			cout<<" Book Author Name "<<a.author[i]<<"\n";
			cout<<" Book Edition "<<a.Edition<<"\n";
			cout<<" Book ISBN Number "<<a.isbn<<"\n";
			cout<<" Book Price "<<a.price<<"\n";
		 } 
   	 	
		}
	   	
	   }
	   // Search By Author nmae 
	   if(opt1==3)
	   {
	   	 cout<<"Enter Book Author Name ";
   	     cin>>aname;
   	     for (int i=0; i<10; i++)
   	     {
		if(aname==a.author[i])
		{
			cout<<" Book Name "<<a.title[i]<<"\n";
			cout<<" Book Author Name "<<a.author[i]<<"\n";
			cout<<" Book Edition "<<a.Edition<<"\n";
			cout<<" Book ISBN Number "<<a.isbn<<"\n";
			cout<<" Book Price "<<a.price<<"\n";
		 } 
   	 	
		}
	   	
	   }  	 
   }
	
}
