#include "StudentPreProcessing.h"


IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &src) const {
	

	Grayscaling grayScaleAlgorithm;
	IntensityImageStudent * image = new IntensityImageStudent(src.getWidth(),src.getHeight());
	grayScaleAlgorithm.luminance(src, *image);
	//grayScaleAlgorithm.single_color(src, *image);


	
	//std::cout << "Duration: " << duration << '\n';


	return image;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}