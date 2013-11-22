//
//  RandomNumber.cpp
//  KHRONOS
//
//  Created by LI Zeguang on 11/22/13.
//  Copyright (c) 2013 THU. All rights reserved.
//

#include "RandomNumber.h"

CD_RandomNumber C_Rand;

CD_RandomNumber::CD_RandomNumber()
{
    p_nMult = 19073486328125;
    p_nAdd = 0;
    p_nSeed0 = 19073486328125;
    p_nSeed = 19073486328125;
    p_nMod = 281474976710656;
    p_nMask = 281474976710655;
    p_dNorm = double(1.0) / double (p_nMod);
}

void CD_RandomNumber::setSeed(long long nSeed)
{
    p_nSeed = nSeed;
}

long long CD_RandomNumber::getSeed() const
{
    return p_nSeed;
}

double CD_RandomNumber::Gen()
{
    // return random number between 0 and 1
    double dResult;
    dResult = double(p_nSeed) * p_dNorm;
    p_nSeed = ((p_nMult * p_nSeed)&p_nMask + p_nAdd)&p_nMask;
    return dResult;
}
