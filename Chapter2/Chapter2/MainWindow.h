//
//  MainWindow.h
//  Chapter2
//
//  Created by Dave Reed on 1/12/12.
//  Copyright (c) 2012 dave256apps.com. All rights reserved.
//

#ifndef Chapter2_MainWindow_h
#define Chapter2_MainWindow_h

class MainWindow {
    
public:
    MainWindow(int argc, char *argv[]);
    
    // static callbacks
    static void displayFunc();
    static void keyboardFunc(unsigned char key, int x, int y);
    
    // non-static callbacks
    void displayCB();
    void keyboardCB(unsigned char key, int x, int y);
    
    // run glut main loop
    void mainLoop();
    
private:
    
};

#endif
