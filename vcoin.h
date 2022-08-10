#pragma once

#include <iostream>
#include <ctime>
#include <string>

struct Data
{
    std::string str = "200";
    ~Data();
};

class VBlock
{
public:
    uint64_t Index;
    std::string previousHash;
    std::string Hash;
    std::string timeStamp;
    Data data;

public:
    VBlock();
    VBlock(uint64_t idx,std::string phash, std::string hash, std::string tstmp, Data data);
    // VBlock(const VBlock&);
    // VBlock(const VBlock&&);
    // VBlock& operator=(VBlock&);
    // VBlock& operator=(VBlock&&);
    ~VBlock();

    inline std::string calculateHash(uint64_t idx,std::string phash, std::string tstmp, Data data)
    {
        return std::to_string(idx)+phash+tstmp+data.str;
    }
};

