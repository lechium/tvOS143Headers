//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSMetrics;

@interface UpdateMetricsManager : NSObject
{
    AMSMetrics *_metrics;	// 8 = 0x8
}

+ (_Bool)shouldCollectAppInstallationMetrics;	// IMP=0x0000000100206a8c
+ (id)sharedInstance;	// IMP=0x00000001002069ec
- (void).cxx_destruct;	// IMP=0x00000001002071f8
- (id)_amsMetrics;	// IMP=0x0000000100207144
- (double)_meanTimeBetweenEndKey:(id)arg1 startKey:(id)arg2 metrics:(id)arg3;	// IMP=0x0000000100207034
- (void)_insertEventIntoDatabase:(id)arg1;	// IMP=0x0000000100206ea4
- (void)processItemMetrics:(id)arg1;	// IMP=0x0000000100206ac4

@end

