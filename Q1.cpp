#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	struct Shoes
	{
		string brand,category;
		int code;
		double price;
	};
	
	Shoes Sh[3];
	int x;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"\tEmilyn Shoes Centre [Cyberjaya Branch]\t"<<endl;
	cout<<"------------------------------------------------------"<<endl;
	for(x=0;x<3;x++)
	{
		cout<<"++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"Enter Shoes Brand\t: ";
		cin>>Sh[x].brand;
		cout<<"Enter Shoes Category\t: ";
		cin>>Sh[x].category;
		cout<<"Enter Shoes Code\t: ";
		cin>>Sh[x].code;
		cout<<"Price of Shoes\t\t: RM ";
		cin>>Sh[x].price;
		
		cout<<"\n-------------------------------------"<<endl;
		cout<<"\tShoes DETAILS\t"<<endl;
		cout<<"-------------------------------------"<<endl;
		cout<<"Code\t\t: "<<Sh[x].code<<endl;
		cout<<"Category\t: "<<Sh[x].category<<endl;
		cout<<"Brand\t\t: "<<Sh[x].brand<<endl;
		cout<<"Price\t\t: RM "<<Sh[x].price<<endl<<endl;
	}
	system("Pause");
} 
