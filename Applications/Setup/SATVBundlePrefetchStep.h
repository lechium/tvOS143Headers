//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVBundleStep.h"

#import "TVSKPrefetchStep-Protocol.h"

@class NSString;
@protocol TVSKPrefetchStep, TVSKStepDelegate;

@interface SATVBundlePrefetchStep : SATVBundleStep <TVSKPrefetchStep>
{
    id <TVSKPrefetchStep> _bundlePrefetchStep;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005b240
@property(readonly, nonatomic) id <TVSKPrefetchStep> bundlePrefetchStep; // @synthesize bundlePrefetchStep=_bundlePrefetchStep;
- (void)triggerStatusDidChangeForTriggers:(id)arg1 context:(id)arg2;	// IMP=0x000000010005b1a8
- (id)triggers;	// IMP=0x000000010005b154
- (id)init;	// IMP=0x000000010005b060

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate;
@property(readonly) Class superclass;

@end

