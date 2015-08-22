//
//  capture_TeamX.cpp
//  PS2015workshopClass_openframeworks
//
//  Created by youtaro_ohsawa on 2015/08/08.
//
//

#include "capture_TeamX.h"

capture_TeamX::capture_TeamX()
{
}
    
void capture_TeamX::draw(ofImage &image)
{
        
        ofEnableBlendMode( OF_BLENDMODE_MULTIPLY );//ブレンドモード
        
        ofSetColor(255);
        image.draw( 0, 0 );
        
        ofDisableBlendMode();//ブレンドモード終了※重要
        
}



