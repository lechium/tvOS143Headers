//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKFriendListEntryCacheObject.h"

@class NSDate, NSString;

@interface GKFriendRequestListEntryCacheObject : GKFriendListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x0000000100056328
- (id)internalRepresentation;	// IMP=0x0000000100056140
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100055ee4

// Remaining properties
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSString *email; // @dynamic email;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) _Bool wasViewed; // @dynamic wasViewed;

@end

