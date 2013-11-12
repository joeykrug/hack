//
//  DetailViewController.h
//  hack
//
//  Created by joeykrug on 11/11/13.
//  Copyright (c) 2013 joeykrug. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
