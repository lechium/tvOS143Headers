//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSString;

@interface HBTopShelfModel : NSObject <BSDescriptionProviding>
{
    NSString *_applicationIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000a01ac
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void)_applyItemUpdates:(id)arg1;	// IMP=0x00000001000a0194
- (void)_removedFromController;	// IMP=0x00000001000a0190
- (void)_addedToController;	// IMP=0x00000001000a018c
@property(readonly, copy, nonatomic) NSString *_logSafeDescription;
- (id)_logSafeDescriptionBuilder;	// IMP=0x00000001000a00ac
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001000a0054
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010009ffc8
- (id)succinctDescriptionBuilder;	// IMP=0x000000010009ffb8
- (id)succinctDescription;	// IMP=0x000000010009ff64
@property(readonly, copy) NSString *description;
- (id)initWithApplicationIdentifier:(id)arg1;	// IMP=0x000000010009fed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

