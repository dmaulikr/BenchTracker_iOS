//
//  AnalyticsCollectionViewCell.h
//  BenchTracker
//
//  Created by Chappy Asel on 7/8/17.
//  Copyright © 2017 CD. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PNGenericChart;

@interface AnalyticsCollectionViewCell : UICollectionViewCell <UITableViewDelegate, UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subtitleLabel;

@property (nonatomic) PNGenericChart *graphView;

@property (weak, nonatomic) IBOutlet UIButton *seeMoreButton;

@property (nonatomic) CGFloat graphHeight;

@property (nonatomic) NSArray <NSAttributedString *> *displayStrings;

@property (nonatomic) CGSize originSize;

@end
