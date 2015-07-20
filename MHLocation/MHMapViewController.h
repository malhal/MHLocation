//
//  MapViewController.h
//  LeoMapDemo2
//
//  Created by Malcolm Hall on 10/11/13.
//  Copyright (c) 2013 Malcolm Hall. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>


//Create a navigation based app.
//In the storyboard delete the master (table) view controller.
//Drag in a view controller and hook it up as the root in the navigation controlller.
//On navigation controller also check "Shows toolbar".
//In code change MasterViewController to be a subclass of MHMapViewController and delete all table code.
//That's it!

@class MHMapTypeBarButtonItem, MHAnnotationsTableBarButtonItem;

@interface MHMapViewController : UIViewController<MKMapViewDelegate>

@property (nonatomic, strong, readonly) MKMapView *mapView;

@property (nonatomic, strong) MKUserTrackingBarButtonItem *userTrackingBarButtonItem;

@property (nonatomic, strong) MHMapTypeBarButtonItem* mapTypeBarButtonItem;

@property (nonatomic, strong) MHAnnotationsTableBarButtonItem* annotationsTableBarButtonItem;

// defaults to "Annotation"
@property (nonatomic, copy) NSString* annotationReuseIdentifier;

@end