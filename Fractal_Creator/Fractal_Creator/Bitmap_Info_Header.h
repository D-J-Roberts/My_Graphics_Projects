#pragma once

#ifndef BITMAP_INFO_HEADER_H_
#define BITMAP_INFO_HEADER_H_

#include <cstdint>

using namespace std;

#pragma pack(push, 2)

namespace djr {
	
	struct BitmapInfoHeader {
		
		int32_t headerSize { 40 };
		int32_t width;
		int32_t height;
		int16_t planes { 1 };
		int16_t bitsPerPixel { 24 };
		int32_t compression { 0 };
		int32_t dataSize { 0 };
		int32_t horizontalResolution { 2400 };
		int32_t verticalResolution { 2400 };
		int32_t colours { 0 };
		int32_t importantColours { 0 };
	
	};

#pragma pack(pop)

}
#endif