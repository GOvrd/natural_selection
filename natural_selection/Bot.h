#ifndef BOT_H_
#define BOT_H_
#include <iostream>
#include "CCP.h"
#include "State.h"

constexpr uint8_t GENOM_SIZE = 64;
constexpr uint16_t COUNT_START_ENERGY = 100;
constexpr uint16_t MAX_ENERGY = 1000;
constexpr uint16_t MIN_ENERGY = 0;


class Bot {
private:
	CCP _pointer = CCP(GENOM_SIZE);
	uint8_t _genom[GENOM_SIZE] = { 0 };
	uint16_t _energy = COUNT_START_ENERGY;

	uint8_t _posX = 0;
	uint8_t _posY = 0;

	int _handler(uint8_t);
	State _lifeCheck();
public:
	State Next();
};
State Bot::_lifeCheck()
{
	if (_energy <= MIN_ENERGY) return State::DEATH;
	return State::LIVE;
}
State Bot::Next() {
	return State::DEATH;
}
#endif //!BOT_H_