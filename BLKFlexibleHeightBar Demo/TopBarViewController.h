//
//  TopBarViewController.h
//  BLKFlexibleHeightBar Demo
//
//  Created by Amar Ramachandran on 6/25/15.
//  Copyright © 2015 Bryan Keller. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FacebookStyleBar.h"

@interface TopBarViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet FacebookStyleBar *bar;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *topConstraint;

@end
