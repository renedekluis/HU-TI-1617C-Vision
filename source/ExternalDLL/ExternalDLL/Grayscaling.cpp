#include "Grayscaling.hpp"



Grayscaling::Grayscaling(){
}


Grayscaling::~Grayscaling(){
}


void Grayscaling::luminance(const RGBImage &src, IntensityImage &dst) {
	int srcw = src.getWidth();
	int srch = src.getHeight();
	

	for (int x = 0; x < src.getWidth(); x++) {
		for (int y = 0; y < src.getHeight(); y++) {
			RGB color = src.getPixel(x,y);
			dst.setPixel(x, y, ((color.r * 0.2126) + (color.g * 0.7152) + (color.b * 0.0722)));
		}
	}
	
}

void Grayscaling::single_color(const RGBImage &src, IntensityImage &dst) {

}

