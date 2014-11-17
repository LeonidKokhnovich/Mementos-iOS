//
//  TasksDatabaseHelper.h
//  Mementos
//
//  Created by Leonid Kokhnovych on 11/17/14.
//  Copyright (c) 2014 MyOrganization. All rights reserved.
//

@import CoreData;
#import <Foundation/Foundation.h>

@interface TasksDatabaseHelper : NSObject

+ (TasksDatabaseHelper *)sharedInstance;

- (NSManagedObjectContext *)managerObjectContext;

@end
