//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVLoginStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (id)stableIdentifier;	// IMP=0x000000010007e048
+ (void)initialize;	// IMP=0x000000010007dfe4
- (void).cxx_destruct;	// IMP=0x000000010007e814
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (_Bool)_isAuthenticated;	// IMP=0x000000010007e79c
- (void)_notifyTriggerStatusChangeAndReset:(_Bool)arg1;	// IMP=0x000000010007e6e0
- (void)_handleLoginWithResult:(unsigned long long)arg1;	// IMP=0x000000010007e578
- (void)_showLoginViewController;	// IMP=0x000000010007e364
- (void)autoAdvance;	// IMP=0x000000010007e2ec
- (id)executeStepForContext:(id)arg1;	// IMP=0x000000010007e054

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
