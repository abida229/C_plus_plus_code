//*********************************************************************
//                  HEADER FILE USED IN PROJECT
//*********************************************************************

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

//**********************************************************************
//                     MAIN FUNCTION OF PROGRAM
//**********************************************************************

int main ()
{
	
//**********************************************************************
//                          INTRODUCTION
//**********************************************************************
	
	 char intro();
	cout<<"\n\n\n\t\t\t\t\t\t   PROJECT ";
	cout<<"\n\n\t\t\t\t\t\t ATM MACHINE ";
	cout<<"\n\n\t\t\t\t\tMADE BY : THREE GROUP MEMBERS";
	cout<<"\n\n\t\t\t\t\t\t1. ABIDA BIBI ";
	cout<<"\n\n\t\t\t\t\t\t2. HARRIS AMEEN ";
	cout<<"\n\n\t\t\t\t\t\t3. SAMIK HUZBAN ";
	cout<<"\n\n\t\t\t\t\t  LAHORE GARRISION UNIVERSITY ";
	cin.get();
	system("cls");
	
//**********************************************************************
//                          VARIABLES USED
//**********************************************************************
	
    int deposit;
    int amount=9000;
    int withdraw;
    int choice;
    int pin;
   int keypin = 2002;

//***********************************************************************
//                        EXECUTION STARTS
//***********************************************************************   
    cout << "\n\n\n\t\t\t\tEnter your 4-digit pin: ";
    cin >> pin;
    
    if (pin==2002)
    {
    cout << "\n\t\t\t\tPin Approved!\n";
        
    cout << "\n\t\t\t\t************************************";
    cout << "\n\t\t\t\t* ==>   Welcome to HBL ATM         *";
    cout << "\n\t\t\t\t*       1. Check Balance           *";
    cout << "\n\t\t\t\t*       2. Withdraw                *";
    cout << "\n\t\t\t\t*       3. Deposit                 *";
    cout << "\n\t\t\t\t*       4. Exit                    *";
    cout << "\n\t\t\t\t*                                  *";
    cout << "\n\t\t\t\t************************************";
    cout << "\n\n";

//*************************************************************************
//                            CHOICES
//*************************************************************************

        int balance=1;
        int withdraw=2;
        int deposit=3;
        int Exit=4;
        
        s:                                        // s means start
        cout << "\n\t\t\t\tEnter Number : ";
        cin >> choice;
        
        if (choice==1)
        {
            cout <<"\n\t\t\t\tYour current balance is : " << amount<<"\n";
            goto s;                               // go to start
        }
        
        else if (choice==2)
        {
            cout << "\n\t\t\t\tEnter the amount you want to withdraw : ";
            cin >> withdraw;
            
            if (withdraw>amount)
            {
                cout << "\n\t\t\t\tYou don't have sufficient balance.";
                goto s;                           // go to start
            }                
            
            else
            {   
            amount=amount-withdraw;
            cout << "\n\t\t\t\tYour current balance is : " << amount<<"\n";
            
            goto s;                             // go to start
            }
        }
        
        else if (choice==3)
        {
            cout << "\n\t\t\t\tEnter the amount you want to deposit : ";
            cin >> deposit;
            
            amount=amount+deposit;
            
            cout << "\n\t\t\t\tYour current balance is : " << amount<<"\n";
            
            goto s;                           // go to start
        }
        
        else if (choice==4)
        {
            cout << "\n\t\t\t\t\tTHANK YOU!";
       }
        
    }
    
    else if (pin!=0)
    {
        cout << "\n\t\t\t\tInvalid pin!" << "\n\t\t\t\tPlease try again.";
    }
    
    return 0;
    getch();
    
}

//***************************************************************************
//                              END OF PROJECT
//***************************************************************************
