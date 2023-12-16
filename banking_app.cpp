#include <iostream>
#include <algorithm>
#include <cctype>
#include <iomanip>

double depositMoney(double amount);
double withdrawMoney(double amount);
double checkBalance();
double money = 0;


int main() {
    std::cout << "Welcome to Banking App\n";
    while (true) {
        std::string function;
        std::cout << "Please enter a function(deposit | withdraw | balance): ";
        std::cin >> function;
        std::transform(function.begin(), function.end(), function.begin(), ::toupper);
        
        if (function == "DEPOSIT") {
            double amount;
            std::cout << "Insert amount: ";
            std::cin >> amount;
            if (amount <= 0) {
                std::cout << "Amount cannot be 0 or negative.\n";
            }
            else {
                std::cout << "Deposited $" << depositMoney(amount) << "\n";
            }
        }
        
        else if (function == "WITHDRAW") {
            double amount;
            std::cout << "Insert amount: ";
            std::cin >> amount;
            if (amount <= 0) {
                std::cout << "Amount cannot be 0 or negative.\n";
            }
            else {
                if (amount > money) {
                    std::cout << "Insufficient balance\n";
                }
                else {
                    std::cout << "$" << withdrawMoney(amount) << " withdrawn\n";
                }
            }
        }

        else if (function == "BALANCE") {
            std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << checkBalance() << "\n";
        }
        
        else if (function == "QUIT") {
            break;
        }
        
        else {
            std::cout << "Please enter a valid response\n";
        }
        
    }
    
    return 0;
}

double depositMoney(double amount) {
    money += amount;
    return money;
}

double withdrawMoney(double amount) {
    money -= amount;
    return amount;
}

double checkBalance() {
    return money;
}






