#ifndef FIELD_H_
#define FIELD_H_

#include <iostream>
#include <ctime>

constexpr char LIVE_CELL = '*';

template<typename CellType>
class Field {
private:
	int _row;
	int _col;
	CellType** _field;
	void init() {
		srand(time(0));
		_field = new CellType*[_row];
		for (int i = 0; i < _row; i++) {
			_field[i] = new CellType[_col];
			for (int j = 0; j < _col; j++) {
				_field[i][j] = rand() % 2;
			}
		}
	}
	void clear() {
		for (int i = 0; i < _row; i++) {
			delete[] _field[i];
		}
		delete[] _field;
	}
public:

	Field(int, int);
	~Field();
	void print();
};
template<typename CellType>
Field<CellType>::Field(int col, int row) {
	_row = row;
	_col = col;
	init();
}
template<typename CellType>
Field<CellType>::~Field() {
	clear();
}
template<typename CellType>
void Field<CellType>::print() {
	for (int i = 0; i < _row; i++) {
		for (int j = 0; j < _col; j++) {
			if (_field[i][j] == 1) std::cout << LIVE_CELL << " ";
			else std::cout << "   ";
		}
		std::cout << "\n";
	}
}
#endif //!FIELD_H_