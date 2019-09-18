#pragma once

#include <cstdio>
#include <cmath>
#include <iostream>
#include <array>

using namespace std;


int dot(const array<int,2> A, const array<int, 2> B) {
	return (A[0] * B[0]) + (A[1] * B[1]);
}

int dot(const array<int, 4> A, const array<int, 4> B) {
	return (A[0] * B[0]) + (A[1] * B[1]) + (A[2] * B[2]) + (A[3] * B[3]);
}

int dot(const array<int, 3> A, const array<int, 3> B) {
	return (A[0] * B[0]) + (A[1] * B[1]) + (A[2] * B[2]);
}

double dot(const array<double, 3> A, const array<double, 3> B) {
	return (A[0] * B[0]) + (A[1] * B[1]) + (A[2] * B[2]);
}

double cal_theta(const array<int, 4> A, const array<int, 4> B) {
	return acos(dot(A, B) / (sqrt(dot(A, A)) * sqrt(dot(B, B)))) * 180 / 3.141592;
}

double cal_theta(const array<int, 3> A, const array<int, 3> B) {
	return acos(dot(A, B) / (sqrt(dot(A, A)) * sqrt(dot(B, B)))) * 180 / 3.141592;
}