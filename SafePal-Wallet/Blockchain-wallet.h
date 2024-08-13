// blockchain.h

#pragma once

// Define the blockchain data structure and functions here.

struct Block {
    int index;
    std::string data;
    std::string previous_hash;
    std::string hash;
};

class Blockchain {
public:
    // Constructor to initialize the blockchain.
    Blockchain();

    // Function to add a new block to the blockchain.
    void addBlock(const std::string& data);

    // Function to validate the blockchain's integrity.
    bool isChainValid() const;

private:
    std::vector<Block> chain;
};