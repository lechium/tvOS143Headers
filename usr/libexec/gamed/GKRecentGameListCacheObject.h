//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListCacheObject.h"

@class GKPlayerProfileCacheObject, NSDate;

@interface GKRecentGameListCacheObject : GKListCacheObject
{
}

+ (Class)entryClass;	// IMP=0x0000000100057f08
+ (id)entityName;	// IMP=0x0000000100057efc
- (id)internalRepresentation;	// IMP=0x00000001000580cc
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000100057f14

// Remaining properties
@property(retain, nonatomic) GKPlayerProfileCacheObject *otherPlayer; // @dynamic otherPlayer;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;
@property(retain, nonatomic) NSDate *sinceDate; // @dynamic sinceDate;

@end

