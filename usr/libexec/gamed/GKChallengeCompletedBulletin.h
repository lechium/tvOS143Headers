//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeBulletin.h"

@interface GKChallengeCompletedBulletin : GKChallengeBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c7f0
- (void)handleAction:(id)arg1;	// IMP=0x000000010002e098
- (unsigned long long)launchEventType;	// IMP=0x000000010002e090
- (void)assembleBulletin;	// IMP=0x000000010002dcf0
- (void)notifyClient:(id)arg1;	// IMP=0x000000010002db8c
- (void)dealloc;	// IMP=0x000000010002c7bc
- (id)init;	// IMP=0x000000010002c788

@end

