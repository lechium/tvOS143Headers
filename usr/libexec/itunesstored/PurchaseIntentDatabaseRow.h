//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PurchaseIntentDatabaseRow : NSObject
{
    NSString *_productIdentifier;	// 8 = 0x8
    NSString *_appBundleId;	// 16 = 0x10
    NSNumber *_timestamp;	// 24 = 0x18
    NSString *_productName;	// 32 = 0x20
    NSString *_appName;	// 40 = 0x28
    NSNumber *_pid;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000c8a50
@property(retain, nonatomic) NSNumber *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;

@end

