#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
class Car
{
	protected:
		string model;
		string color;
		string gearType;
		int noOfGears;
		int noOfSeats;
		int noOfDoors;
		string fuelType;
		int milesDriven;
		string engineType;
		public:
			Car(string a, string b, string c, int d, int e, int g, string h, int i, string j){
				model = a;
				color = b;
				gearType = c;
				noOfGears = d;
				noOfSeats = e;
				noOfDoors = g;
				fuelType = h;
				milesDriven = i;
				engineType = j;
			}
			void set_model(string x){
				model = x;
			}
			string get_model(){
				return model;
			}
			void set_color(string x){
				color = x;
			}
			string get_color(){
				return color;
			}
			void set_gearType(string x){
				gearType = x;
			}
			string get_gearType(){
				return gearType;
			}
			void set_noOfGears(int x){
				noOfGears = x;
			}
			int get_noOfGears(){
				return noOfGears;
			}
			void set_fuelType(string x){
				fuelType = x;
			}
			string get_fuelType(){
				return fuelType;
			}
			void set_engineType(string x){
				engineType = x;
			}
			string get_engineType(){
				return engineType;
			}
			void set_noOfSeats(int x){
				noOfSeats = x;
			}
			int get_noOfSeats(){
				return noOfSeats;
			}
			void set_milesDriven(int x){
				milesDriven = x;
			}
			int get_milesDriven(){
				return milesDriven;
			}
			void set_noOfDoors(int x){
				noOfDoors = x;
			}
			int get_noOfDoors(){
				return noOfDoors;
			}
			virtual void Car_Details() = 0;
};
class Sedan : public Car
{
	protected:
		string size;
		string bodyType;
		string trunkType;
		public:
			Sedan(string a, string b, string c, int d, int e, int g, string h, int i, string j, string k, string l, string m) : Car(a,b,c,d,e,g,h,i,j){
				size = k;
				bodyType = l;
				trunkType = m;
			}
			void set_size(string x){
				size = x;
			}
			string get_size(){
				return size;
			}
			void set_bodyType(string x){
				bodyType = x;
			}
			string get_bodyType(){
				return bodyType;
			}
			void set_trunkType(string x){
				trunkType = x;
			}
			string get_trunkType(){
				return trunkType;
			}
			void Car_Details()
			{
				cout<<"Sedan Car Details:"<<endl<<"Model: "<<model<<endl<<"Color: "<<color<<endl<<"Gear type"<<gearType<<endl<<"Number of Gears: "<<noOfGears<<endl<<"Number of seats: "<<noOfSeats<<endl<<endl<<"Number of doors: "<<noOfDoors<<endl<<"Fuel Type"<<fuelType<<endl<<"Miles Driven: "<<milesDriven<<endl<<"Engine"<<engineType<<endl<<"Size of Car: "<<size<<endl<<"Body type: "<<bodyType<<endl<<"trunk type: "<<trunkType;
			}
};
class Convertible : public Car
{
	protected:
		string roofMechanic;
		string roofType;
		string bodyType;
		public:
			Convertible(string a, string b, string c, int d, int e, int g, string h, int i, string j, string n, string o, string p) : Car(a,b,c,d,e,g,h,i,j){
				roofMechanic = n;
				roofType = o;
				bodyType = p;
			}
			void set_roofMechanic(string x){
				roofMechanic = x;
			}
			string get_roofMechanic(){
				return roofMechanic;
			}
			void set_bodyType(string x){
				bodyType = x;
			}
			string get_bodyType(){
				return bodyType;
			}
			void set_roofType(string x){
				roofType = x;
			}
			string get_roofType(){
				return roofType;
			}
			void Car_Details()
			{
				cout<<"Convertible Car Details:"<<endl<<"Model: "<<model<<endl<<"Color: "<<color<<endl<<"Gear type"<<gearType<<endl<<"Number of Gears: "<<noOfGears<<endl<<"Number of seats: "<<noOfSeats<<endl<<endl<<"Number of doors: "<<noOfDoors<<endl<<"Fuel Type"<<fuelType<<endl<<"Miles Driven: "<<milesDriven<<endl<<"Engine"<<engineType<<endl<<"Roof Mechanics: "<<roofMechanic<<endl<<"Roof types: "<<roofType<<endl<<"Body type: "<<bodyType<<endl;
			}
};
class Coupe : public Car
{
	protected:
		string roofSystem;
		public:
			Coupe(string a, string b, string c, int d, int e, int g, string h, int i, string j, string q) : Car(a,b,c,d,e,g,h,i,j){
				roofSystem = q;
			}
			void set_roofSystem(string x){
				roofSystem = x;
			}
			string get_roofSystem(){
				return roofSystem;
			}
			void Car_Details()
			{
				cout<<"Coupe Car Details:"<<endl<<"Model: "<<model<<endl<<"Color: "<<color<<endl<<"Gear type"<<gearType<<endl<<"Number of Gears: "<<noOfGears<<endl<<"Number of seats: "<<noOfSeats<<endl<<"Number of doors: "<<noOfDoors<<endl<<"Fuel Type"<<fuelType<<endl<<"Miles Driven: "<<milesDriven<<endl<<"Engine"<<engineType<<endl<<"Roof system: "<<roofSystem<<endl;
			}
};
class Minivans : public Car
{
	protected:
		string doorOpen;
		public:
			Minivans(string a, string b, string c, int d, int e, int g, string h, int i, string j, string r) : Car(a,b,c,d,e,g,h,i,j){
				doorOpen = r;
			}
			void set_doorOpen(string x){
				doorOpen = x;
			}
			string get_doorOpen(){
				return doorOpen;
			}
			void Car_Details()
			{
				cout<<"Minivans Car Details:"<<endl<<"Model: "<<model<<endl<<"Color: "<<color<<endl<<"Gear type"<<gearType<<endl<<"Number of Gears: "<<noOfGears<<endl<<"Number of seats: "<<noOfSeats<<endl<<"Number of doors: "<<noOfDoors<<endl<<"Fuel Type"<<fuelType<<endl<<"Miles Driven: "<<milesDriven<<endl<<"Engine"<<engineType<<endl<<"Door open"<<doorOpen<<endl;
			}
};
class Company
{
	static double Tax;
	static double Revenue;
	public:
		double getTax(){
			return Tax;
		}
		double getRevenue(){
			return Revenue;
		}
		void TaxAmountRenew(double tax){
			Tax += tax;
		}
		void RevenueAmountRenew(double revenue){
			Revenue += revenue;
		}
		friend class Car;
		friend class Admin;
};
class Employee
{
	protected:
		string name;
		int id;
		int age;
		long int contact;
		int salary;
		public:
			Employee(){
				name="xxxx";
				id=0000;
			}
			Employee(string name, int id, int age, int contact)
			{
				this->name=name;
				this->id=id;
				this->age=age;
				this->contact=contact;
			}
			void DisplayDetails(){
				cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl<<"Age: "<<age<<endl<<"Contact: "<<contact;
			}
};	
class Driver: public Employee
{
	static int no_drivers;
	public:
		float rating;
		Driver(string name, int id, int age, int contact) : Employee(name,id,age,contact)
		{
			no_drivers++;
			salary=10000;
		}
		void view_rating(){
			cout<<"your current rating is: "<<endl<<rating;
		}
		void view_no_drivers(){
			cout<<"total number of drivers are: "<<endl<<no_drivers;
		}
};
int Driver::no_drivers=0;

class Admin: public Employee
{
	public:
		Admin(string name, int id, int age, int contact) : Employee(name,id,age,contact)
		{
			salary=20000;
		}
		void print_all_member_details(){
			cout<<"\tAll Member Details\n";
			cout<<"\t==================\n";
			ifstream file;
			file.open("membership_details.txt");
			if(!file.is_open()){
				cout<<"Membership File Doesnot Exist\n";
			}
			int i=1;
			while(!file.eof()){	
				string name,address,phone_no,cnic;
				getline(file,name,',');
				getline(file,address,',');
				getline(file,phone_no,',');
				getline(file,cnic,'\n');
				if(name!=""&& address!="" && phone_no!=""&& cnic!=""){
					cout<<"\tCustomer"<<i<<" Details\n";
					cout<<"\t==========="<<"========\n";
					cout<<"Name    :"<<name<<"s"<<endl;
					cout<<"Address :"<<address<<endl;
					cout<<"Phone No:"<<phone_no<<endl;
					cout<<"CNIC    :"<<cnic<<endl;
					i++;
					}
			}
			file.close();
		}
		void delete_customer_details(){
			string  cnic_input;
			cout<<"Enter the CNIC of the customer which is to be deleted\n";
			cin>>cnic_input;
			//reading acc
			ifstream file_1;
			file_1.open("membership_details.txt");
			if(!file_1.is_open()){
				cout<<"Membership File Doesnot Exist\n";
			}
			int i=0;
			struct Array{
				string name,address,phone_no,cnic;
			};
			Array array[50];
			while(!file_1.eof()){
	
				string name,address,phone_no,cnic;
				getline(file_1,name,',');
				getline(file_1,address,',');
				getline(file_1,phone_no,',');
				getline(file_1,cnic,'\n');
				if(name!=""&& address!="" && phone_no!=""&& cnic!=""){
					array[i].name=name;
					array[i].address=address;
					array[i].phone_no=phone_no;
					array[i].cnic=cnic;					
					}
					i++;
			}
			i--;
			file_1.close();
			//read acc
			//deleting accounts
			ofstream file_2;
			file_2.open("membership_details.txt");
			for(int j=0;j<=i;j++){
				if(array[j].cnic!=cnic_input){
					file_2<<array[j].name<<","<<array[j].address<<","<<array[j].phone_no<<","<<array[j].cnic<<endl;
				}
			}
			cout<<"Account Deleted Successfully\n";
			file_2.close();
		}
};
class Client{
	protected:
		string name;
		long int cnic;
		string address;
		long int phone_no;
		string car_type;
		static int points;
		static double bill;
		static double tax;
		static double revenue;
		float pricePerDay;
		public:
			virtual void Book_Car()=0;
			void setName(string name){
    			this->name=name;
			}
			void setCNIC(long int cnic){
    			this->cnic=cnic;
			}
			void setAddress(string address){
    			this->address=address;
			}
			void setPhone(long int phone_no){
   				this->phone_no=phone_no;
			}
			string getName(){
				return name;
			}
			string getAddress(){
				return address;
			}
			long int getCNIC(){
				return cnic;
			}
			long int getPhoneNo(){
				return phone_no;
			}
			void setPoints(double x){
				points += x;
			}
			double getPoints(){
				return points;
			}
			void setTax(double x){
				tax += x;
			}
			double getTax(){	
				return tax;
			}
			void setRevenue(double x){
				revenue += x;
			}
			double getRevenue(){
				return revenue;
			}
			void set_pricePerDay(float x){
				pricePerDay = x;
			}
			float get_pricePerDay(){
				return pricePerDay;
			}
			void Bill_Generation(){
			int days,choice;
			double Bill,Tax,Revenue;
			cout<<endl<<"~~Generating Bill~~"<<endl<<"Enter the number of Days for which you want to rent the car: ";
			cin>>days;
			cout<<"Do you want the Driver along with the car? [1->Yes , 2->No] charges: 500/day";
			cin>>choice;
			Bill = ((days*pricePerDay) + (days*500));
			Tax = Bill*0.1;
			Revenue = Bill*0.9;
			cout<<"## GENERATED BILL : "<<Bill<<"##"<<endl;
		}
};
int Client::points=0;
double Client::bill=0;
double Client::tax=0;
double Client::revenue=0;

class Member: public Client{
	int Member_ID;
	string password;
	public:
		void MemberDetails()
		{
			cout<<"Enter your Member ID: "<<endl;
			cin>>Member_ID;
			cout<<"Enter your password: "<<endl;
			cin>>password;
			cout<<endl;
    	}
		void Book_Car()
		{
			cout<<"BOOK CAR"<<endl;
			cout<<"Select the type of car(Name) you wanna book: "<<endl<<"1.Coupe"<<endl<<"2.Minivan"<<endl<<"3.Convertible"<<endl<<"4.Sedan"<<endl<<endl;
			cin>>car_type;
			if(car_type=="Coupe"){
				cout<<"Coupe has been booked successfully"<<endl;
				points+=100;
		    }	
			else if(car_type=="Minivan"){
				cout<<"Minivan has been booked successfully"<<endl;
				points+=200;
			}
			else if(car_type=="Convertible"){
				cout<<"Convertible Car has been booked successfully"<<endl;
				points+=300;
			}
			else if(car_type=="Sedan"){
				cout<<"Sedan has been booked successfully"<<endl;
				points+=400;
			}
			else
				cout<<"Invalid Entry!"<<endl;
		}
		void Membership_Voucher(){
			cout<<"MEMBERSHIP VOUCHER"<<endl<<"Member ID: "<<Member_ID<<endl<<"Name: "<<getName()<<endl<<"Address: "<<getAddress()<<endl<<"Phone No: "<<getPhoneNo()<<endl<<"CNIC: "<<getCNIC()<<endl<<"Points: "<<points<<endl<<endl;
		}
		void Membership_Renewal(){
			points=0;
		}
};
class Non_Member: public Client
{
	public:
		int Member_ID;
		string password;
		void Book_Car()
		{
			cout<<"BOOK CAR"<<endl;
			cout<<"Select the type of car(Name) you wanna book: "<<endl<<"1. Coupe"<<endl<<"2. Minivan"<<endl<<"3. Convertible"<<endl<<"4. Sedan"<<endl<<endl;
			cin>>car_type;
			if(car_type=="Coupe")
			{
				cout<<"Coupe has been booked successfully"<<endl<<endl;
				points+=100;
		    }
			else if(car_type=="Minivan")
			{
				cout<<"Minivan has been booked successfully"<<endl<<endl;
				points+=200;
			}
			else if(car_type=="Convertible")
			{
				cout<<"Converible car has been booked successfully"<<endl<<endl;
				points+=300;	
			}
			else if(car_type=="Sedan")
			{
				cout<<"Sedan has been booked successfully"<<endl<<endl;
				points+=400;
			}
			else
			cout<<"Invalid Entry!"<<endl;
		}
		void get_Membership()
		{
			cout<<"Enter your Name: "<<endl;
			cin>>name;
			cout<<"Enter your Address: "<<endl;
			cin>>address;
			cout<<"Enter your Phone No: "<<endl;
			cin>>phone_no;
			cout<<"Enter your CNIC No: "<<endl;
			cin>>cnic;		
			Member_ID=1215;
			password="ghqw45661";
			cout<<"You have successfully get Membership"<<endl;	
			cout<<"Your Member ID and Password are generated."<<endl<<"Member ID: "<<Member_ID<<endl<<"Password: "<<password<<endl<<endl;
			//file writing
			ofstream file;
			file.open("membership_details.txt",std::ofstream::app);
			file<<name<<","<<address<<","<<phone_no<<","<<cnic<<endl;
			file.close();
			//file writing
		}
		void Membership_Voucher()
		{
			cout<<"MEMBERSHIP VOUCHER"<<endl<<"Member ID: "<<Member_ID<<endl<<"Name: "<<name<<endl<<"Address: "<<address<<endl<<"Phone No: "<<phone_no<<endl<<"CNIC: "<<cnic<<endl<<"Points: "<<points<<endl<<endl;
		}
};
int main()
{
	log:
	cout<<endl<<endl<<"~~~  WELCOME TO XYZ CAR RENTAL COMPANY  ~~~"<<endl;
	int id, choice, choice1, choice2;
	cout<<"Enter your ID to Log-in"<<endl;
	cin>>id;
	system ("CLS");
	if(id==0001){
		Admin admin("XYZ",34,0001,12372828);
		cout<<"\tWelcome Admin\n";
		cout<<"\t=============\n";
		int choice;
		cout<<"Enter your choice\n";
		cout<<"Press 1 To View All Customers\n";
		cout<<"Press 2 To Delete a Customer\n";
		cin>>choice;
		if(choice==1){
			admin.print_all_member_details();
		}
		else if(choice==2){
			admin.delete_customer_details();
		}
		else{
			cout<<"Invalid choice\n";
		}
		cout<<endl<<"enter any key to log out"<<endl;
		getch();
		goto log;
	}
	else if(id==0002){
		Driver d("ABC",28,0002,5272828);
		d.view_rating();
		cout<<endl<<"enter any key to log out"<<endl;
		getch();
		goto log;
	}
	else if(id==1111){
		again:
		system ("CLS");
		cout<<endl<<"Enter the serial number of your choice to continue:"<<endl<<"1. View Car Details."<<endl<<"2. Book a Car"<<endl<<"3. Log out"<<endl;
		cin>>choice1;
		if(choice1==1){
			system ("CLS");
			cout<<"Select the serial number of the type of car you wanna book: "<<endl<<"1. Sedan"<<endl<<"2. Convertible"<<endl<<"3. Coupe"<<endl<<"4. Minivan"<<endl;
			cin>>choice2;
			system ("CLS");
			if(choice2==1){
				Sedan sedan("SUV","Black","Manual",6,4,4,"Gasoline",1200,"hybrid","Compact","Station vagon","Boot Trunk");
				sedan.Car_Details();
				getch();
				system ("CLS");
			}
			else if(choice2==2){
				Convertible convertible("SUV","White","Automatic",6,4,4,"Gasoline",1200,"hybrid","Powered fabric","Hardtop","Sports car");
				convertible.Car_Details();
				getch();
				system ("CLS");
			}
			else if(choice2==3){
				Coupe coupe("SUV","Black","Automatic",6,4,4,"Gasoline",1200,"hybrid","auto");
				coupe.Car_Details();
				getch();
				system ("CLS");
			}
			else if(choice2==4){
				Minivans minivans("SUV","Black","Automatic",6,4,4,"Gasoline",1200,"hybrid","sliding");
				minivans.Car_Details();
				getch();
				system ("CLS");
			}
			goto again;
		}
		else if(choice1==2){
			system ("CLS");
			string type;
			char option;
			Client *c;
			cout<<"Dear Client! Are you the member of of company?(Yes/No) "<<endl;
			cin>>type;
			//IF CLIENT IS MEMBER THIS IMPLEMENTATION
			if(type=="Yes"){
				Member m;
				c=&m;
				m.setName("Customer 1");
				m.setCNIC(42000123);
				m.setAddress("221B Bakers Street");
				m.setPhone(43126373);
				m.MemberDetails();
				c->Book_Car();
				m.Membership_Voucher();
				m.Bill_Generation();
			}
			//IF CLIENT IS NON MEMBER THIS IMPLEMENTATION
			else if(type=="No"){
				Non_Member n;
				c=&n;
				cout<<"To Book a car you have two options:"<<endl<<"1.Get Membership (Press G)"<<endl<<"2.Direct Booking (Press D)"<<endl;
				cin>>option;
				if(option=='G'){
					n.get_Membership();
					c->Book_Car();
					n.Membership_Voucher();
					n.Bill_Generation();
				}
				else if(option=='D'){
					c->Book_Car();
					c->Bill_Generation();
				}
			}
		}
		else if(choice1==3){
			system ("CLS");
			goto log;
		}
	}
}
