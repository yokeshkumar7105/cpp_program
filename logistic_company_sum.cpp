#include<iostream>
using namespace std;
class Transport_vehicle
{
	public:
		int reg_no;
		int age;
		int max_capacity;
	void getdata1()
	{
		cout<<"\nEnter register number : ";
		cin>>reg_no;
		cout<<"\nEnter Age : ";
		cin>>age;
		cout<<"\nEnter maximum capacity : ";
		cin>>max_capacity;
	}
	void displaydata1()
	{
		cout<<"\nRegister Number : "<<reg_no<<endl;
		cout<<"\nAge : "<<age<<endl;
		cout<<"\nMaximum capacity : "<<max_capacity<<endl;
	}
};
class truck :  public Transport_vehicle
{
	public:
		string truck_type;
		string truck_colour;
		void getdatatruck()
		{
			getdata1();
			cout<<"\nEnter truck type : ";
			cin>>truck_type;
			cout<<"\nEnter truck colour : ";
			cin>>truck_colour;
		}
		void display_data_truck()
		{
			displaydata1();
			cout<<"\nTruck type : "<<truck_type<<endl;
			cout<<"\nTruck colour : "<<truck_colour<<endl;
		}
};
class plane :  public Transport_vehicle
{
	public:
		string plane_type;
		string plane_name;
		string plane_colour;
		void getdataplane()
		{
			getdata1();
			cout<<"\nEnter plane type : ";
			cin>>plane_type;
			cout<<"\nEnter plane name : ";
			cin>>plane_name;
			cout<<"\nEnter plane colour : ";
			cin>>plane_colour;
		}
		void display_data_plane()
		{
			displaydata1();
			cout<<"\nPlane type : "<<plane_type;
			cout<<"\nPlane name : "<<plane_name;
			cout<<"\nPlane colour : "<<plane_colour;
		}
};
class loader:public truck,plane
{
	public:
		void loader1()
		{
			cout<<"\nTRUCK DETAILS";
			truck::getdatatruck();
			cout<<"\nPLANE DETAILS";
			plane::getdataplane();
		}
		void loader_display()
		{
			cout<<"\nEntered Details";
			cout<<"\n---TRUCK---";
			truck::display_data_truck();
			cout<<"\n---PLANE---";
			plane::display_data_plane();
		}
};
int main()
{
	loader l;
	l.loader1();
	l.loader_display();
	return 0;
}
