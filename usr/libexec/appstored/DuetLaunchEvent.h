//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString, NSURL;

@interface DuetLaunchEvent : NSObject <NSCopying>
{
    _Bool _isExtensionUsage;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSString *_bundleVersion;	// 24 = 0x18
    NSString *_clipBundleID;	// 32 = 0x20
    NSURL *_clipFullURL;	// 40 = 0x28
    NSString *_clipLaunchReason;	// 48 = 0x30
    NSURL *_clipReferrerURL;	// 56 = 0x38
    NSString *_clipReferrerBundleID;	// 64 = 0x40
    NSString *_clipWebAppBundleID;	// 72 = 0x48
    NSString *_containingBundleID;	// 80 = 0x50
    NSDate *_endDate;	// 88 = 0x58
    long long _eventTime;	// 96 = 0x60
    NSNumber *_evid;	// 104 = 0x68
    NSNumber *_itemID;	// 112 = 0x70
    NSString *_itemName;	// 120 = 0x78
    NSDate *_lastEventEndDate;	// 128 = 0x80
    NSString *_launchReason;	// 136 = 0x88
    unsigned long long _sourceStream;	// 144 = 0x90
    NSDate *_startDate;	// 152 = 0x98
    long long _usageTime;	// 160 = 0xa0
    long long _usageCount;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000001001196fc
@property(nonatomic) long long usageCount; // @synthesize usageCount=_usageCount;
@property(nonatomic) long long usageTime; // @synthesize usageTime=_usageTime;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long sourceStream; // @synthesize sourceStream=_sourceStream;
@property(copy, nonatomic) NSString *launchReason; // @synthesize launchReason=_launchReason;
@property(copy, nonatomic) NSDate *lastEventEndDate; // @synthesize lastEventEndDate=_lastEventEndDate;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) _Bool isExtensionUsage; // @synthesize isExtensionUsage=_isExtensionUsage;
@property(copy, nonatomic) NSNumber *evid; // @synthesize evid=_evid;
@property(nonatomic) long long eventTime; // @synthesize eventTime=_eventTime;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSString *containingBundleID; // @synthesize containingBundleID=_containingBundleID;
@property(copy, nonatomic) NSString *clipWebAppBundleID; // @synthesize clipWebAppBundleID=_clipWebAppBundleID;
@property(copy, nonatomic) NSString *clipReferrerBundleID; // @synthesize clipReferrerBundleID=_clipReferrerBundleID;
@property(copy, nonatomic) NSURL *clipReferrerURL; // @synthesize clipReferrerURL=_clipReferrerURL;
@property(copy, nonatomic) NSString *clipLaunchReason; // @synthesize clipLaunchReason=_clipLaunchReason;
@property(copy, nonatomic) NSURL *clipFullURL; // @synthesize clipFullURL=_clipFullURL;
@property(copy, nonatomic) NSString *clipBundleID; // @synthesize clipBundleID=_clipBundleID;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)_formatTimeInternal:(long long)arg1;	// IMP=0x000000010011941c
- (id)_simpleTime:(id)arg1;	// IMP=0x0000000100119354
- (id)_simpleDate:(id)arg1;	// IMP=0x000000010011924c
- (id)description;	// IMP=0x00000001001190d8
- (id)dictionary;	// IMP=0x0000000100118c04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001189c8

@end

