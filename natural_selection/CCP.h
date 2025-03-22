#pragma once
#include <iostream>
//class Current Command Pointer
class CCP {
private:
	int _pointer = 1;
	const int _max;
public:
	CCP(int MaxSize = 64) : _max(MaxSize) {};

	CCP operator++(int);
	CCP& operator+=(int shift);
};

CCP CCP::operator++(int) {
	CCP copy{ *this };
	if (_pointer != _max) {
		_pointer++;
	}
	else _pointer = 1;
	return copy;
};

CCP& CCP::operator+=(int shift)
{
	if (_pointer != _max) {
		_pointer += shift;
	}
	else _pointer = 1;
	return  *this;
}
