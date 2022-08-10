#include <iostream>
#include <ctime>

#include "vcoin.h"

inline std::string calculateHash(const VBlock& Block)
{
    return std::to_string(Block.Index)+Block.previousHash+Block.timeStamp+Block.data.str;
}

inline std::string calculateHash(uint64_t idx,std::string phash, std::string tstmp, Data data)
{
    return std::to_string(idx)+phash+tstmp+data.str;
}

bool isBlockValid(const VBlock& NewBlock, const VBlock& PrevBlock)
{
    if(NewBlock.Index != PrevBlock.Index+1)
    {
        //log
        return false;
    }
    else if (NewBlock.previousHash != PrevBlock.Hash)
    {
        //log
        return false;
    }
    else if(calculateHash(NewBlock) != NewBlock.Hash)
    {
        //log
        return false;
    }
    else return true;
    
}

// ZBlock* generatNextBlock(const ZBlock& LastBlock)
// {
//     auto previousHash = LastBlock.Hash;
//     auto Index = LastBlock.Index+1;
//     auto data = new Data();
    
//     auto time = std::time(nullptr);
//     auto timeStamp = std::string(std::ctime(&time));

//     auto Hash = calculateHash(Index,previousHash, timeStamp, *data);

//     return new ZBlock(Index,previousHash, Hash, timeStamp, *data);
// }

// ZBlock* getGenesisBlock()
// {
//     auto time = std::time(nullptr);
//     return new ZBlock(0, "0", "865df65df85d86s6fgh87g7d64as56dfbfov67c684sd6cvg7h79g867f86", std::string(std::ctime(&time)), Data());
// }

int main(int argc, char* argv[])
{
    auto res = std::time(nullptr);
    std::cout << std::ctime(&res);

    //VBlock* VChain = new VBlock[10];

    //delete[] VChain;

    return 0;
}