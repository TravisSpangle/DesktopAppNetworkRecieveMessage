//
//  DesktopAppServiceAppDelegate.m
//  DesktopAppService
//
//  Created by Travis Spangle on 4/17/11.
//  Copyright 2011 Peak Systems. All rights reserved.
//

#import "AppDelegate.h"

#include "NetworkListener.h"

@implementation AppDelegate

@synthesize window;
@synthesize serverLog;
@synthesize listener_;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    listener_ = [[NetworkListener alloc] init];
    [listener_ startService];
    
    NSNotificationCenter *notification_ = [NSNotificationCenter defaultCenter];        
    [notification_ addObserver:self selector:@selector(appendToLog:) name:@"NetworkListenerMessage" object:nil];
}



- (void)dealloc
{
    [listener_ release];
    
    [super dealloc];
}

- (void) appendToLog:(NSDictionary *) logLine
{
    [serverLog setObjectValue:
        [NSString stringWithFormat:@"%@\n%@", [serverLog stringValue], [[logLine userInfo] objectForKey:@"message"]]];
}


@end
