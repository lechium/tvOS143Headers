//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GKPlayerProfileCacheObject, NSDate;

@interface FriendPlayedEntry : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00000001001dd5bc

// Remaining properties
@property(retain, nonatomic) GKPlayerProfileCacheObject *friend; // @dynamic friend;
@property(copy, nonatomic) NSDate *playedAt; // @dynamic playedAt;

@end

