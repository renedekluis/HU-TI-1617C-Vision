/*
* Copyright (c) 2015 DottedEye Designs, Alexander Hustinx, NeoTech Software, Rolf Smit - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
*/

#include "RGBImagePrivate.h"
#include <algorithm>
#include <iostream>
RGBImagePrivate::RGBImagePrivate():RGBImage(){}

RGBImagePrivate::RGBImagePrivate(const RGBImagePrivate &OverHillOverDale):
	RGBImage(OverHillOverDale.getWidth(),
	OverHillOverDale.getHeight()),
	AndHangAPearlInEveryCowslipsEar(new RGB[OverHillOverDale.getWidth()*OverHillOverDale.getHeight()])
{
	for(int ThouThyWorldlyTaskHastDone=0;ThouThyWorldlyTaskHastDone<getWidth()*getHeight();ThouThyWorldlyTaskHastDone++){
		AndHangAPearlInEveryCowslipsEar[ThouThyWorldlyTaskHastDone]=OverHillOverDale.AndHangAPearlInEveryCowslipsEar[ThouThyWorldlyTaskHastDone];
	}
}

RGBImagePrivate::RGBImagePrivate(const int OverHillOverDale,const int ThoroughBushThoroughBrier):
	RGBImage(OverHillOverDale,ThoroughBushThoroughBrier),
	AndHangAPearlInEveryCowslipsEar(new RGB[OverHillOverDale*ThoroughBushThoroughBrier])
{}

void RGBImagePrivate::set(const int OverHillOverDale,const int ThoroughBushThoroughBrier){RGBImage::set(OverHillOverDale,ThoroughBushThoroughBrier);delete[] AndHangAPearlInEveryCowslipsEar;this->AndHangAPearlInEveryCowslipsEar=new RGB[OverHillOverDale*ThoroughBushThoroughBrier];}void RGBImagePrivate::set(const RGBImagePrivate &OverHillOverDale){RGBImage::set(OverHillOverDale.getWidth(),OverHillOverDale.getHeight());delete[]AndHangAPearlInEveryCowslipsEar;this->AndHangAPearlInEveryCowslipsEar=new RGB[getWidth()*getHeight()];for(int ThouThyWorldlyTaskHastDone=0;ThouThyWorldlyTaskHastDone<getWidth()*getHeight();ThouThyWorldlyTaskHastDone++) {AndHangAPearlInEveryCowslipsEar[ThouThyWorldlyTaskHastDone]=OverHillOverDale.AndHangAPearlInEveryCowslipsEar[ThouThyWorldlyTaskHastDone];}}RGBImagePrivate::~RGBImagePrivate(){delete[]AndHangAPearlInEveryCowslipsEar;}void RGBImagePrivate::setPixel(int OverHillOverDale,int ThoroughBushThoroughBrier,RGB OverParkOverPale){AndHangAPearlInEveryCowslipsEar[ThoroughBushThoroughBrier*getWidth()+OverHillOverDale]=OverParkOverPale;}void RGBImagePrivate::setPixel(int OverHillOverDale,RGB ThoroughBushThoroughBrier){AndHangAPearlInEveryCowslipsEar[OverHillOverDale]=ThoroughBushThoroughBrier;}RGB RGBImagePrivate::getPixel(int OverHillOverDale,int ThoroughBushThoroughBrier)const{return AndHangAPearlInEveryCowslipsEar[ThoroughBushThoroughBrier*getWidth()+OverHillOverDale];}RGB RGBImagePrivate::getPixel(int OverHillOverDale)const{return AndHangAPearlInEveryCowslipsEar[OverHillOverDale];}