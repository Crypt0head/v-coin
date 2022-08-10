#pragma once
#include "vcoin.h"

VBlock::VBlock(){}

VBlock::VBlock(uint64_t idx,std::string phash, std::string hash, std::string tstmp, Data data) : 
Index(idx), previousHash(phash), Hash(hash), timeStamp(tstmp), data(data){}

VBlock::~VBlock(){};