#include "chocolateboiler.h"

ChocolateBoiler* ChocolateBoiler::uniqueInstance = 0;

ChocolateBoiler::ChocolateBoiler()
{
	empty = true;
	boiled = false;
}

ChocolateBoiler* ChocolateBoiler::getInstance() {
	if (uniqueInstance == NULL) {
		uniqueInstance = new ChocolateBoiler();
	}
	return uniqueInstance;
}

void ChocolateBoiler::fill() {
	if (isEmpty()) {
		empty = false;
		boiled = false;
		cout << "Zalivayem chocolate..." << endl;
	}
}

void ChocolateBoiler::drain() {
	if (!isEmpty() && isBoiled()) {
		cout << "Slivayem nagretoye moloko i chocolate..." << endl;
		empty = true;
	}
}

void ChocolateBoiler::boil() {
	if (!isEmpty() && !isBoiled()) {
		cout << "Kipyatim..." << endl;
		boiled = true;
	}
}

bool ChocolateBoiler::isEmpty() {
	return empty;
}

bool ChocolateBoiler::isBoiled() {
	return boiled;
}
