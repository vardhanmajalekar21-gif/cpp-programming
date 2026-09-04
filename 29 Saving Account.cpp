#include <iostream>
using namespace std;
class Bank
{
public:
    class SavingAccount
    {
        int accNo;
        string name;
        float balance;
        float intRate;
    public:
        // Parameterized Constructor
        SavingAccount(int a, string n, float b, float r)
        {
            accNo = a;
            name = n;
            balance = b;
            intRate = r;
        }
        void deposit(float amount)
        {
            balance = balance + amount;
        }
        void withdraw(float amount)
        {
            if (amount <= balance)
                balance = balance - amount;
            else
                cout << "Insufficient Balance!" << endl;
        }
        void calculateInterest()
        {
            float interest = balance * intRate / 100;
            balance = balance + interest;
        }
        void display()
        {
            cout << "\n----- Account Details -----" << endl;
            cout << "Account No: " << accNo << endl;
            cout << "Name: " << name << endl;
            cout << "Balance: " << balance << endl;
            cout << "Interest Rate: " << intRate << "%" << endl;
        }
    };
};
int main()
{
    Bank::SavingAccount sa(101, "Rahul", 10000, 5);

    sa.deposit(2000);
    sa.withdraw(3000);
    sa.calculateInterest();

    sa.display();   // Only one display

    return 0;
}
