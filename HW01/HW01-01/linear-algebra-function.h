#pragma once

#include <cstdio>
#include <cmath>
#include <iostream>
#include <array>

using namespace std;


int dot(const array<int,2> A, const array<int, 2> B) {
	return (A[0] * B[0]) + (A[1] * B[1]);
}