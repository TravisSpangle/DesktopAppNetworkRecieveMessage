//
//  DesktopAppServiceAppDelegate.h
//  DesktopAppService
//
//  Created by Travis Spangle on 4/17/11.
//  Copyright 2011 Peak Systems. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class NetworkListener;

@interface AppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
    IBOutlet NSTextField *serverLog;
    
    NetworkListener *listener_;
}

@property (assign) IBOutlet NSWindow *window;
@property (nonatomic, retain) IBOutlet NSTextField *serverLog;
@property (nonatomic, retain) NetworkListener *listener_;

- (void) appendToLog:(NSString *) logLine;

@end
