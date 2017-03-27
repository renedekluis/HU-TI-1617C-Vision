#pragma once

#include "Algorithm.h"
#include "IntensityImagestudent.h"
#include "RGBImagestudent.h"
#include <vector>

class Grayscaling{
public:
	Grayscaling();
	~Grayscaling();
	void luminance(const RGBImage &src, IntensityImage &dst);
	void single_color(const RGBImage &src, IntensityImage &dst);
};

