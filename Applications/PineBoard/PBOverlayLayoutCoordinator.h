//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, PBOverlayLayoutElementMap;
@protocol BSInvalidatable;

@interface PBOverlayLayoutCoordinator : NSObject
{
    struct os_unfair_lock_s _controllersLock;	// 8 = 0x8
    NSHashTable *_controllers;	// 16 = 0x10
    PBOverlayLayoutElementMap *_elementMap;	// 24 = 0x18
    id <BSInvalidatable> _stateCaptureHandle;	// 32 = 0x20
}

+ (id)defaultCoordinator;	// IMP=0x00000001000d5f7c
- (void).cxx_destruct;	// IMP=0x00000001000d8eac
@property(retain, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
@property(readonly, nonatomic) PBOverlayLayoutElementMap *elementMap; // @synthesize elementMap=_elementMap;
@property(readonly, nonatomic) NSHashTable *controllers; // @synthesize controllers=_controllers;
@property(readonly, nonatomic) struct os_unfair_lock_s controllersLock; // @synthesize controllersLock=_controllersLock;
- (id)_stateDumpWithBounds:(struct CGRect)arg1;	// IMP=0x00000001000d8b98
- (id)_lock_publishChangeSet:(id)arg1 originatingFrom:(id)arg2 withTransitionContext:(id)arg3;	// IMP=0x00000001000d8068
- (id)removeLayoutElementWithIdentifier:(id)arg1 forController:(id)arg2 withTransitionContext:(id)arg3;	// IMP=0x00000001000d792c
- (id)addLayoutElement:(id)arg1 forController:(id)arg2 withTransitionContext:(id)arg3;	// IMP=0x00000001000d70b0
- (void)removeController:(id)arg1;	// IMP=0x00000001000d68d0
- (void)addController:(id)arg1;	// IMP=0x00000001000d64c4
- (void)dealloc;	// IMP=0x00000001000d6448
- (id)init;	// IMP=0x00000001000d6370
- (id)initWithBounds:(struct CGRect)arg1;	// IMP=0x00000001000d607c

@end

