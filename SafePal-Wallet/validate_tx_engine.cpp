

#include "blockchain.h"

// Implement the functions defined in blockchain.h here.

Blockchain::Blockchain() {
    // Initialize the blockchain with a genesis block.
    chain.emplace_back(Block{0, "Genesis Block", "", "0"});
}

void Blockchain::addBlock(const std::string& data) {
    // Implement block addition logic here.
}

bool Blockchain::isChainValid() const {
    // Implement blockchain validation logic here.
}
