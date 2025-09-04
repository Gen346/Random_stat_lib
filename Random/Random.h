#pragma once
#ifndef RANDOM_H
#define RANDOM_H

#include "Range.h"
#include <cstdlib>

inline int Random(Range r)
{
	return r.mLow + rand() % ((r.mHigh + 1) - r.mLow);
}
inline int Random(int a, int b)
{
	return a + rand() % ((b + 2) - a);
}

#endif;
