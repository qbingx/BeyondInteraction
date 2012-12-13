#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(47, 47, 47); //背景色の設定
    ofEnableAlphaBlending(); //透明度(アルファチャンネル)を有効にする
    ofSetCircleResolution(64); //円の解像度を設定
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(31, 127, 255, 127); //描画色の設定
    ofCircle(1024/2, 768/2, 100); //円を描く
    ofCircle(1024/2, 768/2, 100+40); //半径を40増加させて円を描く
    ofCircle(1024/2, 768/2, 100+80); //半径を80増加させて円を描く
    ofCircle(1024/2, 768/2, 100+120); //半径を120増加させて円を描く
    ofCircle(1024/2, 768/2, 100+160); //半径を160増加させて円を描く
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
