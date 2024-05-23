
#include <iostream>
using std::cout, std::cin;

int accountBalance = 100;

int amountOfTransaction;

void withdraw();
void deposit();
void retry();

int main()
{
    char transactionAction;
    std::string message = "What will you like to do?, type (w) to withdraw and (d) to deposit: ";
    cout << message;
    cin >> transactionAction;

    switch (transactionAction)
    {
    case 'w':
        withdraw();
        break;

    case 'd':
        deposit();
        break;

    default:
        if (transactionAction != 'w' || transactionAction != 'd')
        {
            retry();
        }
        break;
    }
    return 0;
}

void withdraw()
{
    cout << "******************************************************" << std::endl;
    cout << "Balance: " << accountBalance << std::endl;
    cout << "How much do you want to withdraw?: ";
    cin >> amountOfTransaction;
    int withdrawLogic = accountBalance - amountOfTransaction;
    int newBalance = withdrawLogic;
    if (newBalance < 0)
    {
        cout << "⚠ You don't have enough funds to complete this transaction, Kindly fund your account" << std::endl;
        cout << "❌ Transaction Unsuccessful" << std::endl;
        cout << "******************************************************" << std::endl;
    }
    else if (amountOfTransaction > accountBalance)
    {
        cout << "⚠ You don't have enough funds to complete this transaction, Kindly fund your account" << std::endl;
        cout << "❌ Transaction Unsuccessful" << std::endl;
        cout << "******************************************************" << std::endl;
    }
    else
    {
        cout << "✅ Transaction Successful" << std::endl
             << "New Balance: " << withdrawLogic << std::endl;
        cout << "******************************************************" << std::endl;
    }
}

void deposit()
{
    cout << "******************************************************" << std::endl;
    cout << "Balance: " << accountBalance << std::endl;
    cout << "How much do you want to deposit?: ";
    cin >> amountOfTransaction;
    int withdrawLogic = accountBalance + amountOfTransaction;
    int newBalance = withdrawLogic;
    cout << "✅ Transaction Successful" << std::endl;
    cout << "New Balance: " << withdrawLogic << std::endl;
}

void retry()
{
    main();
}
