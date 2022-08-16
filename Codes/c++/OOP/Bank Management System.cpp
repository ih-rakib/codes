#include<bits/stdc++.h>
using namespace std;

class BankAccount
{
public :
    string account_holder;
    int account_number;
    string address;
    int age;
protected :
    int balance;
private :
    string password;

public :
    BankAccount(string account_holder,string address,int age,string password) {
        this -> account_holder = account_holder;
        this -> address = address;
        this -> age = age;
        this -> password = password;
        this -> account_number = rand()%10000000;
        this -> balance = 0;
        cout << "Your account no. is : " << this -> account_number << '\n';
    }

    int show_balance(string password) {
        if(this->password==password) {
            return balance;
        } else {
            return -1;
        }
    }

    void add_money(string password,int amount) {
        if(this->password==password) {
            if(amount < 0) {
                cout << "Invalid amount\n";
                return;
            } else {
                this->balance += amount;
                cout << "Add money successful\n";
            }
        } else {
            cout << "Password didn't match\n";
        }
    }

    void withdraw_money(string password,int amount) {
        if(this->password==password) {
            if(amount < 0) {
                cout << "Invalid amount\n";
                return;
            } else if(amount > this->balance) {
                cout << "Insufficient amount\n";
                return;
            }
            else {
                this->balance -= amount;
                cout << "Withdraw money successful\n";
            }
        } else {
            cout << "Password didn't match\n";
        }
    }

    friend class MyCash;
};

class MyCash {
protected :
    int balance;
public :
    MyCash() {
        this->balance = 0;
    }

    void add_money_from_bank(BankAccount *myAccount,string password,int amount) {
        if(myAccount->password==password) {
            if(amount < 0) {
                cout << "Invalid amount\n";
                return;
            } else if(amount > myAccount->balance) {
                cout << "Insufficient amount\n";
                return;
            } else {
                this->balance += amount;
                myAccount->balance -= amount;
                cout << "Add money from bank successful\n";
            }
        } else {
            cout << "Password didn't match\n";
        }
    }

    int show_balance() {
        return balance;
    }
};

BankAccount *create_account() {
    string account_holder,address,password;
    int age;
    cout << "CREATE ACCOUNT : \n";
    cin >> account_holder >> address >> age >> password;

    BankAccount *myAccount = new BankAccount(account_holder,address,age,password);
    return myAccount;
}

void add_money(BankAccount *myAccount) {
    string password;
    int amount;
    cout << "ADD MONEY : \n";
    cin >> password >> amount;
    myAccount->add_money(password,amount);
    cout << "Your bank balance is : " << myAccount->show_balance("abc") << '\n';
}

void withdraw_money(BankAccount *myAccount) {
    string password;
    int amount;
    cout << "WITHDRAW MONEY : \n";
    cin >> password >> amount;
    myAccount->withdraw_money(password,amount);
    cout << "Your bank balance is : " << myAccount->show_balance("abc") << '\n';
}

void add_money_from_bank(MyCash *myCash,BankAccount *myAccount) {
    string password;
    int amount;
    cout << "ADD MONEY FROM BANK : \n";
    cin >> password >> amount;
    myCash->add_money_from_bank(myAccount,password,amount);
    cout << "Your bank balance is : " << myAccount->show_balance("abc") << '\n';
    cout << "My cash balance is : " << myCash->show_balance() << '\n';
}


int main()
{
    BankAccount *myAccount = create_account();
    MyCash *myCash = new MyCash();

    while(true) {
        cout << "Select Option : \n";
        cout << "1. Add money to bank : \n";
        cout << "2. Withdraw money from bank : \n";
        cout << "3. Add money from MyCash to bank : \n";

        int option;
        cin >> option;

        if(option == 1) {
            add_money(myAccount);
        } else if(option == 2) {
            withdraw_money(myAccount);
        } else if(option == 3) {
            add_money_from_bank(myCash,myAccount);
        } else {
            cout << "Invalid Option\n";
        }

    }

    return 0;

}


/*

    Bank Management System

*/