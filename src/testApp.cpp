#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    player.loadMovie("fingers.mov"); //takes a path to the move file or place the movie in bin data folder
    player.play();
    player.setLoopState(OF_LOOP_NONE);
}

//--------------------------------------------------------------
void testApp::update(){
        
    player.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    player.update();
    
    int sampleX = ofClamp(mouseX,0, player.getWidth()-1);
    int sampleY = ofClamp(mouseY, 0, player.getHeight()-1);
    
    ofColor sample = player.getPixelsRef().getColor(sampleX, sampleY);
    
    ofBackground(sample);
    
    player.draw(0, 0);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if(key== ' '){
        if(player.isPlaying()){
            player.stop();
            }
    else{
        player.play();
        }
    }
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