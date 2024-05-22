#include <iostream>
#include<string>
using namespace std;
class Bankaccount{
    public:
    string name,acc_type;
    int acc_num,bal,amt,cur_bal;
    public:
    void assignvalue(){
        cout<<"Enter the Details Below"<<endl;
        cout<<"Borrower Name:";
        getline(cin,name);
        cout<<"Accouny Number:";
        cin>>acc_num;
        cout<<"Acoount type:";
        cin>>acc_type;
    }
        void deposit(){
            cout<<"Enter Deposite amount:"<<endl;
            cin>>amt;
            cout<<endl<<"Borrow Name:"<<name<<endl<<"Current Balance:"<<cur_bal+amt<<endl;
}
void checkbalance(){
    cur_bal=50000;
    cout<<endl<<"Your Current Balance is:"<<cur_bal<<endl;
}
void withdraw(){
    cout<<"Enter Withdrawl Ammount:";
    cin>>amt;
    cout<<"Borrower name:"<<name<<endl<<"Current Balance:"<<cur_bal-amt<<endl;
}
};
    int main (){
        Bankaccount ba;
        ba.assignvalue();
        int choice;
    cout<<endl<<"1.Depositiion";
    cout<<endl<<"2.Withdrawl";
    cin>>choice;
    switch(choice){
        case 1:
        ba.checkbalance();
        ba.deposit();
        break;
        case 2:
        ba.checkbalance();
        ba.withdraw();
        break;
 }
 }
    
