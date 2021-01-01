//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKExpressTapToSetupItemProviderStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVAppAnalyticsStep : NSObject <TVSKExpressTapToSetupItemProviderStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (_Bool)_isAppAnalyticsSupported;	// IMP=0x000000010004b330
+ (id)expressTapToSetupItemWithTapToSetupDeviceInfo:(id)arg1;	// IMP=0x000000010004b210
+ (id)stableIdentifier;	// IMP=0x000000010004ae1c
+ (void)initialize;	// IMP=0x000000010004adb8
- (void).cxx_destruct;	// IMP=0x000000010004b7cc
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_reset;	// IMP=0x000000010004b794
- (void)_enableAppAnalytics:(_Bool)arg1 markAsPresented:(_Bool)arg2;	// IMP=0x000000010004b6bc
- (id)_handleDidConsentToAnalytics:(_Bool)arg1;	// IMP=0x000000010004b670
- (void)_completeStepWithAnalyticsConsent:(_Bool)arg1;	// IMP=0x000000010004b5f8
- (void)_showAppAnalyticsViewController;	// IMP=0x000000010004b3e4
- (void)autoAdvance;	// IMP=0x000000010004b198
- (id)executeStepForContext:(id)arg1;	// IMP=0x000000010004ae28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
