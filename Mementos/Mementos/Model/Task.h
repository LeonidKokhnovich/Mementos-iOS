//
//  Task.h
//  Mementos
//
//  Created by Leonid Kokhnovych on 11/17/14.
//  Copyright (c) 2014 MyOrganization. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class TasksList;

@interface Task : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSDate * fireDate;
@property (nonatomic, retain) NSNumber * state;
@property (nonatomic, retain) TasksList *container;

@end
