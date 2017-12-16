#pragma once

#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace djr {

	class Mandelbrot {

	public:
		static const int MAX_ITERATIONS = 10000;

		Mandelbrot();
		virtual ~Mandelbrot();		

		static int getIterations(double x, double y);

	};

}
#endif