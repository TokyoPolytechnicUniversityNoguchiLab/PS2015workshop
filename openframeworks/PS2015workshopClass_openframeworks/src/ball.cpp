//
//  ball.cpp
//  PS2015workshopClass_openframeworks
//
//  Created by MikamiKohei on 8/8/15.
//
//

#include "ball.h"

ball::ball() {
    ofSetRectMode(OF_RECTMODE_CENTER);
    ballX = ofRandom(ofGetWidth()/2-200,ofGetWidth()/2+200);
    ballY = ofRandom(ofGetHeight()/2-200,ofGetHeight()/2+200);
    ballColor = ofColor::fromHsb(ofRandom(360), 200, 255);
    ballR = 200;
    vx = ofRandom(-8,8);
    vy = ofRandom(-8,8);
}

void ball::update() {
    if (ballX < 0 || ballX > ofGetWidth()) {
        vx = -vx;
    }
    if (ballY < 0 || ballY > ofGetHeight()) {
        vy = -vy;
    }
    
    ballX = ballX + vx;
    ballY = ballY + vy;
}

void ball::draw(ofImage &image) {
    ofSetColor(ballColor);
    image.draw(ballX, ballY, ballR, ballR);
}