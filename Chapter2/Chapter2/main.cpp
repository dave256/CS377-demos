//
//  main.cpp
//  Chapter2
//
//  Created by Dave Reed on 1/12/12.
//  Copyright (c) 2012 dave256apps.com. All rights reserved.
//

#include "MainWindow.h"

MainWindow *mw;

int main (int argc, const char * argv[])
{
    mw = new MainWindow(argc, (char**)argv);
    mw->mainLoop();
    
    delete mw;
    return 0;
}
