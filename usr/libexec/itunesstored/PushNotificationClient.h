//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSString;

@interface PushNotificationClient : NSManagedObject
{
}

+ (id)entityFromContext:(id)arg1;	// IMP=0x000000010009d808

// Remaining properties
@property(copy, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;
@property(copy, nonatomic) NSArray *notifications; // @dynamic notifications;

@end

