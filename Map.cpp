#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Map.h"
Map::Map() {
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 100; j++) board[i][j] = '#';
	}
	for (int i = 1; i < 49; i++) {
		for (int j = 1; j < 99; j++) board[i][j] = ' ';
	}
	for (int i = 1; i < 49; i++) {
		for (int j = 1; j < 49; j++) {

		 }
	}
}
void Map::viewMap() {
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 100; j++) std::cout << board[i][j];
		std::cout << std::endl;
	}
}