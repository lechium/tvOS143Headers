//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString, SATVNetworkValidationContainerViewController;
@protocol TVSKStepDelegate;

@interface SATVNetworkValidationStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
    SATVNetworkValidationContainerViewController *_networkValidationContainerViewController;	// 16 = 0x10
}

+ (id)stableIdentifier;	// IMP=0x000000010000b2e8
+ (void)initialize;	// IMP=0x000000010000b284
- (void).cxx_destruct;	// IMP=0x000000010000b7f4
@property(retain, nonatomic) SATVNetworkValidationContainerViewController *networkValidationContainerViewController; // @synthesize networkValidationContainerViewController=_networkValidationContainerViewController;
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_displayNetworkValidationViewController;	// IMP=0x000000010000b534
- (void)autoAdvance;	// IMP=0x000000010000b4a0
- (id)executeStepForContext:(id)arg1;	// IMP=0x000000010000b2f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
