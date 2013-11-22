//
//  RandomNumber.h
//  KHRONOS
//
//  Created by LI Zeguang on 11/22/13.
//  Copyright (c) 2013 THU. All rights reserved.
//

#ifndef __KHRONOS__RandomNumber__
#define __KHRONOS__RandomNumber__

#include <iostream>

class CD_RandomNumber
{
public:
    CD_RandomNumber();
    ~CD_RandomNumber() {}
    //
    void setSeed(long long nSeed);
    long long getSeed() const;
    double Gen();
    
private:
    long long p_nMult;
    long long p_nAdd;
    long long p_nMod;
    long long p_nMask;
    double    p_dNorm;
    long long p_nSeed;
    long long p_nSeed0;
    
};

extern CD_RandomNumber C_Rand;

#endif /* defined(__KHRONOS__RandomNumber__) */
