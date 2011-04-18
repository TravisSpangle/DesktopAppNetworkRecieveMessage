//
//  DesktopAppServiceAppDelegate.h
//  DesktopAppService
//
//  Created by Travis Spangle on 4/17/11.
//  Copyright 2011 Peak Systems. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface DesktopAppServiceAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
