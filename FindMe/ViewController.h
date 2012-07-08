//
//  ViewController.h
//  FindMe
//
//  Created by Nick on 7/9/12.
//  Copyright (c) 2012 MyCompanyName. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController <MKMapViewDelegate>

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end
