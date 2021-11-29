#include "chocolateboiler.h"

int main(int argc, char** argv) {
	
	ChocolateBoiler *boiler = ChocolateBoiler::getInstance();
	
	boiler = ChocolateBoiler::getInstance();
	boiler->fill();
	boiler->boil();
	boiler->drain();
	
	return 0;
}
