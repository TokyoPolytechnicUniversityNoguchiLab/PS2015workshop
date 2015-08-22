#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(30);
    ofSetWindowShape(1330, 896);
    ofBackground(0);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    ballImage.loadImage("ball_image.png");
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    for (int i = 0; i < ballNum; i++) {
        ballX[i] = ofRandom(ofGetWidth()/2-200,ofGetWidth()/2+200);
        ballY[i] = ofRandom(ofGetHeight()/2-200,ofGetHeight()/2+200);
        ballR[i] = 200;
        
        vx[i] = ofRandom(-8,8);
        vy[i] = ofRandom(-8,8);
        
        ballColor[i] = ofColor::fromHsb(ofRandom(360), 200, 255);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < ballNum; i++) {
        if (ballX[i] < 0 || ballX[i] > ofGetWidth()) {
            vx[i] = -vx[i];
        }
        if (ballY[i] < 0 || ballY[i] > ofGetHeight()) {
            vy[i] = -vy[i];
        }
        
        ballX[i] = ballX[i] + vx[i];
        ballY[i] = ballY[i] + vy[i];
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < ballNum; i++) {
        ofSetColor(ballColor[i]);
        ballImage.draw(ballX[i], ballY[i], ballR[i], ballR[i]);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
