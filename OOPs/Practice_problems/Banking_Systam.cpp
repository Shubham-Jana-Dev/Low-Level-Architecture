#include <iostream>
using namespace std;
class owner{
private:
    string Name;
    double Balance;
    double Deposit;
    double Withdraw;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setBalance(double balance){
        if (balance > 0){
            Balance = balance;
        }
        else {
            Balance = 0;
            cout << "Invalid amount" << endl;
        }
    }
    double getBalance(){
        return Balance;
    }
    void setDeposit(double amount){
        if(amount>0){
        Balance += amount;
        cout << amount << " has been added to your account, and your Current balance is $ " << Balance << "." << endl;
        }
        else{
            Deposit = 0;
            cout << "Invalid amount" << "."  << endl;
        }
    }
    double getDeposit(){
        return Deposit;
    }
    void setWithdraw(double amount){
        if(amount<=Balance && amount > 0){
            Balance -= amount;
            cout << "You have just withdraw $ "<< amount << ". Now your current balance is $ "<< Balance << "."  << endl;
        }
        else{
            amount = 0;
            cout << "Insuﬃcient funds!" << "." << endl;
        }
    }
    double getWithdraw(){
        return Withdraw;
    }
    void Say_hello(){
        cout << "Hello! " << Name << " Your current Bank blance is : $ " << Balance << "."  << endl;
    }
    owner(string name, double balance){
        Name = name;
        Balance = balance;
    }
};
int main(){

    owner account_Holder1 = owner("Sneha",120000.000);
    account_Holder1.setDeposit(57000.000);
    account_Holder1.setWithdraw(4530.543);
    //owner account_Holder1;
    //account_Holder1.Name = "Shneha";

    account_Holder1.Say_hello();
    return 0;
}