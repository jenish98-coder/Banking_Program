/*In this program i am creating a banking system
here i will deposit money,withdraw money and show a balance*/

#include<iostream>
#include<iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance=0;
    int choice=0;

    do{
    std::cout<<"$$$$$$$$$$$$$$$$$$$$$$$\n ";
    std::cout<<"Enter the choice\n";
    std::cout<<"1.Show the Balance\n";
    std::cout<<"2.Deposit Money\n";
    std::cout<<"3.Withdraw Money\n";
    std::cout<<"4.OUT\n";
    std::cin>>choice;

    std::cin.clear();
    fflush(stdin);

    switch(choice){

        case 1: showBalance(balance);
                break;
        
        case 2: balance += deposit();
                showBalance(balance);
                break;

        case 3: balance-= withdraw( balance);
                showBalance(balance);
               break;

        case 4:std::cout<<"Thankyou for Choosing Us";
               break;

         default:std::cout<<"Please enter valid choice";

        

        }

    }

    while(choice!=4);
    

    return 0;
}

void showBalance(double balance){
std::cout<<"Your balance is: Rs."<<std::setprecision(2)<<std::fixed<<balance<<'\n';
}

double deposit(){
    double amount=0;

    std::cout<<"Enter amount to be deposited:";
    std::cin>>amount;
    if(amount>0){
return amount;
    }
    else{
       std::cout<<"That is the invalid amount"; 
       return 0;
    }
}

double withdraw(double balance){
    double amount=0;

    std::cout<<"Enter amount to be withdrawn";
    std::cin>>amount;


if(amount>balance){
    std::cout<<"insufficient fund\n";
    return 0;
    }

    else if(amount<0){
   std::cout<<"please enter the valid amount";
   return 0;
    }

    
    else{
     return amount;
    }

    

}
