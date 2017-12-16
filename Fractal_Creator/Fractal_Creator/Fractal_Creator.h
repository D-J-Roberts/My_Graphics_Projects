#pragma once

#ifndef FRACTAL_CREATOR_H_
#define FRACTAL_CREATOR_H_

/*
// The following necessary headers are already included in Bitmap.h:
// #include <string>
// #include <cstdint>
// #include <memory>
*/
#include <iostream>
#include <math.h>
#include <vector>
#include <assert.h>
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "Zoom.h"
#include "Zoom_List.h"
#include "RGB.h"

using namespace std;

namespace djr {

	class FractalCreator {

	private:
		int m_width;
		int m_height;
		unique_ptr<int[]> m_histogram;
		unique_ptr<int[]> m_fractal;
		Bitmap m_bitmap;
		ZoomList m_zoomList;
		int m_total { 0 };

		vector<int> m_ranges;
		vector<RGB> m_colours;
		vector<int> m_rangeTotals;

		bool m_bGotFirstRange { false };
		
		void calculateIterations();
		void calculateTotalIterations();
		void calculateRangeTotals();
		void drawFractal();
		void writeBitmap(string name);
		int getRange(int iterations) const;
	
	public:
		FractalCreator(int width, int height);
		void addZoom(const Zoom& zoom);
		void addRange(double rangeEnd, const RGB& rgb);
		virtual ~FractalCreator();
		void run(string bitmap);
		
	};

}
#endif