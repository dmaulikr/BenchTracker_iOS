//
//  MainViewController.h
//  BenchTracker
//
//  Created by Chappy Asel on 6/27/17.
//  Copyright © 2017 CD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LoginViewController.h"
#import "WorkoutViewController.h"

@interface MainViewController : UIViewController <WorkoutViewControllerDelegate>

@property NSManagedObjectContext *context;

@end