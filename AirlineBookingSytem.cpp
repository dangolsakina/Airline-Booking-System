#include<iostream>
#include<string>
#include<fstream>
#include<unistd.h>

using namespace std;

class login{
    private:
        string pass;
        string name;
        string phone_no;
    public:
        int log_in();  
        void register_user();
        void forget();
}test;

void login::register_user() {
    system("cls");
    red:
    ifstream inFile("users.txt",ios::app); 

    if (!inFile) {
        cout << "\t\t\t\t\t\tError: Unable to open file!" << endl;
        return;
    }

    cout << "\n\t\t\t\t\t\tEnter new user name:" ;
    cin >> name;

    while (inFile >> test.name >> test.pass>>test.phone_no) {
        if (test.name == name) {
            cout << "\t\t\t\t\t\tUsername " << test.name << " already exists!" << endl;
            sleep(1);
            cout << "\n\t\t\t\t\t\tPlease choose a different username:";
            cin >> name;
            inFile.close(); 
            inFile.open("users.txt");
        }
    }

    inFile.close(); 

    ofstream outFile("users.txt", ios::app); 

    if (!outFile) {
        cout << "\n\t\t\t\t\t\tError: Unable to open file!" << endl;
        return;
    }
    cin.ignore();
    cout << "\n\t\t\t\t\t\tEnter password for new user (atleast 5 characters):";
    cin >> pass;
    cin.ignore();
    cout<<"\n\t\t\t\t\t\tEnter phone no:";
    cin>>phone_no;
    
    if(pass.length()>=5)
    {
    outFile << name << " " << pass <<" "<<phone_no<< endl; 

    outFile.close();

    cout << "\n\n\t\t\t\t\t\tUser registered successfully!" << endl;
    sleep(2);	
	}

    
    else{
    	cout<<"\t\t\t\t\t\tPlease enter password of atleast 5 character"<<endl;
    	goto red;
	}
}


int login::log_in(){
	system("cls");
    cout << "\n\t\t\t\t\t\tEnter user name:";
    cin >> name;
    
    cout << "\n\t\t\t\t\t\tEnter password:";
    cin >> pass;

     
    ifstream infile("users.txt");

    if (!infile) {
        cout << "\n\t\t\t\t\t\tError: Unable to open file!" << endl;
       
    }

    string username;
    string password;
    
   int flag=0;
    while (infile >> username >> password) {
        if (name == username && pass == password) {
           
            flag=1;
            break;
        }
        
    }
return flag;
   
			
}


void login::forget() {
	system("cls");
    cout << "\n\t\t\t\t\t\tEnter user name:" ;
    cin >> name;
     cout << "\n\t\t\t\t\t\tEnter phone_no:" ;
    cin >> phone_no;

    ifstream infile("users.txt");

    if (!infile) {
        cout << "\n\t\t\t\t\t\tError: Unable to open file!" << endl;
        return;
    }

    string username;
    string password;
    string phone_no1;
    bool found = false;

    while (infile >> username >> password>>phone_no1) {
        if (name == username&&phone_no==phone_no1) {
            found = true;
            cout << "\n\t\t\t\t\t\tYour password is: " << password << endl;
            sleep(3);
            break;
        }
    }

    if (!found) {
        cout << "\n\t\t\t\t\t\tUser not found!" << endl;
        sleep(2);
    }
}
class dom_booking{


    

    protected:
    static int dom_pnr;
        int d_pnr;
		int dom_passengers;
	
         char flight_dom[50],dom_meal[20], meal1[20];;
        char date_dom[10];
        char dom_dep[20],dom_arr[20];
        
		int source,destination;



    public:
        
int choice_dom;
int dom_meal_choice;
    int generate_dom_pnr(){

        dom_pnr++;
        d_pnr=dom_pnr;
       
        return d_pnr;
    }

    

    int travel_details_dom()


    {

        cout << "\n\t\t\t\t\t\tPlease enter date of departure (DD/MM/YY):" ;
        cin >> date_dom;
        system("CLS");

        cout << "\t\t\t\t\t\t-----------------"<<endl;
        cout<<  " \t\t\t\t\t\t     SOURCE     "<<endl;
        cout << "\t\t\t\t\t\t-----------------"<<endl;
        cout << "\t\t\t\t\t\t1.Pokhara" << endl ;
        cout <<"\t\t\t\t\t\t2.Kathmandu" << endl;
        cout <<"\t\t\t\t\t\t3.Chitwan" << endl;
        cout <<"\t\t\t\t\t\t4.Biratnagar " << endl;
        cout << "\t\t\t\t\t\t------------------\n"<<endl;
        cout << "\t\t\t\t\t\tEnter your source:" ;
        cin >> source;



        cout << "\t\t\t\t\t\t-----------------"<<endl;
        cout<<  "\t\t\t\t\t\t  DESTINATION     "<<endl;
        cout << "\t\t\t\t\t\t-----------------"<<endl;
        cout << "\t\t\t\t\t\t1.Pokhara" << endl;
        cout <<"\t\t\t\t\t\t2.Kathmandu" << endl;
        cout <<"\t\t\t\t\t\t3.chitwan" << endl;
        cout <<"\t\t\t\t\t\t4.Biratnagar" << endl;
        cout << "\t\t\t\t\t\t------------------\n"<<endl;
        cout << "\t\t\t\t\t\tEnter your destination :";
        cin >> destination;


system("cls");
        if((source==1 && destination==2) || (source==2 && destination==1))
        {
            cout << "\t\t\t\t\t\tAvailable flights" << endl << endl;
            cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
            cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tBuddha Air\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\t\t\t\t\t\t2.\tYeti Airline\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\t\t\t\t\t\t3.\tPokhara airline\t19:00\t\t22:05\t\tRs.6000\n";



        }

        else if((source==1 && destination==3) || (source==3 && destination==1))
        {
            cout << "\t\t\t\t\t\tAvailable flights" << endl << endl;
           cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
           cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tBuddha Air\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\t\t\t\t\t\t2.\tYeti Airline\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\t\t\t\t\t\t3.\tPokhara airline\t19:00\t\t22:05\t\tRs.6000\n";
        }

        else if((source==1 && destination==4) || (source==4 && destination==1))
        {
            cout << "\t\t\t\t\t\tAvailable flights" << endl << endl;
            cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
           cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;;
            cout << "\t\t\t\t\t\t1.\tBuddha Air\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\t\t\t\t\t\t2.\tYeti Airline\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\t\t\t\t\t\t3.\tpokhara airline\t18:00\t\t21:05\t\tRs.6000\n";
        }

        else if((source==2 && destination==3) || (source==3 && destination==2))
        {
            cout << "\t\t\t\t\t\tAvailable flights" << endl << endl;
           cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
             cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tBuddha Air\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\t\t\t\t\t\t2.\tYeti Airline\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\t\t\t\t\t\t3.\tpokhara airline\t18:00\t\t21:05\t\tRs.6000\n";
        }

        else if((source==2 && destination==4) || (source==4 && destination==2))
        {
           cout << "\t\t\t\t\t\tAvailable flights" << endl << endl;
            cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;;
           cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tBuddha Airline\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\t\t\t\t\t\t2.\tYeti Airline\t14:00\t\t17:05\t\tRs.5500\n";
            cout << "\t\t\t\t\t\t3.\tpokhara Airline\t18:00\t\t21:05\t\tRs.6000\n";
        }
        else if((source==3 && destination==4) || (source==4 && destination==3))
         {
            cout << "\t\t\t\t\t\tAvailable flights" << endl << endl;
            cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
             cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tBuddha Air\t08:00\t\t11:05\t\tRs.5000\n";
            cout << "\t\t\t\t\t\t2.\tYeti Airline\t14:00\t\t17:05\t\tRs.5508\n";
            cout << "\t\t\t\t\t\t3.\tpokhara airliune\t18:00\t\t21:05\t\tRs.6000\n";
        }
        else if(source==destination)
        {
            cout << "\n\t\t\t\t\t\tSource and destination are the same.Please enter try again.\n\n\n" << endl;
            return travel_details_dom();
        }
        else
        {
            cout <<"\n\t\t\t\t\t\tYou have entered the wrong input entered.Please try again\n\n\n" << endl;
            return travel_details_dom();
        }

    }







    
    int select_flight_dom()

    {

        cout << "\n\t\t\t\t\t\tEnter your choice : ";
        cin >> choice_dom;



         
        switch(choice_dom)
        {
          case 1:
                cout << "\n\t\t\t\t\t\tYour travel information"<<endl;
                cout<<"\t\t\t\t\t\t---------------------------------------"<<endl;
                cout << "\t\t\t\t\t\tFlight name : Buddha Air"<<endl;
                strcpy(flight_dom,"Buddha Air");
                cout << "\t\t\t\t\t\tDeparture Time : 08:00"<<endl;
                cout<<"\t\t\t\t\t\tArrival Time: 11:05"<<endl;
                strcpy(dom_dep,"08:00");
                strcpy(dom_arr,"11:05");


                break;
          case 2:
                cout << "\n\t\t\t\t\t\tYour travel information:"<<endl;
                cout<<"\t\t\t\t\t\t---------------------------------------"<<endl;
                cout << "\t\t\t\t\t\tFlight name : Yeti Airline"<<endl;
                strcpy(flight_dom,"Yeti Airline");
                cout << "\t\t\t\t\t\tDeparture Time : 14:00"<<endl;
                cout<<"\t\t\t\t\t\tArrival Time: 17:05"<<endl;
                strcpy(dom_dep,"14:00");
                strcpy(dom_arr,"17:05");


                break;
          case 3:
                cout << "\n\t\t\t\t\t\tYour travel information" << endl;
                cout<<"\t\t\t\t\t\t---------------------------------------"<<endl;
                cout << "\t\t\t\t\t\tFlight name : pokhara Airline" << endl;
                strcpy(flight_dom,"pokhara Airline");
                cout << "\t\t\t\t\t\tDeparture Time : 18:00" << endl;
                cout<<"\t\t\t\t\t\tArrival Time: 21:05" << endl;
                strcpy(dom_dep,"18:00");
                strcpy(dom_arr,"21:05");


                break;
          default:
                cout << "\n\t\t\t\t\t\tYou have entered the wrong input entered.Try again\n\n\n" << endl;
                return select_flight_dom();
        }
    }



    
    int dom_meals(){

        system("cls");
        cout<<"\t\t\t\t\t\t---------------------------------------"<<endl;

		cout <<"\t\t\t\t\t\tPlease enter your meal preference : "<<endl;

		cout<<"\t\t\t\t\t\t---------------------------------------"<<endl;
		cout << "\t\t\t\t\t\t1.Vegetarian meal: Rs.350 \n";
		cout << "\t\t\t\t\t\t2.Non-Vegetarian meal : Rs.450\n";
		cout << "\t\t\t\t\t\t3.No meal\n\n";

		cout <<"\t\t\t\t\t\tEnter your choice :  ";
		cin >> dom_meal_choice;

		while(dom_meal_choice>3 || dom_meal_choice<1){
		cout<<"\t\t\t\t\t\tYou have entered the wrong input.Please a number between 1 and 3\n";
		cin>>dom_meal_choice;
		}
		{

		if (dom_meal_choice == 1){
		strcpy(meal1,"vegetarian meal");
		}

		else if (dom_meal_choice == 2){
		strcpy(meal1,"non-Vegetarian meal");
		}

		else{
		strcpy(meal1,"no meal");
		}


		 cout<<"\t\t\t\t\t\tYou have chosen "<<meal1<<endl;

        }
    }
};

int dom_booking::dom_pnr=100;



class int_booking
{


    
    protected:
        
        static int int_pnr;
		int int_passengers,int_meal_price;
        
        char flight_int[20],int_dep[20],int_arr[20],meal2[30],int_meal_choices[20];
        char date_int[20];
        int source_int,destination_int;
		int i_pnr;


    public:
    	
    	int choice_int;
		int int_meal_choice;
        
        void generate_int_pnr()
        {
            int_pnr++;
           i_pnr=int_pnr;
          
        }



   
    int travel_details_int()

    {


        cout << "\n\t\t\t\t\t\tEnter date of departure (DD/MM/YY) :" ;
        cin>>date_int;
        system("CLS");

        system("CLS");
        cout<<  "\n\t\t\t\t\t\t      SOURCE     "<<endl;
        cout << "\t\t\t\t\t\t-----------------"<<endl;
        cout << "\t\t\t\t\t\t1.Dubai" << endl ;
        cout <<"\t\t\t\t\t\t2. Japan" << endl ;
        cout <<"\t\t\t\t\t\t3.Hong Kong" << endl ;
        cout <<"\t\t\t\t\t\t4.Nepal " << endl ;
        cout << "\t\t\t\t\t\t------------------\n"<<endl;
        cout << "\t\t\t\t\t\tEnter your source:" ;
        cin >> source_int;



        cout<<  "\n\t\t\t\t\t\t  DESTINATION     "<<endl;
         cout << "\t\t\t\t\t\t-----------------"<<endl;
        cout << "\t\t\t\t\t\t1.Dubai" << endl ;
        cout <<"\t\t\t\t\t\t2.Japan" << endl;
		cout <<"\t\t\t\t\t\t3.Hong Kong" << endl;
        cout <<"\t\t\t\t\t\t4.Nepal " << endl ;
        cout << "\t\t\t\t\t\t------------------\n"<<endl;
        cout << "\t\t\t\t\t\tEnter your destination : " ;
        cin >> destination_int;

       system("cls");

       if((source_int==1 && destination_int==2) || (source_int==2 && destination_int==1))
        {

            cout << "\t\t\t\t\t\tAvailable flights" << endl;
            cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
            cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tNepal Airline\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "\t\t\t\t\t\t2.\tEmirates\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "\t\t\t\t\t\t3.\tsingapore\t22:00\t\t02:10\t\tRs.12,500\n";



        }

        else if((source_int==1 && destination_int==3) || (source_int==3 && destination_int==1))
        {
           cout << "\t\t\t\t\t\tAvailable flights" << endl;
           cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
            cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tNepal Airline\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "\t\t\t\t\t\t2.\tEmirates\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "\t\t\t\t\t\t3.\tsingapore\t22:00\t\t02:10\t\tRs.12,500\n";
        }


        else if((source_int==1 && destination_int==4) || (source_int==4 && destination_int==1))
        {
            cout << "\t\t\t\t\t\tAvailable flights" << endl;
            cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
            cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tNepal Airline\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "\t\t\t\t\t\t2.\tEmirates\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "\t\t\t\t\t\t3.\tSingapore\t22:00\t\t02:10\t\tRs.12,500\n";

        }

        else if((source_int==2 && destination_int==3) || (source_int==3 && destination_int==2))
        {
          cout << "\t\t\t\t\t\tAvailable flights" << endl;
          cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
            cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tNepal Airline\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "\t\t\t\t\t\t2.\tEmirates\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "\t\t\t\t\t\t3.\tSingapore\t22:00\t\t02:10\t\tRs.12,500\n";
        }


        else if((source_int==2 && destination_int==4) || (source_int==4 && destination_int==2))
        {
           cout << "\t\t\t\t\t\tAvailable flights" << endl;
           cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
            cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tNepal Airline\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "\t\t\t\t\t\t2.\tEmirates\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "\t\t\t\t\t\t3.\tSingapore\t22:00\t\t02:10\t\tRs.12,500\n";

        }
        else if((source_int==3 && destination_int==4) || (source_int==4 && destination_int==3))
         {
           cout << "\t\t\t\t\t\tAvailable flights" << endl;
           cout<<"\t\t\t\t\t\t-------------------------------------------------------"<<endl;
            cout << "\t\t\t\t\t\tS.N\tAirlines\tDeparture\tArrival\t\tPrice\n"<<endl;
            cout << "\t\t\t\t\t\t1.\tNepal Airline\t04:10\t\t08:30\t\tRs.14,010\n";
            cout << "\t\t\t\t\t\t2.\tEmirates\t14:00\t\t18:05\t\tRs.15,120\n";
            cout << "\t\t\t\t\t\t3.\tSingapore\t22:00\t\t02:10\t\tRs.12,500\n";

        }
        else if(source_int==destination_int)
        {
            cout << "\n\t\t\t\t\t\tSource and destination are the same.Please enter try again.\n\n\n" << endl;
            cout<<"\n\n\n"<<endl;
            return travel_details_int();
        }
        else
        {
            cout <<"\n\t\t\t\t\t\tYou have entered the wrong input entered.Try again\n\n\n" << endl;
            return travel_details_int();
        }
        }





  
    int select_flight_int()
    {
        cout << "\n\t\t\t\t\t\tEnter your choice : " ;
        cin >> choice_int;
        switch(choice_int){
     
        case 1:
            cout << "\n\t\t\t\t\t\tYour travel information" <<endl;

            cout<<"\t\t\t\t\t\t-----------------------------\n"<<endl;
            cout << "\t\t\t\t\t\tFlight name :Nepal Airline" << endl;
            strcpy(flight_int,"Nepal Airline");
            cout << "\t\t\t\t\t\tDeparture Time: 04:10" << endl;
            cout << "\t\t\t\t\t\tArrival Time: 08:30" << endl;
            strcpy(int_dep,"04:10");
            strcpy(int_arr,"08:30");
            break;
        case 2:
               cout << "\n\t\t\t\t\t\tYour travel information" << endl;
              cout<<"\t\t\t\t\t\t-----------------------------\n"<<endl;
               cout << "\t\t\t\t\t\tFlight name:Emirates" << endl;
               strcpy(flight_int,"Emirates");
               cout << "\t\t\t\t\t\tDeparture Time: 14:00" << endl;
               cout << "\t\t\t\t\t\tArrival Time: 18:05" << endl;
               strcpy(int_dep,"14:00");
               strcpy(int_arr,"18:05");

               break;
        case 3:
            cout << "\n\t\t\t\t\t\tYour travel information" << endl;
            cout<<"\t\t\t\t\t\t-----------------------------\n"<<endl;
            cout << "\t\t\t\t\t\tFlight name:Singapore" << endl;
            strcpy(flight_int,"Singapore");
            cout << "\t\t\t\t\t\tDeparture Time : 22:00" << endl;
            cout << "\t\t\t\t\t\tArrival Time: 02:10" << endl;
            strcpy(int_dep,"22:00");
            strcpy(int_arr,"02:10");
            break;
        default:
            cout << "\n\t\t\t\t\t\tYou have entered the wrong input entered.Try again\n\n\n" << endl;
            return select_flight_int();}

        }




    //Function for selecting international flight meal
    int int_meal(){

        system("cls");

        cout<<"\t\t\t\t\t\t------------------"<<endl;

		cout <<"\t\t\t\t\t\tMeal preferences "<<endl;

		cout<<"\t\t\t\t\t\t------------------"<<endl;
		cout << "\t\t\t\t\t\t1.Vegetarian meal: Rs.450 \n";
		cout << "\t\t\t\t\t\t2.Non-Vegetarian meal : Rs.500\n";
		cout << "\t\t\t\t\t\t3.No meal\n\n";

		cout <<"\t\t\t\t\t\tEnter your choice :  ";
		cin >> int_meal_choice;

		while(int_meal_choice>3 ||int_meal_choice<1){
		cout<<"\t\t\t\t\t\tYou have entered the wrong input.Please enter a number between 1 and 3";
		cin>>int_meal_choice;
		}
        {

        if (int_meal_choice== 1){

		strcpy(meal2,"vegetarian meal");
		}

		else if (int_meal_choice == 2){
		strcpy(meal2,"non-vegetarian meal");
		}

		else{
		strcpy(meal2,"no meal");


		}
        }
        cout<<"\t\t\t\t\t\tYou have chosen "<<meal2<<endl;

        }

};

int int_booking::int_pnr=200;


class passenger: public dom_booking,public int_booking
{



protected:
    char name[100],email[50],gender[20],pass_no[30],contact_no[30];

public:

   

    void passenger_details(int x)


   
    {
        system("CLS");
         if(x==1)
        { travel_details_dom();
          select_flight_dom();

          dom_meals();
        }
          else
          {  travel_details_int();
             select_flight_int();

             int_meal();
          }

        system("CLS");
        cout << "\n\n\n\t\t\t\t\t\tEnter the required details:\n";
        cout<<"\t\t\t\t\t\t------------------------------------\n"<<endl;
        cin.ignore();
        cout << "\t\t\t\t\t\tEnter your name:";
        cin.getline (name,100);
        
        cout << "\t\t\t\t\t\tEnter your email ID :";
        cin.getline( email,50);
        cout << "\t\t\t\t\t\tEnter your gender:";
        cin >> gender;
        cout<<"\t\t\t\t\t\tEnter your contact number:";
        cin>>contact_no;
        cout<<"\t\t\t\t\t\tEnter your passport number:";
        cin>>pass_no;
    }

    
    void display_details(){
        system("CLS");
        cout << "\n\n\t\t\t\t\t\tPassenger details\n";
        cout<<"\t\t\t\t\t\t--------------------------------------\n"<<endl;;
        cout << "\t\t\t\t\t\tName:" <<name<< endl;
        cout << "\t\t\t\t\t\tGender:" << gender << endl;
        cout << "\t\t\t\t\t\tEmail ID:" << email << endl;
        cout << "\t\t\t\t\t\tContact No.:" << contact_no << endl;
        cout<<"\t\t\t\t\t\tPassport number :"<<pass_no<<endl;
    }


   
     int getpnr_dom()
        {
            return d_pnr;
        }


    
     int getpnr_int()
     {
         return i_pnr;
     }


    

     void disp_dom()
     {
         cout<<"\t\t\t\t\t\tPNR :" << d_pnr << endl;
         cout<<"\t\t\t\t\t\tFlight:" << flight_dom << endl;
         cout<<"\t\t\t\t\t\tName:" <<name << endl;
         cout<<"\t\t\t\t\t\tBoarding date:" << date_dom << endl;
         cout<<"\t\t\t\t\t\tDeparture Time:" << dom_dep << endl;
         cout<<"\t\t\t\t\t\tArrival Time:" << dom_arr<<endl;
         cout<<"\t\t\t\t\t\tMeal choice:"<<meal1<<endl;
     }

     

      void disp_int()
     {
         cout<<"\t\t\t\t\t\tPNR:" << i_pnr << endl;
         cout<<"\t\t\t\t\t\tFlight:" << flight_int << endl;
         cout<<"\t\t\t\t\t\tName:" << name<<endl;
         cout<<"\t\t\t\t\t\tBoarding date:" << date_int << endl;
         cout<<"\t\t\t\t\t\tDeparture Time:" << int_dep << endl;
         cout<<"\t\t\t\t\t\tArrival Time:" << int_arr<<endl;
         cout<<"\t\t\t\t\t\tMeal choice:"<<meal2<<endl;
     }

};



class payment{



        
        protected:
            int choice3,bank,bank1,card,date,cvv,user_id;
            char password[30];

        public:

           
            void payment_details(passenger p)

            {
                int total_cost=0;
                if(p.getpnr_dom()>100)
               
                { 
          
                switch(p.choice_dom)
                {
                case 1:
                if(p.dom_meal_choice==1)
				{
					total_cost=5000+350;
					
				
					}	
					else if(p.dom_meal_choice==2)
					{
						total_cost=5000+450;
					
					}
					else{
						total_cost=5000;
				
					}
					break;
				case 2:
					if(p.dom_meal_choice==1)
				{
					total_cost=5500+350;
					//total_cost+=350;
					
					}	
					else if(p.dom_meal_choice==2)
					{
						total_cost=5500+450;
					
					}
					else{
						total_cost=5500;
					
					}
					break;
                case 3:
                	if(p.dom_meal_choice==1)
				{
					total_cost=6000+350;
				
					
					}	
					else if(p.dom_meal_choice==2)
					{
						total_cost=6000+450;
					
					}
					else{
						total_cost=6000;
					
					}
					break;
            }
				}
				
				 if(p.getpnr_int()>200)
			
				{
					
				switch(p.choice_int)
                {
                case 1:
                if(p.int_meal_choice==1)
				{
					total_cost=14010+450;
					
					
					}	
					else if(p.int_meal_choice==2)
					{
						total_cost=14010+500;
					}
					else{
						total_cost=14010;
					}
					break;
				case 2:
					if(p.int_meal_choice==1)
				{
					total_cost=15120+450;
				
					}	
					else if(p.int_meal_choice==2)
					{
						total_cost=15120+500;
					}
					else{
						total_cost=15120;
					}
					break;
                case 3:
                	if(p.int_meal_choice==1)
				{
					total_cost=12500+450;
					
					}	
					else if(p.int_meal_choice==2)
					{
						total_cost=12500+500;
						
					}
					else{
						total_cost=12500;
					
					}
					break;
            }
        }
            else
            {
            	cout<<"\t\t\t\t\t\tInvalid PNR."<<endl;
			}
			
            
				
				system("CLS");
        cout << "\t\t\t\t\t\t********* BILL *********\n";
        cout << "\t\t\t\t\t\tTotal Cost: Rs. " << total_cost << endl;
        cout << "\t\t\t\t\t\t************************\n";
				yellow:
			    cout << "\n\n\t\t\t\t\t\t************************";
                cout << "\n\t\t\t\t\t\t\tMode of payment\n";
                cout<<"\t\t\t\t\t\t*************************\n";
                cout << "\n\t\t\t\t\t\t1.Debit Card \n\t\t\t\t\t\t2.Credit Card \n\t\t\t\t\t\t3.Net Banking";
                cout << "\n\n\t\t\t\t\t\tEnter your choice :";
                cin >> choice3;
                if(choice3>3)
                {
                	cout<<"\t\t\t\t\t\tInvalid! Please enter choice between 1 to 3"<<endl;
                	goto yellow;
				}
                switch(choice3)
                {
                case 1:
                    cout << "\n\t\t\t\t\t\tEnter card number:";
                    cin >> card;
                    cout << "\n\t\t\t\t\t\tEnter expiry date:";
                    cin >> date;
                   
                    cout << "\n\t\t\t\t\t\tTransaction Successful\n";
                    break;
                case 2:
                    cout << "\n\t\t\t\t\t\tEnter card number:";
                    cin >> card;
                    cout << "\n\t\t\t\t\t\tEnter expiry date:";
                    cin >> date;
                    cout << "\n\t\t\t\t\t\tTransaction Successful\n";
                    break;
                case 3:
                	green:
                    cout << "\n\t\t\t\t\t\tBanks Available:\n\t\t\t\t\t\t----------- \n\t\t\t\t\t\t1.Prime Bank \n\t\t\t\t\t\t2.Laxmi Bank \n\t\t\t\t\t\t3.Nepal Rastra Bank \n\t\t\t\t\t\t4.Nabil Bank";
                    cout << "\n\t\t\t\t\t\tSelect your bank:";
                    cin >> bank;
                    if(bank>4)
                {
                	cout<<"\n\t\t\t\t\t\t Invalid! Please Select the choice from 1 to 4"<<endl;
                	goto green;
				}
                    
                    cout << "\n\t\t\t\t\t\tEnter user id:";
                    cin >> user_id;
                    cout << "\n\t\t\t\t\t\tEnter password:";
                    cin >> password;
                    cout<<"\t\t\t\t\t\t-----------------------------";
                    cout << "\n\t\t\t\t\t\tTransaction Successful\n";
                    cout<<"\t\t\t\t\t\t-----------------------------";
                    break;
                default:
                    cout << "\n\t\t\t\t\t\tWrong input entered.\nTry again\n";
                    return payment_details(p);
                }
            }

        };



            
            void createfile_dom(passenger y)
                {  ofstream file_out("Domestic_flight_details.DAT",ios::binary|ios::app);
                    
                   file_out.write((char*)&y,sizeof(y));
                   
                   file_out.close();
                }
            
                void dom_cancelticket(int x)
                {  passenger y;
                    int f=0;
                   ifstream file_in("Domestic_flight_details.DAT",ios::binary|ios::app);
                   ofstream file_out("Domestic_flight_details1.DAT",ios::binary|ios::app);
                   file_in.read((char *)&y,sizeof(y));
                   while(file_in)
                   {  
                     if(y.getpnr_dom()!=x)
                      file_out.write((char *)&y,sizeof(y));
                      else
                     {   
                         y.disp_dom();
                         cout<<"\n\t\t\t\t\t\tYour  ticket has been deleted\n";
                       
                         f++;
                     }
                     
                     file_in.read((char *)&y,sizeof(y));
                   }
                   if(f==0)
                    cout<<"\t\t\t\t\t\tTicket not found\n";
                   file_out.close();
                   file_in.close();

                   
                   remove("Domestic_flight_details.DAT");
                    
                   rename("Domestic_flight_details1.DAT","Domestic_flight_details.DAT");

                }

                void dom_checkticket(int x)
                {  passenger y;
                   int f=0;
                   ifstream file_in("Domestic_flight_details.DAT",ios::binary);
                   file_in.read((char *)&y,sizeof(y));
                   while(file_in)
                   { 
                     if(y.getpnr_dom()==x)

                     {cout<<"\n\t\t\t\t\t\tTicket details\n"<<endl;
                      y.disp_dom();

                      f++;
                      break;
                     }
                      
                     file_in.read((char *)&y,sizeof(y));

                   }
                   file_in.close();
                   
                   if(f==0)
                   cout<<"\t\t\t\t\t\tThis PNR number does not exist"<<endl;

                }
           
            void createfile_int(passenger y)
            {  ofstream  file_out("International.DAT",ios::binary|ios::app);
                file_out.write((char*)&y,sizeof(y));
                file_out.close();
            }
            
            void int_cancelticket(int x)
            {  passenger y;
               int f=0;
               ifstream file_in("International.DAT",ios::binary|ios::app);
               ofstream  file_out("International1.DAT",ios::binary|ios::app);
              file_in.read((char *)&y,sizeof(y));
               while(file_in)
               {
                 if(y.getpnr_int()!=x)
                    
                  file_out.write((char *)&y,sizeof(y));
                  else
                 { 
                     y.disp_int();
                     cout<<"\t\t\t\t\t\tYou ticket has been deleted\n";
                    
                     f++;
                 }
                 
                file_in.read((char *)&y,sizeof(y));
               }
               
               if(f==0)
                cout<<"\n\t\t\t\t\t\tTicket not found\n";
               file_in.close();
               file_out.close();
               
               remove("International.DAT");
              
               rename("International1.DAT","International.DAT");

            }


            void int_checkticket(int x)
            {  passenger y;
               int f=0;
               ifstream file_in("International.DAT",ios::binary);
              file_in.read((char *)&y,sizeof(y));
               while(file_in)
               {
                 
                 if(y.getpnr_int()==x)
                 {cout<<"\n\t\t\t\t\t\tTicket details\n"<<endl;
                  y.disp_int();
                  f++;
                  break;
                 }
                 
                 file_in.read((char *)&y,sizeof(y));

               }
              file_in.close();
              
               if(f==0)
               cout<<"\t\t\t\t\t\tThis PNR number does not exist"<<endl;

            }
int main(){
   
    login obj;
    class dom_booking d;
    class int_booking i;
    class passenger p;
    class payment pay;
    int flag1,flag2;
int choice,choice1,choice2,choice3,input;
    char input1;
    
    while(true) {
    	up:
    	system("cls");
    	cout<<"\t\t\t\t\t\t***********************************************************************\n\n\n";
        cout<<" \t\t\t\t\t\t                     WELCOME TO MAIN MENU                                      \n\n";
        cout<<"\t\t\t\t\t\t*******************        MENU        *******************************\n\n";
        cout << "\t\t\t\t\t\t1. LOGIN\n";
        cout << "\t\t\t\t\t\t2. REGISTER\n";
        cout << "\t\t\t\t\t\t3. FORGET\n";
        cout << "\t\t\t\t\t\t4. EXIT\n";
        cout << "\t\t\t\t\t\tEnter your choice: ";

        cin >> choice;

        switch(choice) {
        
            case 1:
                flag1=obj.log_in();
                if(flag1==1){
				
           system("cls");    
        printf("\n\n\n\t\t\t\t\t\t\t\t\tLogin successful\n");
         int i;
        cout<<"\n\n\n\t\t\t\t\t\t\t\t\tLogging in ";
        for(i=1;i<4;i++){
        	cout<<".";
        	sleep(1);
		}
        
    
			   while(1){
	flag2:		  
  system("CLS");

 cout<<"\t\t\t\t\t\tAIRLINE RESERVATION SYSTEM"<<endl;
 cout<<"\t\t\t\t\t\t--------------------------------"<<endl;
 cout << "\t\t\t\t\t\t1.Book flight \n\t\t\t\t\t\t2.Cancel fight \n\t\t\t\t\t\t3.Check your flight ticket \n\t\t\t\t\t\t4.Exit" << endl;
 cout<<"\t\t\t\t\t\t--------------------------------"<<endl;
 cout<<"\t\t\t\t\t\tEnter your choice:";
 cin>>choice;
 if(choice>4)
 {
 	cout<<"Please enter between 1 to 4."<<endl;
 	goto flag2;
 }


 
 switch(choice)
      {
          case 1:
          	flag3:
          system("CLS");
              cout<<"\t\t\t\t\t\tPlease enter your choice"<<endl;
              cout << "\t\t\t\t\t\t1.Domestic Fights\n\t\t\t\t\t\t2.International Flights" << endl;
              cout << "\n\t\t\t\t\t\tEnter your option" ;
              cin >> choice1;
              if(choice1>2)
 {
 	system("cls");
 	cout<<"\n\t\t\t\t\t\tPlease enter between 1 to 2."<<endl;
 	sleep(2);
 	goto flag3;
 	
 }

            switch(choice1){

                     

                      case 1:
                            p.generate_dom_pnr();
                            p.passenger_details(1);
                            pay.payment_details(p);
                            p.display_details();
                            p.disp_dom();
                            createfile_dom(p);
                            break;


                      
                       case 2:
                            p.generate_int_pnr();
                            p.passenger_details(2);
                            pay.payment_details(p);
                            p.display_details();
                            p.disp_int();
                            createfile_int(p);
                            break;

                       default:
                        cout << "\t\t\t\t\t\tWrong input.\n\nPlease enter 1 for domestic flight booking and 2 for international flight booking" << endl;
                        return main();
                  }
              break;

             
              case 2:

                  system("CLS");
                  cout << "\t\t\t\t\t\t1.Domestic Fights \n\t\t\t\t\t\t2.International Flights" << endl;
                     cout << "\n\t\t\t\t\t\tPlease enter your option:" ;
                     cin >> choice2;
                     
                      if(choice2==1)
                    {
                       cout << "\t\t\t\t\t\tEnter your PNR number :";
                       cin>>input;
                       dom_cancelticket(input);
                    }
                     else if(choice2==2)
                   {  cout << "\t\t\t\t\t\tEnter your PNR number :" ;
                      cin>>input;
                      int_cancelticket(input);
                   }
                   else
                   {
                       cout << "\n\t\t\t\t\t\tWrong input.\n";
                       sleep(2);
                      
                      goto flag2;
                   }
                   break;

             
              case 3:
              system("CLS");
                      cout << "\n\t\t\t\t\t\tCheck your tickets" << endl;
                      cout<<"\t\t\t\t\t\t------------------------"<<endl;
                      cout << "\t\t\t\t\t\t1.Domestic Fights \n\t\t\t\t\t\t2.International Flights" << endl;
                      cout << "\n\t\t\t\t\t\tEnter your option :" ;
                      cin >> choice3;
                      if(choice3==1)
                      {cout << "\n\t\t\t\t\t\tEnter your PNR number :" ;
                       cin>>input;
                       dom_checkticket(input);}
                      else if(choice3==2)
                      {  cout << "\n\t\t\t\t\t\tEnter your PNR number :" ;
                         cin>>input;
                         int_checkticket(input);
                      }
                       else
                   {
                       cout << "\n\t\t\t\t\t\tWrong input.";
                      
                      sleep(2);
                      goto flag2;
                   }
                   break;
                case 4:
                system("CLS");

                return 0;


                default:
                cout << "\t\t\t\t\t\tWrong input.Please enter the correct input \n\n\n\n" << endl;
                return main();
          }
        cout<<"\n\n\n\t\t\t\t\t\tDo you wish to continue? (Y/N) :" ;
        cin >> input1;
  
                if(input1=='Y' || input1=='y')
            {
            goto flag2;
			}
                else
				
            {
            	exit(0);
			}
            }
        }
        
        	else
    {
    cout<<"\n\t\t\t\t\t\t\t\tLogin failed! Invalid username or password.\n"<<endl;
       
        sleep(2);
        goto up;
    }
        
		
            case 2:
                obj.register_user();
                break;
            case 3:
                obj.forget();
                break;
            case 4:
                exit(0);
            default:
                cout << "\t\t\t\t\t\tInvalid input! Please try again." << endl;
        }
    }
    return 0;
    
}

