//
//  DKComment.h
//  DribbbleKit
//
//  Created by 0day on 13-4-6.
//  Copyright (c) 2013年 All4Love. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class DKComments, DKPlayer;

@interface DKComment : NSManagedObject

@property (nonatomic, retain) NSString * body;
@property (nonatomic, retain) NSString * commentID;
@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) NSNumber * likesCount;
@property (nonatomic, retain) DKPlayer *player;
@property (nonatomic, retain) DKComments *comments;

@end
