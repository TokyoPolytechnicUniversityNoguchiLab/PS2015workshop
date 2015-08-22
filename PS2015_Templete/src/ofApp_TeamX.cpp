#include "ofApp_TeamX.h"

//--------------------------------------------------------------
void ofApp_TeamX::setup(){
    ofBackground(0);
    ofEnableAlphaBlending();
    ballImage.loadImage("ball_image.png");
    capImage.loadImage("kakkoii_moz.png");
}

//--------------------------------------------------------------
void ofApp_TeamX::update(){
    for (int i = 0; i < ballNum_TeamX; i++) {
        object[i].update();
    }
}

//--------------------------------------------------------------
void ofApp_TeamX::draw(){
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofBackground(0);
    for (int i = 0; i < ballNum_TeamX; i++) {
        object[i].draw(ballImage);
    }
    capture.draw(capImage);
    
    for (int i = 0; i < ballNum_TeamX; i++) {
        object[i].draw(ballImage);
    }
}

