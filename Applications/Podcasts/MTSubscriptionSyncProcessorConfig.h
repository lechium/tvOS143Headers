//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTSubscriptionSyncProcessorConfig : NSObject
{
    _Bool _deletePodcastIfNotSubscribed;	// 8 = 0x8
    _Bool _updateSettingsIfNotSubscribed;	// 9 = 0x9
    _Bool _supportsMetrics;	// 10 = 0xa
}

+ (id)watchConfig:(_Bool)arg1;	// IMP=0x0000000100051dec
+ (id)defaultConfig:(_Bool)arg1;	// IMP=0x0000000100051d84
@property(nonatomic) _Bool supportsMetrics; // @synthesize supportsMetrics=_supportsMetrics;
@property(nonatomic) _Bool updateSettingsIfNotSubscribed; // @synthesize updateSettingsIfNotSubscribed=_updateSettingsIfNotSubscribed;
@property(nonatomic) _Bool deletePodcastIfNotSubscribed; // @synthesize deletePodcastIfNotSubscribed=_deletePodcastIfNotSubscribed;

@end

