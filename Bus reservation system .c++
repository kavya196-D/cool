#include <iostream> 
#include <fstream> 
#include <cstdio> 
#include <conio.h> 
#include <cstdlib> 
#include <stdio.h> 
using namespace std; 
int count01 ; // class Passenger class Passenger 
{ 
    string str_City, str_ContactNumber, str_UserName, str_Password, str_name ; 
    protected: 
       string str_NIC ; 
    public: 
       Passenger(){} 
       Passenger(string name, string NIC, string City, string ContactNumber, string Username, string Password) ; 
       void Login(); 
       void SearchFile_and_Update() ; 
       void Deletes() ; 
       ~Passenger() ; 
}; // class Seats 
class Seats{ 
    protected: 
       int i_SeatNo ; 
    public: 
       void CheckSeatAvailabilty() ; 
}; // class Reservations 
    class Reservations : public Passenger,public Seats{ 
    protected : 
       string str_Arrival_St, str_Dep_St ; 
       int i_No_Tickets, i_Charge ; 
       double i_total ; 
    public: 
       Reservations(); // to make a reservation 
       Reservations(string NIC, string DeptSt, string ArrivalSt, int NoTickets ); 
       void SearchFile_and_Update(); // ModifyReservation Function 
       void Deletes(); // cancel reservation function 
       void Show(string, string, string, int, int, int); 
       double CalculateFee(double, int) ; 
       ~Reservations(); 
}; // class TimeTables 
class TimeTables : public Reservations{ 
    public: 
       void Show()const ; 
       ~TimeTables (); 
}; // class Payments 
class Payments: public Reservations{ 
    public : 
       void Show()const ; 
       ~Payments(); 
}; // payments - show inline void Payments ::   
