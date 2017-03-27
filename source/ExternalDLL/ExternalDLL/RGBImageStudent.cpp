#include "RGBImageStudent.h"

RGBImageStudent::RGBImageStudent() : RGBImage() {
	 //Throws error without the need to include a header
	//TODO: Nothing
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	
	//TODO: Create a copy from the other object
	delete[]other_object_copy;
	this->other_object_copy = new RGB(other.getWidth()*other.getHeight());
	for (int i = 0; i < other.getWidth()*other.getHeight(); i++) {
		other_object_copy[i] = other.other_object_copy[i];
	}
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	
	//TODO: Initialize pixel storage
	other_object_copy = new RGB(width*height);
}

RGBImageStudent::~RGBImageStudent() {
	
	//TODO: delete allocated objects
	delete[]other_object_copy;
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	
	//TODO: resize or create a new pixel storage (Don't forget to delete the old storage)
	delete[]other_object_copy;
	RGBImage::set(width, height);
	other_object_copy = new RGB(width*height);
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	
	//TODO: resize or create a new pixel storage and copy the object (Don't forget to delete the old storage)
	delete[]other_object_copy;
	this->other_object_copy = new RGB(other.getWidth()*other.getHeight());
	for (int i = 0; i < other.getWidth()*other.getHeight(); i++) {
		other_object_copy[i] = other.other_object_copy[i];
	}
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	//TODO: no comment needed :)
	//if (x < 0 || x >= getWidth() || y < 0 || y >= getHeight()) {
	//	
	//	int throwError= 1/0;
	//}
	other_object_copy[(y * this->getWidth()) + x] = pixel;
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
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

	//if (i < 0 || i >= getWidth() * getHeight()) {
	//	int throwError = 1 / 0;
	//}
	other_object_copy[i] = pixel;

}

RGB RGBImageStudent::getPixel(int x, int y) const {
	//TODO: no comment needed :)
	x = x < 0 ? 0 : x;
	y = y < 0 ? 0 : y;
	x = x >= getWidth() ? getWidth() - 1 : x;
	y = y >= getHeight() ? getHeight() - 1 : y;
	return other_object_copy[y*this->getWidth() + x];

}

RGB RGBImageStudent::getPixel(int i) const {
	
	//TODO: see setPixel(int i, RGB pixel)
	i = i < 0 ? 0 : i;
	if (i >= (getHeight()*getWidth())) {
		i = (getHeight()*getWidth()) - 1;
	}
	return other_object_copy[i];
}