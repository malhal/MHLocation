//
//  CLLocationManager+Authorization.m
//  WiFiFoFum-Passwords
//
//  Created by Malcolm Hall on 20/04/2015.
//  Copyright (c) 2015 Dynamically Loaded. All rights reserved.
//

#import "CLLocationManager+Authorization.h"

@implementation CLLocationManager (Authorization)

+(void)mh_requestLocationAuthorizationIfNotDetermined{
    if([CLLocationManager authorizationStatus] == kCLAuthorizationStatusNotDetermined){
        BOOL always = NO;
        if([[NSBundle mainBundle] objectForInfoDictionaryKey:@"NSLocationAlwaysUsageDescription"]){
            always = YES;
        }
        else if(![[NSBundle mainBundle] objectForInfoDictionaryKey:@"NSLocationWhenInUseUsageDescription"]){
            @throw [NSException exceptionWithName:NSInternalInconsistencyException reason:@"NSLocationWhenInUseUsageDescription or NSLocationAlwaysUsageDescription description missing from Info.plist" userInfo:nil];
        }
        static CLLocationManager* lm = nil;
        static dispatch_once_t once;
        dispatch_once(&once, ^ {
            // Code to run once
            lm = [[CLLocationManager alloc] init];
        });
        if(always){
            [lm requestAlwaysAuthorization];
        }else{
            [lm requestWhenInUseAuthorization];
        }
    }
}

@end