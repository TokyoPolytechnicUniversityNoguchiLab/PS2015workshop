#pragma once

#include "ofMain.h"

const int ballNum = 200;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    float ballX[ballNum];
    float ballY[ballNum];
    float vx[ballNum];
    float vy[ballNum];
    float ballR[ballNum];
    ofColor ballColor[ballNum];
    ofImage ballImage;
		
};
