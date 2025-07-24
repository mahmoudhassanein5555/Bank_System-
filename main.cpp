#define el '\n'
#define ll long long
#include <iostream>
using namespace std;
class Bank {
private :
  string name ;
  int account_number;
  char type;
  int balance_amount ;
public:
  Bank(string n ="", int acc=0 ,char t=' ',int b=0){
    name = n ;
    account_number =acc ;
    type = t ;
    balance_amount = b ;
  }
  void setname(string n ){
    name = n ;
  }
  string getname(){
    return  name;
  }
  int setbalance(int b){
    balance_amount=b;
  }
  void getbalance(){
    cout << " your balance_amount is " << balance_amount << el;
  }
  void set_accnum(int accnum){
    account_number=accnum;
  }
  int get_accnum(){
  return account_number;
  }
  char settype(char t){
   type = t;
  }
  char gettype(char t){
    return type;
   }
  void deposit(int demoney){
    balance_amount+=demoney;
  }
  void withdraw (int wimoney){
    
    if ( balance_amount < 1000 || balance_amount == 1000 )
       cout << "sorry u cannot withdraw the money " <<el;
    else    
      balance_amount -= wimoney ;
    }
  void display(){
    cout << "your name is : "<<name <<el;
    cout << "account_number is : "<<account_number<<el;
    cout << "account type is : " << type <<el;
    cout << "your balance in the account is : "<<balance_amount<<el;
  }
};
int main()
{ 
  int size ;
  cout <<"plz enter the Numbers of Clients : " ;
  cin >> size ;
  Bank* arr = new Bank[size];
  for (int i = 0 ; i<size ; i++)
  {
    
    string name ;
    cout << "enter the name "<<el;
    cin >> name ;
    int num;
    cout << "enter the num "<<el;
    cin >> num ;
    char type ;
    cout << "enter the type "<<el;
    cin >> type ;
    int balance ;
    cout << "enter the balance "<<el;
    cin >> balance;
    arr[i] = Bank(name, num, type, balance);
    cout << "enter the deposit amount " << el;
    int deposit ;
    cin >> deposit;
    arr[i].deposit(deposit);
    cout << "enter the withdrawn amount and note that --> minimum balance is 1000 " << el;
    int withdraw ;
    cin >> withdraw;
    arr[i].withdraw(withdraw);
  }
  for (int i = 0 ; i<size ; i++)
  {
    cout <<"the client " << arr[i].getname() <<" "<< i+1 <<el;
    arr[i].getbalance();
  }
  
    return 0;
}
