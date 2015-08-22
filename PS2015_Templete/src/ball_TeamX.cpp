//
//  ball.cpp
//  PS2015workshopClass_openframeworks
//
//  Created by MikamiKohei on 8/8/15.
//
//

#include "ball_TeamX.h"

ball_TeamX::ball_TeamX() {
    ballX = ofRandom(ofGetWidth()/2-200,ofGetWidth()/2+200);
    ballY = ofRandom(ofGetHeight()/2-200,ofGetHeight()/2+200);
    ballColor = ofColor::fromHsb(ofRandom(360), 200, 255); /// Ball Class内のカラーのメンバー変数
    ballR = ofRandom( 200, 400 );
    vx = ofRandom(-8,8);
    vy = ofRandom(-8,8);
}

void ball_TeamX::update() {
    if (ballX < 0 || ballX > ofGetWidth()) {
        vx = -vx;
    }
    if (ballY < 0 || ballY > ofGetHeight()) {
        vy = -vy;
    }
    
    ballX = ballX + vx;
    ballY = ballY + vy;
}

void ball_TeamX::draw(ofImage &image) {
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    /*　ブレンドモード種類
     OF_BLENDMODE_ALPHA アルファ混色
     OF_BLENDMODE_ADD 加算混色
     OF_BLENDMODE_MULTIPLY 乗算混色
     OF_BLENDMODE_SUBTRACT 減算混色
     OF_BLENDMODE_SCREEN スクリーン混色
     */
    ofSetColor(ballColor);
    image.draw(ballX, ballY, ballR, ballR);
    ofDisableBlendMode();
    ofSetRectMode(OF_RECTMODE_CORNER);
}