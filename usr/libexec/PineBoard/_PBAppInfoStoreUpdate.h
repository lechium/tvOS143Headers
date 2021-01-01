//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface _PBAppInfoStoreUpdate : NSObject
{
    long long _updateType;	// 8 = 0x8
    NSSet *_applicationInfos;	// 16 = 0x10
    NSSet *_placeholders;	// 24 = 0x18
}

+ (id)updateDynamicState;	// IMP=0x000000010002ac88
+ (id)updatePolicy;	// IMP=0x000000010002ac3c
+ (id)updatePlaceholders:(id)arg1;	// IMP=0x000000010002abb8
+ (id)removePlaceholders:(id)arg1;	// IMP=0x000000010002ab34
+ (id)addPlaceholders:(id)arg1;	// IMP=0x000000010002aab0
+ (id)updateLocalizations:(id)arg1;	// IMP=0x000000010002aa2c
+ (id)updateAlternateAppIcons:(id)arg1;	// IMP=0x000000010002a9a8
+ (id)updateApplicationInfos:(id)arg1;	// IMP=0x000000010002a924
+ (id)removeApplicationInfos:(id)arg1;	// IMP=0x000000010002a8a0
+ (id)addApplicationInfos:(id)arg1;	// IMP=0x000000010002a81c
- (void).cxx_destruct;	// IMP=0x000000010002b288
@property(readonly, copy, nonatomic) NSSet *placeholders; // @synthesize placeholders=_placeholders;
@property(readonly, copy, nonatomic) NSSet *applicationInfos; // @synthesize applicationInfos=_applicationInfos;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
- (id)description;	// IMP=0x000000010002aee0
- (id)initWithType:(long long)arg1 applicationInfos:(id)arg2 placeholders:(id)arg3;	// IMP=0x000000010002acd4

@end
