//Yang Zhang
//Lecture 5
//10.7.2024

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main() {
    //Variables
    float intitalBalance; //Bank balance at the start of the day
    int amountOfTransactions; //Amount of transactions per day.
    float costOfTransaction; 
    string cardType; //The card type; changes on user input
    float debit;
    float credit;

    //Prompting user
    cout << "Please input your intital bank balance: ";
    cin >> intitalBalance;
    cout << "Please input the amount of transactions completed in a day: ";
    cin >> amountOfTransactions;

    cout << endl; //Seperates the output to make it more readable
    cout << "____________________________________" << endl;
    cout << endl;
    cout << fixed << setprecision(2) << endl; //Makes the decimal place round to the second place

    //Loop for the amount of transactions per day
    while (amountOfTransactions != 0)
    {
        cout << "Please input the card type used for this transaction (Debit or Credit): "; //Prompting the user for the card type
        cin >> cardType;
        
        if (cardType == ("Debit")) //If the card type is a Debit card do this:
        {
            cout << "What was the amount of the transaction? "; //Prompts user for the cost of the transaction
            cin >> costOfTransaction; //inputs the cost of the transaction
            intitalBalance = intitalBalance - costOfTransaction; //The current balance is equal to the intital balance minus the cost of transaction
            amountOfTransactions = amountOfTransactions - 1; //This is to make sure the loop doesn't loop forever
            debit = debit + costOfTransaction;

            cout << fixed << setprecision(2) << endl;
            cout << "Balance after transaction: $" << intitalBalance << endl; //Prints the balance after the transaction

            cout << endl; //Seperates the output to make it more readable
            cout << "____________________________________" << endl;
            cout << endl;
        }

        if (cardType == ("Credit")) //If the card type is a credit card do this:
        {
            cout << "What was the amount of the transaction? "; //Prompts user for the cost of the transaction
            cin >> costOfTransaction; //inputs the cost of the transaction
            intitalBalance = intitalBalance + costOfTransaction; //The current balance is equal to the intital balance minus the cost of transaction
            amountOfTransactions = amountOfTransactions - 1; //This is to make sure the loop doesn't loop forever
            credit = credit + costOfTransaction;

            cout << fixed << setprecision(2) << endl;
            cout << "Balance after transaction: $" << intitalBalance << endl; //Prints the balance after the transaction

            cout << endl; //Seperates the output to make it more readable
            cout << "____________________________________" << endl;
            cout << endl;
        }
    }

    //Printing the total debit and credit amounts for the day
    cout << "The total debit amount today is $" << debit << " and the total credit amount today is $" << credit << endl;
    cout << "The final bank balance today is $" << intitalBalance << endl;

    return 0;

}

/*
Please input your intital bank balance: 1000
Please input the amount of transactions completed in a day: 3

____________________________________


Please input the card type used for this transaction (Debit or Credit): Credit
What was the amount of the transaction? 500

Balance after transaction: $1500.00 

____________________________________

Please input the card type used for this transaction (Debit or Credit): Debit
What was the amount of the transaction? 1000

Balance after transaction: $500.00

____________________________________

Please input the card type used for this transaction (Debit or Credit): Credit
What was the amount of the transaction? 150.25

Balance after transaction: $650.25

____________________________________

The total debit amount today is $1000.00 and the total credit amount today is $650.25
The final bank balance today is $650.25
*/