//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKTurnBasedService.h"

#import "GKTurnBasedServicePrivate-Protocol.h"

@class NSString;

@interface GKTurnBasedServicePrivate : GKTurnBasedService <GKTurnBasedServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001001c7720
+ (Class)interfaceClass;	// IMP=0x00000001001c7714
- (oneway void)showMatch:(id)arg1;	// IMP=0x00000001001c7d38
- (oneway void)getTurnBasedBadgeCountWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001c7728

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

