#ifndef LIFE_FUNC_H_
#define LIFE_FUNC_H_

#include <iostream>
#include <functional>

constexpr uint8_t COUNT_LIFE_FUNCTION = 10;

std::function<void(uint8_t*)> functions[COUNT_LIFE_FUNCTION] = {
	photosynthesis,
	eat
};

void photosynthesis(uint8_t* args) {

}
void eat(uint8_t* args)


#endif // !LIFE_FUNC_H_
