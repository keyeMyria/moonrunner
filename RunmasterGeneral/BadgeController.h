//
//  BadgeController.h
//  RunMaster
//
//  Created by Matt Luedke on 5/21/14.
//  Copyright (c) 2014 Matt Luedke. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Badge;

@interface BadgeController : NSObject

+ (BadgeController *)defaultController;

- (NSArray *)earnStatusesForRuns:(NSArray *)runArray;

- (Badge *)bestBadgeForDistance:(float)distance;

- (Badge *)nextBadgeForDistance:(float)distance;

@end
