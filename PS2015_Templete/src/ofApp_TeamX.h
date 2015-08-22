#pragma once

#include "ofMain.h"
#include "ball_TeamX.h"
#include "capture_TeamX.h"

const int ballNum_TeamX = 50;

class ofApp_TeamX : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    private:
        ball_TeamX object[ballNum_TeamX];
        capture_TeamX capture;
    
        ofImage ballImage; /// ofApp_TeamX.cpp内で扱うImage格納変数ballImageの設定
        ofImage capImage; /// ofApp_TeamX.cpp内で扱うImage格納変数capImageの設定
};
