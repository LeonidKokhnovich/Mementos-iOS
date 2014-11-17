//
//  TasksDatabaseHelper.m
//  Mementos
//
//  Created by Leonid Kokhnovych on 11/17/14.
//  Copyright (c) 2014 MyOrganization. All rights reserved.
//

#import "AppDelegate.h"
#import "TasksDatabaseHelper.h"

@implementation TasksDatabaseHelper

+ (TasksDatabaseHelper *)sharedInstance
{
    static TasksDatabaseHelper *instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[TasksDatabaseHelper alloc] init];
    });
    return instance;
}

- (NSManagedObjectContext *)managerObjectContext
{
    AppDelegate *appDelegate = [[UIApplication sharedApplication] delegate];
    return appDelegate.managedObjectContext;
}

@end
