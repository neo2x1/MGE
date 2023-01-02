#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Map.h"

Map::Map() {
	// grid
	for (int i = 0; i < 49; i++) {
		for (int j = 0; j < 99; j++) board[i][j] = '#';
	}
	for (int i = 1; i < 49; i+=2) {
		for (int j = 1; j < 99; j+=2) {
			board[i][j] = ' ';
		 }
	}

	//bit tree labirynth
	for (int i = 1; i < 49; i += 2) {
		for (int j = 1; j < 99; j += 2) {
			int a = rand() % 2 + 1;
			switch (a)
			{
			case 1:
				if (j < 97) board[i][j+1] = ' ';
				else board[i+1][j] = ' ';
				break;
			case 2:
				if (i < 47) board[i + 1][j] = ' ';
				else board[i][j + 1] = ' ';
				break;
			}
			
		}
	}
}
void Map::viewMap() {
	for (int i = 0; i < 49; i++) {
		for (int j = 0; j < 99; j++) std::cout << board[i][j];
		std::cout << std::endl;
	}
}