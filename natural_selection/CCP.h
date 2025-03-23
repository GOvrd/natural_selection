#ifndef CCP_H_
#define CCP_H_

#include <iostream>

//class Current Command Pointer
class CCP {
private:
	uint8_t _pointer = 1;
	const uint8_t _max;
public:
	CCP(uint8_t MaxSize) : _max(MaxSize) {};
	CCP operator++(int);
	CCP& operator+=(uint8_t);
};

CCP CCP::operator++(int) {
	CCP copy{ *this };
	if (_pointer != _max) {
		_pointer++;
	}
	else _pointer = 1;
	return copy;
};

CCP& CCP::operator+=(uint8_t shift)
{
	if (_pointer != _max) {
		_pointer += shift;
	}
	else _pointer = 1;
	return  *this;
}

#endif // !CCP_H_