//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AppUsageManagerApp : NSObject
{
    _Bool _systemApp;	// 8 = 0x8
    float _probability;	// 12 = 0xc
    NSString *_bundleID;	// 16 = 0x10
    long long _launchCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001fcc40
@property(nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
@property(nonatomic) float probability; // @synthesize probability=_probability;
@property(nonatomic) long long launchCount; // @synthesize launchCount=_launchCount;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x00000001001fcbbc

@end
