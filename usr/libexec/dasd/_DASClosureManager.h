//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DASClosureManager : NSObject
{
}

- (void)buildClosuresOpportunisticWithActivity:(id)arg1;	// IMP=0x0000000100034fec
- (id)mostRecentBootTime;	// IMP=0x0000000100034f44
- (void)buildClosuresOnBootWithActivity:(id)arg1;	// IMP=0x0000000100034f28
- (void)buildClosuresForMaximum:(int)arg1 withMinimumLikelihood:(double)arg2 recentInstallCount:(int)arg3 activity:(id)arg4;	// IMP=0x0000000100034618
- (id)appsLaunchedSinceBoot;	// IMP=0x00000001000342f0
- (id)recentlyInstalledAppsLimitedTo:(int)arg1 withStore:(id)arg2;	// IMP=0x0000000100033e78
- (void)buildClosuresForApps:(id)arg1 withActivity:(id)arg2;	// IMP=0x0000000100033cac
- (_Bool)isUserInstalledApp:(id)arg1;	// IMP=0x0000000100033ca4
- (void)registerForActivities;	// IMP=0x0000000100033c44
- (id)init;	// IMP=0x0000000100033bec

@end

