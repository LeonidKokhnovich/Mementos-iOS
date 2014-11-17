//
//  TasksListTableViewCell.h
//  Mementos
//
//  Created by Leonid Kokhnovych on 11/17/14.
//  Copyright (c) 2014 MyOrganization. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kTasksListTableViewCellReuseIdentifier @"TasksListTableViewCell"

@interface TasksListTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *tasksCountLabel;

@end
