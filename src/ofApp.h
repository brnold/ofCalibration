#pragma once

#include "ofMain.h"
#include "ofxCv.h"

class ofApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	
	ofVideoGrabber cam;
	ofImage theImage;
	ofImage undistorted;
	ofPixels previous;
	ofPixels diff;
	float diffMean;
	
	float lastTime;
	bool active;

	//char[10] pictureArray;
	
	ofxCv::Calibration calibration;
};
