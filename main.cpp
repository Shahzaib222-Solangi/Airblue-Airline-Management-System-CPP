#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib> 
using namespace std;
const int MAX_BOOKINGS = 100;
int bookingCount = 0;
const int TOTAL_SEATS = 50;
struct domesticSchedule{
		   string arr14[4][6]={{"PA101\t\t","Karachi\t\t","Islamabad\t","03:00PM\t\t\t","04:20PM\t\t","1:20hrs"},
                               {"PA102\t\t","Islamabad\t","Skardu\t\t","02:00AM\t\t\t", "03:30AM\t\t","1:00hrs"},
                               {"PA103\t\t","Karachi\t\t","Lahore\t\t", "07:00PM\t\t\t","08:45PM\t\t","1:45hrs"},
                               {"PA104\t\t","Lahore\t\t","Sukkur\t\t","04:30PM\t\t\t","05:45PM\t\t", "1:15hrs"}};
                         
          string  arr15[2][6]={{"PA104\t\t","Islamabad\t","Karachi\t\t","10:00AM\t\t\t","11:25AM\t\t","1:25hrs"},
                               {"PA105\t\t","Islamabad\t","Quetta\t\t","06:00AM\t\t\t", "07:30AM\t\t","1:30hrs"}};
				
	       string arr16[3][6]={{"PA106\t\t","Karachi\t\t","Gawadar\t\t","11:00AM\t\t\t","12:00PM\t\t","1:00hrs"},
                               {"PA107\t\t","Quetta\t\t","Peshawar\t","05:00AM\t\t\t", "06:40AM\t\t","1:40hrs"},
                               {"PA101\t\t","Karachi\t\t","Lahore\t\t", "03:00PM\t\t\t","04:50PM\t\t","1:50hrs "}};
						 
	       string arr17[3][6]={{"PA102\t\t","Karachi\t\t","Sukkur\t\t","04:00PM\t\t\t","05:20PM\t\t","1:20hrs"},
                               {"PA103\t\t","Karachi\t\t","Faislabad\t","02:00PM\t\t\t", "03:50PM\t\t","1:50hrs"},
                               {"PA105\t\t","Faislabad\t","Islamabad\t","02:00PM\t\t\t","02:50PM\t\t","0:50hrs"}};
						
	       string arr18[2][6]={{"PA103\t\t","Faislabad\t","Skardu\t\t","10:00AM\t\t\t","11:05AM\t\t","1:05hrs"},
                               {"PA105\t\t","Karachi\t\t","Peshawar\t","11:00PM\t\t\t", "12:50AM\t\t","1:50hrs"}};
				 				          
};

struct internationalSchedule{
	      string arr12[11][6]={{"PA201\t\t","Karachi\t\t","Dubai\t\t","03:00PM\t\t\t","05:00PM\t\t","2:00hrs"},
                               {"PA202\t\t","Karachi\t\t","Dubai\t\t","05:00AM\t\t\t", "07:15AM\t\t","2:15hrs"},
                               {"PA203\t\t","Karachi\t\t","Dubai\t\t", "11:00AM\t\t\t","12:50PM\t\t","1:50hrs"},
	                           {"PA204\t\t","Islamabad\t","Dubai\t\t","11:00PM\t\t\t","01:30AM\t\t","2:30hrs"},
                               {"PA105\t\t","Islmabad\t","Dubai\t\t","10:00AM\t\t\t", "03:30AM\t\t","2:30hrs"},
                               {"PA103\t\t","Karachi\t\t","Jeddah\t\t", "03:00PM\t\t\t","07:00PM\t\t","4:00hrs"},
	                           {"PA301\t\t","Islamabad\t","Jeddah\t\t","01:00AM\t\t\t","05:30AM\t\t","4:30hrs"},
                               {"PA405\t\t","Islamabad\t","London\t\t","03:00PM\t\t\t", "11:30PM\t\t","8:30hrs"},
                               {"PA401\t\t","Islamabad\t","London\t\t", "01:00AM\t\t\t","09:00AM\t\t","8:00hrs"},
	                           {"PA402\t\t","Karachi\t\t","Istanbul\t","06:00PM\t\t\t","11:55PM\t\t","5:55hrs"},
                               {"PA501\t\t","Karachi\t\t","Istanbul\t","01:00PM\t\t\t", "07:00PM\t\t","6:00hrs"}};
                               
          string arr15[10][6]={{"PA211\t\t","Karachi\t\t","Dubai\t\t","03:00PM\t\t\t","05:00PM\t\t","2:00hrs"},
                               {"PA212\t\t","Karachi\t\t","Dubai\t\t","05:00AM\t\t\t", "07:15AM\t\t","2:15hrs"},
                               {"PA503\t\t","Karachi\t\t","Shanghai\t", "09:00AM\t\t\t","01:30PM\t\t","4:30hrs"},
	                           {"PA222\t\t","Islamabad\t","Dubai\t\t","01:00PM\t\t\t","03:30PM\t\t","2:30hrs"},
                               {"PA313\t\t","Karachi\t\t","Jeddah\t\t", "03:00PM\t\t\t","07:00PM\t\t","4:00hrs"},
                               {"PA505\t\t","Karachi\t\t","Shanghai\t", "05:00PM\t\t\t","09:30PM\t\t","4:30hrs"},
                               {"PA425\t\t","Islamabad\t","London\t\t","11:00PM\t\t\t", "07:30AM\t\t","8:30hrs"},
                               {"PA601\t\t","Islamabad\t","Doha\t\t", "01:00AM\t\t\t","04:40AM\t\t","3:30hrs"},
	                           {"PA412\t\t","Karachi\t\t","Istanbul\t","06:00PM\t\t\t","11:55PM\t\t","5:55hrs"},
	                           {"PA612\t\t","Karachi\t\t","Bangkok\t\t","09:00PM\t\t\t","01:40AM\t\t","4:40hrs"}};
	                           
	                           
	       string arr17[9][6]={{"PA201\t\t","Karachi\t\t","Dubai\t\t","11:00PM\t\t\t","01:00AM\t\t","2:00hrs"},
                               {"PA202\t\t","Karachi\t\t","Dubai\t\t","05:00AM\t\t\t", "07:15AM\t\t","2:15hrs"},
	                           {"PA222\t\t","Islamabad\t","Dubai\t\t","01:00PM\t\t\t","03:30PM\t\t","2:30hrs"},
                               {"PA301\t\t","Karachi\t\t","Jeddah\t\t", "03:00PM\t\t\t","07:00PM\t\t","4:00hrs"},
                               {"PA410\t\t","Islamabad\t","London\t\t","11:00PM\t\t\t", "07:30AM\t\t","8:30hrs"},
                               {"PA611\t\t","Islamabad\t","Doha\t\t", "01:00AM\t\t\t","04:40AM\t\t","3:30hrs"},
	                           {"PA420\t\t","Karachi\t\t","Istanbul\t","06:00PM\t\t\t","11:55PM\t\t","5:55hrs"},
	                           {"PA622\t\t","Karachi\t\t","Bangkok\t\t","09:00PM\t\t\t","01:40AM\t\t","4:40hrs"},
                               {"PA712\t\t","Karachi\t\t","Colombo\t\t","02:00PM\t\t\t","04:40AM\t\t","2:40hrs"}};
							   
		  string arr21[10][6]={{"PA211\t\t","Karachi\t\t","Dubai\t\t","03:00PM\t\t\t","05:00PM\t\t","2:00hrs"},
                               {"PA705\t\t","Karachi\t\t","Colombo\t\t","05:00AM\t\t\t","07:40AM\t\t","2:40hrs"},
                               {"PA515\t\t","Karachi\t\t","Shanghai\t", "09:00AM\t\t\t","01:30PM\t\t","4:30hrs"},
	                           {"PA222\t\t","Islamabad\t","Dubai\t\t","01:00PM\t\t\t","03:30PM\t\t","2:30hrs"},
                               {"PA301\t\t","Karachi\t\t","Jeddah\t\t", "03:00PM\t\t\t","07:00PM\t\t","4:00hrs"},
                               {"PA232\t\t","Islamabad\t","Dhaka\t\t","05:00PM\t\t\t", "07:15PM\t\t","2:15hrs"},
                               {"PA415\t\t","Islamabad\t","London\t\t","11:00PM\t\t\t", "07:30AM\t\t","8:30hrs"},
                               {"PA610\t\t","Islamabad\t","Doha\t\t", "01:00AM\t\t\t","04:40AM\t\t","3:30hrs"},
	                           {"PA406\t\t","Karachi\t\t","Istanbul\t","10:00PM\t\t\t","3:55AM\t\t","5:55hrs"},
	                           {"PA620\t\t","Karachi\t\t","Bangkok\t\t","09:00PM\t\t\t","01:40AM\t\t","4:40hrs"}};
							   				     
          string arr25[10][6]={{"PA201\t\t","Karachi\t\t","Dubai\t\t","03:00PM\t\t\t","05:00PM\t\t","2:00hrs"},
                               {"PA905\t\t","Karachi\t\t","Kualampur\t","05:00AM\t\t\t","10:25AM\t\t","4:25hrs"},
                               {"PA550\t\t","Karachi\t\t","Shanghai\t", "09:00AM\t\t\t","01:30PM\t\t","4:30hrs"},
	                           {"PA220\t\t","Islamabad\t","Dubai\t\t","01:00PM\t\t\t","03:30PM\t\t","2:30hrs"},
                               {"PA310\t\t","Karachi\t\t","Jeddah\t\t", "03:00PM\t\t\t","07:00PM\t\t","4:00hrs"},
                               {"PA235\t\t","Islamabad\t","Dhaka\t\t","05:00AM\t\t\t", "07:15AM\t\t","2:15hrs"},
                               {"PA411\t\t","Islamabad\t","London\t\t","11:00PM\t\t\t", "07:30AM\t\t","8:30hrs"},
                               {"PA615\t\t","Islamabad\t","Doha\t\t", "01:00PM\t\t\t","04:40PM\t\t","3:30hrs"},
	                           {"PA440\t\t","Karachi\t\t","Istanbul\t","05:00PM\t\t\t","10:55PM\t\t","5:55hrs"},
	                           {"PA602\t\t","Karachi\t\t","Bangkok\t\t","09:00PM\t\t\t","01:40AM\t\t","4:40hrs"}};
	                           
};

struct Booking {
    string name;
    int age;
    char gender;
    string passportNumber;
    string flightNumber;
    string flightType;
};

Booking bookings[MAX_BOOKINGS];
void flightsInformation();                           //Flight Schedule Function
void Domestic();                                    //Domestic Flight Function
void International();                              //International Flight Function
void passengerBooking();                          //Passenger Booking Function
void bookingSummary();                           //Booking Summary Function
void bookingCancellation();                     //Booking Cancellation Function
void showSeatAvailability();                   //Seat Availability function


int main(){
   system("CLS");                                         //Main Function
   	int choice;
    cout << "\t      Welcome to Airblue Airline " << endl;
    cout << setw(40) << "\tYour comfort is our priority. Enjoy your journey" << endl << endl;
    cout << setw(50) << setfill('_') << "__MainMenu_______________________" << endl << endl;

    do {
        cout << "\tPress 1 for Check flight Schedule " << endl;
        cout << "\tPress 2 for Passenger Booking" << endl;
        cout << "\tPress 3 for Booking Summary" << endl;
        cout << "\tPress 4 for Booking Cancellation" << endl;
        cout << "\tPress 5 to Show Seat Availability" << endl;
        cout << "\tPress 6 for Exit from program" << endl;
        cout << setw(50) << setfill('_') << "" << endl;
        cout << endl;

        cout << "Enter Your Choice.......";
        cin>>choice;
        cout << endl<<endl;
        cout<<setw(50)<<setfill('_')<<"_"<<endl<<endl;

        switch (choice) {
            case 1:
                flightsInformation();
                break;
            case 2:
                passengerBooking();
                break;
            case 3:
                bookingSummary();
                break;
            case 4:
                bookingCancellation();
                break;
            case 5:
                showSeatAvailability();
                break;
            case 6:
                cout << "Thank you for using Airblue Airline Services. Goodbye!" << endl;
                exit(0);
            default:
                cout << "Invalid Input. Please try again." << endl;
                break;
        }
    } while (choice != 6);
	
	
   
    return 0;
}


void flightsInformation() {
	system("CLS");
    string choice2;
    cout << "Press 1 for Domestic Flights" << endl;
    cout << "Press 2 for International Flights" << endl;
    cout << "Enter any other key to go back to the Main Menu" << endl;
    cout << "Enter Your Choice.......";
    cin >> choice2;
    cout << endl;
    cout<<setw(50)<<setfill('_')<<"_"<<endl;

    if (choice2=="1") {
        Domestic();
    } else if (choice2 =="2") {
        International();
    } else {
        cout << "Returning to Main Menu..." << endl<<endl;
        main();
    }
}

void Domestic(){
	string choice;
	domesticSchedule day[5];	
    cout<<"Domestic Flights are available from  14 to January 18:"<<endl<<endl;
    int date;
    cout<<"Enter one of date from above.....";
    cin>>date;
    cout<<setw(50)<<setfill('_')<<"_"<<endl;
        cout << "\nDate: January " << date << ", 2025" << endl<<endl<<endl;
        switch (date){
            case 14:
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	cout << "FlightNumber\tDeparture\tArrival\t\tDeparture Timing\tArrivalTiming\tDuration" << endl;
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
                   for(int i=0; i<4;i++){
                   	 for(int j=0; j<6;j++){
                   	   cout<<day[0].arr14[i][j];
						}
						cout<<endl;
				   }
				cout<<endl<<endl<<setw(100)<<setfill('_')<<"_"<<endl<<endl;
				cout<<"Do you want to check schedule of another date(yes/no): "<<endl;
				cout<<"Enter your choice: ";
				cin>>choice;
				if(choice=="yes" || choice=="Yes"){
				Domestic();
				}
                break;
            case 15:
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	cout << "FlightNumber\tDeparture\tArrival\t\tDeparture Timing\tArrival Timing\tDuration" << endl;
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	 for(int i=0; i<2;i++){
                   	 for(int j=0; j<6;j++){
                   	   cout<<day[1].arr15[i][j];
						}
						cout<<endl;
				  }
				cout<<endl<<endl<<setw(100)<<setfill('_')<<"_"<<endl<<endl;
				cout<<"Do you want to check schedule of another date(yes/no): "<<endl;
				cout<<"Enter your choice: ";
				cin>>choice;
				if(choice=="yes" || choice=="Yes"){
					Domestic();
				}
                break;
            case 16:
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	cout << "FlightNumber\tDeparture\tArrival\t\tDeparture Timing\tArrival Timing\tDuration" << endl;
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
              	 for(int i=0; i<3;i++){
                   	 for(int j=0; j<6;j++){
                   	   cout<<day[2].arr16[i][j];
						}
						cout<<endl;
				  }
				cout<<endl<<endl<<setw(100)<<setfill('_')<<"_"<<endl<<endl;
				cout<<"Do you want to check schedule of another date (yes/no): "<<endl;
				cout<<"Enter your choice: ";
				cin>>choice;
				if(choice=="yes"|| choice=="Yes"){
					Domestic();
				}
                break;
            case 17:
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	cout << "FlightNumber\tDeparture\tArrival\t\tDeparture Timing\tArrival Timing\tDuration" << endl;
             	cout<<setw(100)<<setfill('_')<<"_"<<endl;
     	         for(int i=0; i<3;i++){
                   	 for(int j=0; j<6;j++){
                   	   cout<<day[3].arr17[i][j];
						}
						cout<<endl;
				  }
				cout<<endl<<endl<<setw(100)<<setfill('_')<<"_"<<endl;
			    cout<<"Do you want to check schedule of another date (yes/no): "<<endl;
				cout<<"Enter your choice: ";
				cin>>choice;
				if(choice=="Yes" || choice=="yes"){
					Domestic();
				}
                break;
            case 18:
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	cout << "FlightNumber\tDeparture\tArrival\t\tDeparture Timing\tArrival Timing\tDuration" << endl;
            	 	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            for(int i=0; i<2;i++){
                   	 for(int j=0; j<6;j++){
                   	   cout<<day[4].arr18[i][j];
						}
						cout<<endl;
				  }
			   cout<<endl<<endl<<setw(100)<<setfill('_')<<"_"<<endl;
			   	cout<<"Do you want to check schedule of another date (yes/no): "<<endl;
			   	cout<<"Enter your choice: ";
			   	cin>>choice;
				if(choice=="yes"|| choice=="Yes"){
					Domestic();
				}
               break;
               default:
                cout<<"Sorry! We have no flights available on "<<date<<endl;
                cout<<"Please Enter again correct date"<<endl;
                Domestic();
        }
    }

void International(){
	string choice;
	internationalSchedule days[5];
	cout<<"International Flights are available on 12,15,17,21 and 25 january"<<endl<<endl;
    int date;
    cout<<"Enter one of date from above.....";
    cin>>date;
    cout<<setw(50)<<setfill('_')<<"_"<<endl;
    cout<<"\nDate: January "<<date<<", 2025"<<endl<<endl;
        switch (date){
            case 12:
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	cout << "FlightNumber\tDeparture\tArrival\t\tDeparture Timing\tArrival Timing\tDuration" << endl;
             	cout<<setw(100)<<setfill('_')<<"_"<<endl;
             	for(int i=0; i<11;i++){
                   	 for(int j=0; j<6;j++){
                   	   cout<<days[0].arr12[i][j];
						}
						cout<<endl;
				   }
				cout<<endl<<endl<<setw(100)<<setfill('_')<<"_"<<endl<<endl;
				cout<<"Do you want to check schedule of another date(yes/no): "<<endl;
				cout<<"Enter your choice: ";
				cin>>choice;
				if(choice=="yes" || choice=="Yes"){
					International();
				}
                break;
            case 15:
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	cout << "FlightNumber\tDeparture\tArrival\t\tDeparture Timing\tArrival Timing\tDuration" << endl;
             	cout<<setw(100)<<setfill('_')<<"_"<<endl;
             	for(int i=0; i<10;i++){
                   	 for(int j=0; j<6;j++){
                   	   cout<<days[0].arr15[i][j];
						}
						cout<<endl;
				   }
				cout<<endl<<endl<<setw(100)<<setfill('_')<<"_"<<endl<<endl;
				cout<<"Do you want to check schedule of another date(yes/no): "<<endl;
				cout<<"Enter your choice: ";
				cin>>choice;
				if(choice=="yes" || choice=="Yes"){
					International();
				}
                break;
            case 17:
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	cout << "FlightNumber\tDeparture\tArrival\t\tDeparture Timing\tArrival Timing\tDuration" << endl;
             	cout<<setw(100)<<setfill('_')<<"_"<<endl;
             	for(int i=0; i<9;i++){
                   	 for(int j=0; j<6;j++){
                   	   cout<<days[0].arr17[i][j];
						}
						cout<<endl;
				   }
				cout<<endl<<endl<<setw(100)<<setfill('_')<<"_"<<endl<<endl;
				cout<<"Do you want to check schedule of another date(yes/no): "<<endl;
				cout<<"Enter your choice: ";
				cin>>choice;
				if(choice=="yes" || choice=="Yes"){
					International();
				}
                break;
            case 21:
            	cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	cout << "FlightNumber\tDeparture\tArrival\t\tDeparture Timing\tArrival Timing\tDuration" << endl;
             	cout<<setw(100)<<setfill('_')<<"_"<<endl;
             	for(int i=0; i<10;i++){
                   	 for(int j=0; j<6;j++){
                   	   cout<<days[0].arr21[i][j];
						}
						cout<<endl;
				   }
				cout<<endl<<endl<<setw(100)<<setfill('_')<<"_"<<endl<<endl;
				cout<<"Do you want to check schedule of another date(yes/no): "<<endl;
				cout<<"Enter your choice: ";
				cin>>choice;
				if(choice=="yes" || choice=="Yes"){
					International();
				}
                break;
            case 25:
                cout<<setw(100)<<setfill('_')<<"_"<<endl;
            	cout << "FlightNumber\tDeparture\tArrival\t\tDeparture Timing\tArrival Timing\tDuration" << endl;
             	cout<<setw(100)<<setfill('_')<<"_"<<endl;
             	for(int i=0; i<10;i++){
                   	 for(int j=0; j<6;j++){
                   	   cout<<days[0].arr25[i][j];
						}
						cout<<endl;
				   }
				cout<<endl<<endl<<setw(100)<<setfill('_')<<"_"<<endl<<endl;
				cout<<"Do you want to check schedule of another date(yes/no): "<<endl;
				cout<<"Enter your choice: ";
				cin>>choice;
				if(choice=="yes" || choice=="Yes"){
					International();
				}
                break;
                default:
                cout<<"Sorry! We have no flights available on "<<date<<endl;
                cout<<"Please Enter again correct date"<<endl;
                International();
        }
    
}

void passengerBooking(){
	system("CLS");
    if (bookingCount >= MAX_BOOKINGS){
        cout << "Sorry! Booking capacity reached. Cannot make more bookings." << endl;
        return;
    }

    string name, flightNumber, flightType,passportNumber;
    int age;
    char gender;  
    cout<<"Enter Passenger Name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter Passenger Age: ";
    cin>>age;
    cout<<"Enter Passenger Gender (M/F): ";
    cin>>gender;
    cout<<"Enter passport number: ";
    cin>>passportNumber;

    cout<<"Enter 'D' or 'd' for Domestic Flight" << endl;
    cout<<"Enter 'I' or 'i' for International Flight" << endl;
    cout<<"Enter Your Choice: ";
    char choiceType;
    cin>>choiceType;

    if (choiceType == 'D' || choiceType == 'd') {
        flightType = "Domestic";
        Domestic();
    } else if (choiceType == 'I' || choiceType == 'i') {
        flightType = "International";
        International();
    } else {
        cout<<"Invalid flight type. Returning to Main Menu..." << endl;
        return;
    }

    cout<<"Enter Flight Number: ";
    cin>>flightNumber;
    cout<<endl<<endl;

    bookings[bookingCount] = {name, age, gender,passportNumber, flightNumber, flightType};
    bookingCount++;
    cout<<"Booking Confirmed!"<<endl;
    cout<<"Passenger Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Passport number: "<<passportNumber<<endl;
    cout<<"Flight Number: "<<flightNumber<<endl;
    cout<<"Flight Type: " <<flightType<<endl;
    cout<<endl<<endl;
}

void bookingSummary(){
	system("CLS");
    if (bookingCount == 0){       
        cout<<"No bookings found."<<endl;
        return;
    }

    cout<<"Booking Summary:" <<endl;
    for (int i = 0; i < bookingCount; ++i) {
        cout<<"Booking "<< i + 1 <<":"<<endl;
        cout<<"Passenger Name: " <<bookings[i].name<<endl;
        cout<<"Age: " <<bookings[i].age<<endl;
        cout<<"Gender: " <<bookings[i].gender<<endl;
        cout<<"Passport number: "<<bookings[i].passportNumber<<endl;
        cout<<"Flight Number: " <<bookings[i].flightNumber<<endl;
        cout<<"Flight Type: " <<bookings[i].flightType<<endl;
        cout<<"--------------------------"<<endl;
    }
}

void bookingCancellation(){
	system("CLS");
    if (bookingCount == 0){
        cout<<"No bookings found to cancel."<<endl;
        return;
    }

    string name;
    cout<<"Enter Passenger Name for cancellation: ";
    cin.ignore();
    getline(cin,name);
    

    for (int i = 0; i < bookingCount; ++i){
        if (bookings[i].name == name){
            for (int j = i; j < bookingCount - 1; ++j){
                bookings[j] = bookings[j + 1];
            }
            bookingCount--;
            cout<< "Booking cancelled successfully."<<endl;
            return;
        }
    }
    cout<<"Booking not found for the provided name."<<endl;
}

void showSeatAvailability(){
    cout<<"Total seats available: "<<TOTAL_SEATS - bookingCount<<endl;
}
