//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSNumber, NSString;

@interface PushNotificationEnvironment : NSManagedObject
{
}

+ (id)entityFromContext:(id)arg1;	// IMP=0x00000001000a0db8

// Remaining properties
@property(copy, nonatomic) NSString *environmentName; // @dynamic environmentName;
@property(retain, nonatomic) NSNumber *lastAccountIdentifier; // @dynamic lastAccountIdentifier;
@property(copy, nonatomic) NSData *tokenData; // @dynamic tokenData;

@end

