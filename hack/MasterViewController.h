//
//  MasterViewController.h
//  hack
//
//  Created by joeykrug on 11/11/13.
//  Copyright (c) 2013 joeykrug. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
