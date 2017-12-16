#pragma once

#ifndef BITMAP_FILE_HEADER_H_
#define BITMAP_FILE_HEADER_H_

#include <cstdint>

using namespace std;

#pragma pack(push, 2)

namespace djr {
	
	struct BitmapFileHeader {
		
		char header[2] { 'B', 'M' };
		int32_t fileSize;
		int32_t reserved { 0 };
		int32_t dataOffset;
	
	};

#pragma pack(pop)

}
#endif