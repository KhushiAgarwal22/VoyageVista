
#include <iostream>
#include <bits/stdc++.h>
#include<windows.h>
#include<iomanip>
#include <conio.h>
using namespace std;

//#include "cashflowminimizer.h"
#include "flightreserve.h"

int main()
{
     
          cout<<endl;
          cout<<"\t\t\t\t\t           ~~~~~~~~~~~~~~~Welcome to Voyage Vista~~~~~~~~~~~~~~~~~\n\n";
     int choice;
     do{
          cout<<"\t\t\t\t\t------------------------------------------------------------------------\n";
          cout<<"\t\t\t\t\t                            ~~ MAIN MENU ~~ "<<endl;
          cout<<"\t\t\t\t\t------------------------------------------------------------------------\n";
          cout<<"\t\t\t\t\t  Choice 1: Flight Reservation.\n";
          cout<<"\t\t\t\t\t  Choice 2: Cash Flow Minimizer.\n";
          cout<<"\t\t\t\t\t  Choice 3: Exit\n";
          cout<<"\t\t\t\t\t------------------------------------------------------------------------\n";
          cout<<"Enter your choice: ";
          cin>>choice;
          switch(choice)
          {
              case 1: flightreserve(); break;
              case 2: //cashflow();break;
              case 3: break;
              default:
              cout<< "Enter valid choice!\n";
          }
     }while(choice!=3);
    cout<<"\t\t\t\t\t\t\t Exiting ";
    for(int wait=0;wait<5;wait++)
    {
        cout<<"..";
        Sleep(500);
    }
     cout<<"\n\t\t\t\t   Thank You, hope you had a nice experience!! :)\n"<<endl;
     return 0;
}
