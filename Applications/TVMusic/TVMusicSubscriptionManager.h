//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVMusicSubscriptionManager : NSObject
{
    _Bool _hasMusicSubscription;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010003416c
@property _Bool hasMusicSubscription; // @synthesize hasMusicSubscription=_hasMusicSubscription;
- (void)_subscriptionChangedNotification:(id)arg1;	// IMP=0x0000000100034440
- (void)refreshSubscriptionStatus;	// IMP=0x00000001000343f8
- (void)dealloc;	// IMP=0x0000000100034380
- (id)init;	// IMP=0x00000001000341d8

@end

