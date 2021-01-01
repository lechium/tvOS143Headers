//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CacheDeleteManagedAssets : NSObject
{
    _Bool _cancel;	// 8 = 0x8
    int _urgency;	// 12 = 0xc
    NSString *_volume;	// 16 = 0x10
    NSDictionary *_info;	// 24 = 0x18
}

+ (id)cacheDeleteManagedAssetsWithInfo:(id)arg1 atUrgency:(int)arg2;	// IMP=0x0000000100008820
- (void).cxx_destruct;	// IMP=0x000000010000adec
@property _Bool cancel; // @synthesize cancel=_cancel;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly) int urgency; // @synthesize urgency=_urgency;
@property(readonly, nonatomic) NSString *volume; // @synthesize volume=_volume;
- (id)analytics;	// IMP=0x000000010000a514
- (void)periodic:(id)arg1;	// IMP=0x0000000100009ee0
- (void)cancelPurge;	// IMP=0x0000000100009ed0
- (unsigned long long)purgeAssets:(unsigned long long)arg1 testObject:(id)arg2;	// IMP=0x00000001000097a0
- (id)assetsFromArray:(id)arg1 forAmount:(unsigned long long)arg2;	// IMP=0x000000010000952c
- (id)sizeEligibleAsset:(long long *)arg1;	// IMP=0x0000000100009288
- (id)sortAssets:(id)arg1;	// IMP=0x0000000100008a40
- (_Bool)periodicShouldRemoveAsset:(id)arg1;	// IMP=0x0000000100008944
- (_Bool)dateHasExpired:(id)arg1 interval:(double)arg2;	// IMP=0x0000000100008884
- (id)initWithInfo:(id)arg1 atUrgency:(int)arg2;	// IMP=0x00000001000086f0

@end
