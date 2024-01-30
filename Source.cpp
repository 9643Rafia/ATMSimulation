#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <process.h>
#include <dos.h>

using namespace std;

class Bank {
public:
    int choice;

    Bank(){}
    // Constructor for Bank class
    Bank(int ch) {
        choice = ch;
    }

    void DisplayMenu() {
        system("Color F5");
        cout << "\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\ WELCOME TO ATM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
        cout << "\t\t\xdb\t\t\t\t\t\t\t\t\t\xdb";
        cout << "\n\t\t\xdb-----------------------------------------------------------------------\xdb\n";
        cout << "\t\t\xdb\t\t\t\t\t\t\t\t\t\xdb";
        //Prompt to show today's date
        cout << "\n\t\t\xdb\t\t\t\t\t\t\t\t\t\xdb\n";
        cout << "\t\t\xdb\t\t\t\t\t\t\t\t\t\xdb";
        cout << "\n\t\t\xdb\t\tCurrent date :      ";
        //time_t now;
        //time(&now);
       // printf("%s", ctime(&now));;
        cout << "\t\t\xdb\t\t\t\t\t\t\t\t\t\xdb";
        cout << "\n\t\t\xdb\t\t\t\t\t\t\t\t\t\xdb\n";
        cout << "\t\t\xdb\t\t\t\t\t\t\t\t\t\xdb";
        //Show date and time function

        //Give space for the function of date and time
        cout << "\n\t\t\xdb-----------------------------------------------------------------------\xdb\n";
        cout << "\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
        //================================================================================================== 
    }
    void Exit() {
        system("cls");

        cout << "\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ ATM ACCOUNT EXIT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
        system("PAUSE");
        exit(1);
    }
};

class Customer {
public:
    int id;
    char FirstName;
    char LastName;
    double recent_amnt;
    char temp;
    int pin[10];

    // Default constructor for Customer class
    Customer() {
    }

    // Parameterized constructor for Customer class
    Customer(int iD, char fn, char ln, double r_amnt, char t, int pinn) {
        id = iD;
        FirstName = fn;
        LastName = ln;
        recent_amnt = r_amnt;
        temp = t;
        pin[0] = pinn;

    }

    // Member function to write customer data to a file
    void CustomerFile(Customer cust[], size_t size,
        const char* path) {
        std::ofstream bank_stream(path); //open file
        if (!bank_stream) //file could not open
            return; //exit function, go back to who ever called 
        for (int i = 0; i < size; i++)
            bank_stream << cust[i].id << ' ' << cust[i].FirstName << ' ' << cust[i].LastName << ' ' << cust[i].pin << ' ' << cust[i].recent_amnt << endl; //write data line to file
        bank_stream.close(); //close file
    }
};

class Withdrawal : public Bank {
public:
    double amount;
    int choice1;

    // Default constructor for Withdrawal class
    Withdrawal() {}

    // Parameterized constructor for Withdrawal class
    Withdrawal(double amnt, int ch1) {
        amount = amnt;
        choice1 = ch1;
    }

    void DisplayMeno() {
        cout << "\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\ WITHDRAWAL OPTIONS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
        cout << "\t\t\xdb\t\t\t\t\t\t\t\t\t\xdb";
        cout << "\n\t\t\xdb-----------------------------------------------------------------------\xdb\n";
        cout << "\t\t\xdb\t\t\t\t\t\t\t\t\t\xdb";
        cout << "\n1 -  20 $";
        cout << "\n2 -  40 $";
        cout << "\n3 -  60 $";
        cout << "\n4 -  100 $";
        cout << "\n5 -  200 $";
        cout << "\n6 -  Cancel Transactions ";
        cout << "\n Choose a withdrawal option (1-6): ";
        cin >> choice1;

        switch (choice1) {
        case 1:
            Withdrawal operator - (const Withdrawal & wdraw);
            break;
        case 2:
            Withdrawal operator - (const Withdrawal & wdraw);
            break;
        case 3:
            Withdrawal operator - (const Withdrawal & wdraw);
            break;
        case 4:
            Withdrawal operator - (const Withdrawal & wdraw);
            break;
        case 5:
            Withdrawal operator - (const Withdrawal & wdraw);
            break;
        case 6:
            Bank::Exit();
            break;

        default:
            cout << "Please Enter the Correct Number Choice" << endl;
        }
    }

    // Overloaded subtraction operator for Withdrawal class
    Withdrawal operator - (const Withdrawal& wdraw) {
        Withdrawal wd;
        wd.amount = this->amount - wdraw.amount;
        return wd;
    }

    void DisplayBalance() 
    {
        // Display the account balance or recentAmnt
    // You might want to add more details here based on your requirements
        cout << "Your current balance is: " <<amount  << endl;
    }
};

class Deposit : public Bank {
public:
    double amount;

    // Default constructor for Deposit class
    Deposit() 
    {
    }

    // Parameterized constructor for Deposit class
    Deposit(double amnt) {
        amount = amnt;
    }

    // Member function to add balance
    void AddBalance() {
        cout << "Enter the amount of cash you want to Deposit: ";
        cin >> amount;
        // Add the deposited amount to the balance or update the necessary data
        // You might want to add more details here based on your requirements
        cout << "Amount " << amount << " has been deposited successfully!\n";

    }
};

class ViewBalance : public Bank {
private:
    double recentAmnt;

public:
    // Default constructor for ViewBalance class
    ViewBalance() {
    }

    // Parameterized constructor for ViewBalance class
    ViewBalance(double rAmnt) : recentAmnt(rAmnt) {
    }

    // Member function to acquire balance
    void Acquire_Balance() {
        // Retrieve and display the account balance or recentAmnt
    // You might want to add more details here based on your requirements
        cout << "Your current balance is: " << recentAmnt << endl;
    }
};

int main() 
{
   
    int e;

    Withdrawal withdr;
    Deposit depo;
    ViewBalance vB;
    Customer cust[5];
    Customer custo;
    Bank bank;

    cout << "\t\t\xB2\t\t\t\t\t\t\t\t\t\xB2";

    cout << "\n\t\t\xB2   Press 1 and Then Press Enter to Access Your Account Via Pin Number  \xB2\n";
    cout << "\t\t\xB2\t\t\t\t\t\t\t\t\t\xB2";
    cout << "\n\t\t\xB2\t\t\t\t or \t\t\t\t\t\xB2";
    cout << "\n\t\t\xB2\t\t\t\t\t\t\t\t\t\xB2";
    cout << "\n\t\t\xB2\t\t\ Press 0 and press Enter to get Help  \t\t\t\xB2\n";
    cout << "\t\t\xB2\t\t\t\t";

    int access;
    cin >> access;
    cout << "\t\t\t\t\xB2";
    switch (access) {
    case 1: //pin to access account
        system("cls");
        int i, piin;

        cout << "\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM ACCOUNT ACCESS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
        cout << "\n\nEnter Your Acc Pin Access Number! [Only one attempt is allowed]\n\n" << endl;
        cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
        cin >> piin;

        system("cls");

        if (piin == 12345)

        {
            system("cls");

            do {
                system("cls");

                cout << endl << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM Main Menu Screen \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n" << endl << endl;
                cout << "\t\tEnter [1] To  Deposit Cash" << endl;
                cout << "\t\tEnter [2] To Withdraw Cash" << endl;
                cout << "\t\tEnter [3] To Balance Inquiry" << endl;
                cout << "\t\tEnter [0] to Exit ATM" << endl << endl;
                cout << "\tPLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";
                cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

                cin >> e;
                switch (e) {
                case 1:
                    depo.AddBalance();
                    system("pause");
                    break;
                case 2:
                    withdr.DisplayMeno();
                    system("pause");
                    break;
                case 3:
                    vB.Acquire_Balance();
                    system("pause");
                    break;
                case 0:
                    bank.Exit();
                    break;
                default:
                    cout << "Please Enter the Correct Number Choice" << endl;
                }
            } while (e != 0);

            break;
        }
        else {
            system("cls");

            cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb THANK YOU \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
            cout << "\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n\n";
            cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

            system("PAUSE");
            exit(1);
        }
        //==================================================================================================    

    case 0: //pin to access account
        system("cls");
        cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT STATUS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
        cout << "\tYou must have the correct pin number to access this acount. See your\n\n";
        cout << "\t  bank representative for assistance during bank opening hours\n\n";
        cout << "\t\tThanks for, your choice today!!\n\n";
        cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
        system("PAUSE");
        exit(1);
        break;
        //==================================================================================================        
    }

    system("PAUSE");
    //customer file

    char temp;
    int count=0;
    for (int i = 0; i < 5; i++) {
        cout << "ENTER ID : ";
        cin >> cust[i].id;
        cout << "ENTER FIRST NAME : ";
        cin >> cust[i].FirstName;
        cout << "ENTER LAST NAME : ";
        cin >> cust[i].LastName;
        cout << "ENTER ACCOUNT PIN : ";
        do {
            temp = _getch();
            cout << "*";
            cust[i].pin[count] = temp;
            count++;
        } while (temp != 13 && count < 10);
        count--;
        cust[i].pin[count] = '\0';
        count = 0;
        cout << endl;

        cout << "ENTER RECENT AMOUNT/BALANCE :";
        cin >> cust[i].recent_amnt;
    }
    custo.CustomerFile(cust, 5, "CustomerData.txt");
    cin.ignore();
    cin.get();
    return 0;
}
