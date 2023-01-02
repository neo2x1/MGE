#include "Map.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand(time(NULL));
	Map map;
	map.viewMap();
	return 0;
}