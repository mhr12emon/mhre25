#include<iostream>
#include<conio.h>
using namespace std;
class food_order
{
protected:
string food1, food2, food3, food4;
public:
virtual void set_name()
{
food1 = "";
food2 = "";
food3 = "";
food4 = "";
}
string get_food1()
{
return food1;
}
string get_food2()
{
return food2;
}
string get_food3()
{
return food3;
}
string get_food4()
{
return food4;
}
};
class Pizza : public food_order
{
public:
void set_name()
{
food1 = "Chicken Fazita";
food2 = "Chicken Bar BQ";
food3 = "Cheese Pizza";
food4 = "Veggie Pizza";
}
};
class Burger : public food_order
{
public:
void set_name()
{
food1 = "Zinger Burger";
food2 = "Chicken Burger";
food3 = "Beef Burger";
}
};
class Sandwitch : public food_order
{
public:
void set_name()
{
food1 = "Club Sandwitch";
food2 = "Chicken Crispy Sandwitch";
food3 = "Extreme Veg Sandwitch";
}
};
class Rolls : public food_order
{
public:
void set_name()
{
food1 = "Chicken Chatni Roll";
food2 = "Chicken Mayo Roll";
food3 = "Veg Roll With Fries";
}
};
class Biryani : public food_order
{
public:
void set_name()
{
food1 = "Chicken Biryani";
food2 = "Prawn Biryani";
food3 = "Beef Biryani";
}
};
int main()
{
	char name[40], location[50], contact[20];
    Pizza obj_Pizza;
    Burger obj_Burger;
    Sandwitch obj_Sandwitch;
    Rolls obj_Rolls;
    Biryani obj_Biryani;
    obj_Pizza.set_name();
    obj_Burger.set_name();
    obj_Sandwitch.set_name();
    obj_Rolls.set_name();
    obj_Biryani.set_name();
	//char 
    char gotostart;
	int choice=0,pchoice,pchoice1, quantity;// time=4
	system("CLS");
	cout<<"------IIUC Food Order Service------\n\n\n";
	cout<<"Please Enter Your Name: ";
	cin.getline(name, 30);
    cout<<"\nEnter your address: ";
    cin.getline(location, 40);
    cout<<"\nEnter your contact no: ";
    cin.getline(contact, 15);
    beginning:
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Pizzas\n";
	cout<<"2) Burgers\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Rolls\n";
	cout<<"5) Biryani\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;
    
	if(choice==1)
	 {
        back_option1:
		cout<<"\n1) "<<obj_Pizza.get_food1()<<"\n";
		cout<<"2) "<<obj_Pizza.get_food2()<<"\n";
		cout<<"3) "<<obj_Pizza.get_food3()<<"\n";
		cout<<"4) "<<obj_Pizza.get_food4()<<"\n";
		cout<<"\nPlease Enter which one would you like to have?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=4)
		{
			cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 250*quantity;
			break;

			case 2: choice = 500*quantity;
			break;

			case 3: choice = 900*quantity;
			break;


			      }
			system("CLS");
			switch (pchoice)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Pizza.get_food1();
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From IIUC Food Order Ser\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<obj_Pizza.get_food2();
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Pizza.get_food3();
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Pizza.get_food4();
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}



		}
        else{
        cout<<"\n\nPlease select the right option\n\n\n"<<"Would you like to go back? Y / N:\n";
        cin>>gotostart;
        if(gotostart == 'Y' || gotostart == 'y')
        goto back_option1;
        }

	 }


	 else if(choice==2)
	 {
     back_option2:
		cout<<"\n1 "<<obj_Burger.get_food1()<<" Rs.180"<<"\n";
		cout<<"2 "<<obj_Burger.get_food2()<<" Rs.150"<<"\n";
		cout<<"3 "<<obj_Burger.get_food3()<<" Rs.160"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 180*quantity;
			break;

			case 2: choice = 150*quantity;
			break;

			case 3: choice = 160*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Burger.get_food1();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<obj_Burger.get_food2();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Burger.get_food3();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
        }
        else
        {
        cout<<"\n\nPlease select the right option\n\n\n"<<"Would you like to go back to Main Menu? Y / N:\n";
        cin>>gotostart;
        if(gotostart == 'Y' || gotostart == 'y')
        goto back_option2;
        }
            
}

	else if(choice==3)
	 {
     back_option3:
		cout<<"\n1  "<<obj_Sandwitch.get_food1()<<" Rs.240"<<"\n";
		cout<<"2  "<<obj_Sandwitch.get_food2()<<" Rs.160"<<"\n";
		cout<<"3  "<<obj_Sandwitch.get_food3()<<" Rs.100"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 240*quantity;
			break;

			case 2: choice = 160*quantity;
			break;

			case 3: choice = 100*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Sandwitch.get_food1();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<obj_Sandwitch.get_food2();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Sandwitch.get_food3();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
            else
            {
            cout<<"\n\nPlease select the right option\n\n\n"<<"Would you like to go back to Main Menu? Y / N:\n";
            cin>>gotostart;
            if(gotostart == 'Y' || gotostart == 'y')
            goto back_option3;
            }
			}


	 else if(choice==4)
	 {
     back_option4:
		cout<<"\n1 "<<obj_Rolls.get_food1()<<" Rs.150"<<"\n";
		cout<<"2 "<<obj_Rolls.get_food2()<<" Rs.100"<<"\n";
		cout<<"3 "<<obj_Rolls.get_food3()<<" Rs.120"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow Much Rolls Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice = 120*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Rolls.get_food1();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<obj_Rolls.get_food2();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Rolls.get_food3();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;


			}
            

 }
 else
 {
 cout<<"\n\nPlease select the right option\n\n\n"<<"Would you like to go back to Main Menu? Y / N:\n";
 cin>>gotostart;
 if(gotostart == 'Y' || gotostart == 'y')
 goto back_option4;
 }
}
	else if(choice==5)
	 {
     back_option5:
		cout<<"\n1 "<<obj_Biryani.get_food1()<<" Rs.160"<<"\n";
		cout<<"2 "<<obj_Biryani.get_food2()<<" Rs.220"<<"\n";
		cout<<"3 "<<obj_Biryani.get_food3()<<" Rs.140"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Biryani you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 160*quantity;
			break;

			case 2: choice = 220*quantity;
			break;

			case 3: choice = 140*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Biryani.get_food1();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<obj_Biryani.get_food2();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIIC Food Order Service\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<obj_Biryani.get_food3();
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From IIUC Food Order Service\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
            else
            {
            cout<<"\n\nPlease select the right option\n\n\n"<<"Would you like to go back to Main Menu? Y / N:\n";
            cin>>gotostart;
            if(gotostart == 'Y' || gotostart == 'y')
            goto back_option5;
            }
			}

			else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
			}
			}

     getch();
}
    