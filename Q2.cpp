#include <iostream>
#include <cstring>
using namespace std;

class Donation
{
	private:
		string volunteer,community,group;
		int collections[3];
		char remark[10];

	public:
		void setVolunteer()
		{
			
			cout<<"Volunteer Name\t\t: ";
			getline(cin,volunteer);
			cout<<"Community Area\t\t: ";
			getline(cin,community);
			cout<<"Group Name\t\t: ";
			getline(cin,group);
			
		};
		
		void collection_record()
		{
			int x;
			for(x=0;x<3;x++)
			{
				cout<<"\tRound "<<x+1<<" Collection\t: RM ";
				cin>>collections[x];
			}
		};
		
		void totalCollection()
		{
			float total;
			total=collections[0]+collections[1]+collections[2];
			display_remark(total);
		};
		
		void display_remark(float total)
		{
			if(total>=10000)
			strcpy(remark,"Awesome");
			else if(total>=6000 && total<10000)
			strcpy(remark,"Excellent");
			else if(total>=4000 && total<6000)
			strcpy(remark,"Great Job");
			else
			strcpy(remark,"Thanks For Your Effort");
		};
		
		void display()
		{
			int x=0;
			cout<<"\n---------------------------------------"<<endl;
			cout<<"\tDONATION RECORD\t"<<endl;
			cout<<"---------------------------------------"<<endl;
			cout<<"Volunteer\t\t: "<<volunteer<<endl;
			cout<<"Community\t\t: "<<community<<endl;
			cout<<"Group\t\t\t: "<<group<<endl;
			while(x<3)
			{
				cout<<"\t\tRound "<<x+1<<"\t: RM "<<collections[x]<<endl;
				x++;
			}
			cout<<"\tRemark\t: "<<remark<<endl<<endl;
		}
};

int main()
{
	cout<<"---------------------------------------------"<<endl;
	cout<<"\tDONATION DRIVE TRACKING\t"<<endl;
	cout<<"---------------------------------------------"<<endl;
	Donation Do[3];
	int x;
	
	for(x=0;x<3;x++)
	{
		Do[x].setVolunteer();
		
		Do[x].collection_record();
		cin.ignore();
		Do[x].totalCollection();
		Do[x].display();
	}
	system("Pause");
}
