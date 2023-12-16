# Banking App

This simple C++ program implements a basic banking application that allows users to perform deposit, withdrawal, and check balance operations. Users can interact with the application through the console.

## Features

- **Deposit Money**: Users can deposit a specified amount of money into their account.
- **Withdraw Money**: Users can withdraw a specified amount of money from their account, provided they have sufficient funds.
- **Check Balance**: Users can check their account balance.
- **Quit**: Users can exit the application.

## How to Use

1. **Run the Program**: Compile and run the C++ program using your preferred compiler.

2. **User Input**: Follow the prompts to enter a function:
    - To deposit money, type "DEPOSIT" and enter the desired amount.
    - To withdraw money, type "WITHDRAW" and enter the desired amount.
    - To check the balance, type "BALANCE".
    - To exit the application, type "QUIT".

3. **Validations**:
    - Amounts for deposit and withdrawal must be greater than zero.
    - Withdrawal is allowed only if the account has sufficient funds.

4. **Exit the Program**: Type "QUIT" when you want to exit the application.

## Code Structure

- `depositMoney(double amount)`: Deposits the specified amount into the account and returns the updated balance.
- `withdrawMoney(double amount)`: Withdraws the specified amount from the account if sufficient funds are available, returning the withdrawn amount.
- `checkBalance()`: Returns the current account balance.
- `main()`: The main program logic that handles user input, calls relevant functions, and executes the banking operations.

Feel free to explore and modify the code to suit your needs.
