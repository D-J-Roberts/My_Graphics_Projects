#include <iostream>
#include "Fractal_Creator.h"

using namespace djr;
using namespace std;

int main() {
	
	FractalCreator fractalCreator(800, 600);

	fractalCreator.addRange(0.0, RGB(0, 0, 255));
	fractalCreator.addRange(0.3, RGB(255, 99, 71));
	fractalCreator.addRange(0.5, RGB(255, 215, 0));
	fractalCreator.addRange(1.0, RGB(255, 255, 255));

	fractalCreator.addZoom(Zoom(295, 202, 0.1));
	fractalCreator.addZoom(Zoom(312, 304, 0.1));

	fractalCreator.run("Fractal.bmp");

	cout << "Finished!" << endl;

	return 0;

}