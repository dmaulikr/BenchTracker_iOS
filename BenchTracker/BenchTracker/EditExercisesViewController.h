//
//  EditExercisesViewController.h
//  BenchTracker
//
//  Created by Chappy Asel on 7/14/17.
//  Copyright © 2017 CD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "EEDetailViewController.h"
#import "SWTableViewCell.h"

@interface EditExercisesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NSFetchedResultsControllerDelegate, UISearchBarDelegate, EEDetailViewControllerDelegate, SWTableViewCellDelegate>

@property (nonatomic) NSManagedObjectContext *context;

@end
