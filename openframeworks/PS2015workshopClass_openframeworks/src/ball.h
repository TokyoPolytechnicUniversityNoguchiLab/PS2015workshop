//
//  ball.h
//  PS2015workshopClass_openframeworks
//
//  Created by MikamiKohei on 8/8/15.
//
//

#ifndef __PS2015workshopClass_openframeworks__ball__
#define __PS2015workshopClass_openframeworks__ball__

#include "ofMain.h"

class ball {

public:
    ball();
    void update();
    void draw(ofImage &image);
    
private:
    float ballX;
    float ballY;
    float ballR;
    float vx;
    float vy;
    ofColor ballColor;
};

#endif /* defined(__PS2015workshopClass_openframeworks__ball__) */
