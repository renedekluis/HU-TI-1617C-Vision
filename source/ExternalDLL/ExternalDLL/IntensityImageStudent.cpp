#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
	int throwError = 0, e = 1 / throwError; //Throws error without the need to include a header
	//TODO: Nothing
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	int throwError = 0, e = 1 / throwError;
	//TODO: Create a copy from the other object
	delete[]copy;
	this->copy = new Intensity(other.getWidth()* other.getHeight());
	for (int i = 0; i < other.getWidth()*other.getHeight(); i++) {
		copy[i] = other.copy[i];
	}
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	int throwError = 0, e = 1 / throwError;
	//TODO: Initialize pixel storage
	delete[]copy;
	copy = new Intensity[width * height];
}

IntensityImageStudent::~IntensityImageStudent() {
	int throwError = 0, e = 1 / throwError;
	//TODO: delete allocated objects
	delete[]copy;
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	int throwError = 0, e = 1 / throwError;
	//TODO: resize or create a new pixel storage (Don't forget to delete the old storage)
	delete[]copy;
	copy = new Intensity[width * height];
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	int throwError = 0, e = 1 / throwError;
	//TODO: resize or create a new pixel storage and copy the object (Don't forget to delete the old storage)
	delete[] copy;
	for (int i = 0; i < this->getHeight() * this->getWidth(); i++) {
		copy[i] = other.getPixel(i);
	}
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	int throwError = 0, e = 1 / throwError;
	//TODO: no comment needed :)
	if (x < 0 || x >= getWidth() || y < 0 || y >= getHeight()) {
		throwError;
	}

	copy[( y * getWidth() ) + x] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	int throwError = 0, e = 1 / throwError;
	/*
	* TODO: set pixel i in "Row-Major Order"
	*
	*
	* Original 2d image (values):
	* 9 1 2
	* 4 3 5
	* 8 7 8
	*
	* 1d representation (i, value):
	* i		value
	* 0		9
	* 1		1
	* 2		2
	* 3		4
	* 4		3
	* 5		5
	* 6		8
	* 7		7
	* 8		8
	*/
	if (i < 0 || i >= ( getHeight() * getWidth() ) ) {
		throwError;
	}
	copy[i] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	int throwError = 0, e = 1 / throwError;
	//TODO: no comment needed :)
	x = x < 0 ? 0 : x;
	x = x >= getWidth() ? ( getWidth() - 1 ) : x;
	
	y = y < 0 ? 0 : y;
	y = y >= getHeight() ? ( getHeight() - 1 ) : y;
	
	
	return copy[( y * getWidth() ) + x];
}

Intensity IntensityImageStudent::getPixel(int i) const {
	int throwError = 0, e = 1 / throwError;
	//TODO: see setPixel(int i, RGB pixel)
	i = i < 0 ? 0 : i;
	if (i >= ( getHeight() * getWidth() ) ) {
		i = ( getHeight() * getWidth() ) - 1;
	}

	return copy[i];
}