#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    
    bgImg.loadImage("images/patterns.jpg");
    armsImg.loadImage("images/arms.png");
    
    armsVid.setPixelFormat(OF_PIXELS_RGBA);
    armsVid.loadMovie("videos/testArms_anim.mov");
    armsVid.play();
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    armsVid.update();
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetRectMode(OF_RECTMODE_CORNER);
    bgImg.draw(0,0,ofGetWindowWidth(),ofGetWindowHeight());
    
    
    
    ofEnableAlphaBlending();
    ofSetRectMode(OF_RECTMODE_CENTER);
    //armsImg.draw(mouseX,mouseY,736,500);
    armsVid.draw(mouseX,mouseY,armsVid.getWidth(),armsVid.getHeight());
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}