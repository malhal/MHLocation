//
//  CLLocationManager+Authorization.h
//  MCoreLocation
//
//  Created by Malcolm Hall on 20/04/2015.
//  Copyright (c) 2015 Malcolm Hall. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <MCoreLocation/MCLDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface CLLocationManager (MCL)

// checks if the Info plist is configured correctly and requests the appropriate authorization depending on plist contents.
// NSLocationWhenInUseUsageDescription
+ (void)mcl_requestLocationAuthorizationIfNotDetermined;

@end

NS_ASSUME_NONNULL_END
