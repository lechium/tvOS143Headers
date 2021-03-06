//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVTimeZoneStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (id)stableIdentifier;	// IMP=0x00000001000475f4
+ (void)initialize;	// IMP=0x0000000100047590
- (void).cxx_destruct;	// IMP=0x0000000100047fc8
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_completeStep;	// IMP=0x0000000100047f24
- (void)_setTimeZone:(id)arg1 timeZoneCityID:(id)arg2;	// IMP=0x0000000100047cec
- (void)_setTimeZoneWithCity:(id)arg1;	// IMP=0x0000000100047c28
- (void)_handleSelectedCity:(id)arg1;	// IMP=0x0000000100047bf4
- (void)_showTimeZoneViewController;	// IMP=0x00000001000479cc
- (void)autoAdvance;	// IMP=0x0000000100047958
- (id)executeStepForContext:(id)arg1;	// IMP=0x0000000100047600

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

