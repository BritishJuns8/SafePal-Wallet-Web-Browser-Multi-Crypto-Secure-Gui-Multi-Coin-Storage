// wallet.h

#pragma once

// Define the wallet data structure and functions here.

class Wallet {
public:
    // Constructor to initialize a wallet.
    Wallet();

    // Function to generate a new wallet address.
    std::string generateAddress();

    // Function to check the balance of the wallet.
    double getBalance(const std::string& address) const;

    // Function to send funds from one wallet to another.
    bool sendFunds(const std::string& senderAddress, const std::string& recipientAddress, double amount);

private:
    std::map<std::string, double> balances;
};
