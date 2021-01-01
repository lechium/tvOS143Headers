//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPAVRoutingControllerDelegate-Protocol.h"
#import "PBAttentionAwarenessMonitorObserver-Protocol.h"
#import "PBHomeAccessoryManagerObserver-Protocol.h"
#import "PBPowerManagerObserver-Protocol.h"

@class MPAVRoutingController, NSString, PBAttentionAwarenessMonitor;

@interface PBConstantAudioOutputController : NSObject <MPAVRoutingControllerDelegate, PBAttentionAwarenessMonitorObserver, PBHomeAccessoryManagerObserver, PBPowerManagerObserver>
{
    _Bool _constantAudioOutputEnabled;	// 8 = 0x8
    MPAVRoutingController *_systemAudioRoutingController;	// 16 = 0x10
    PBAttentionAwarenessMonitor *_attentionAwarenessMonitor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001002648f4
@property(retain, nonatomic) PBAttentionAwarenessMonitor *attentionAwarenessMonitor; // @synthesize attentionAwarenessMonitor=_attentionAwarenessMonitor;
@property(nonatomic, getter=isConstantAudioOutputEnabled) _Bool constantAudioOutputEnabled; // @synthesize constantAudioOutputEnabled=_constantAudioOutputEnabled;
@property(retain, nonatomic) MPAVRoutingController *systemAudioRoutingController; // @synthesize systemAudioRoutingController=_systemAudioRoutingController;
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x00000001002645e8
- (void)homeAccessoryManager:(id)arg1 didChangeOdeonConfigured:(_Bool)arg2;	// IMP=0x00000001002643ac
- (void)attentionAwarenessMonitorDidRegainAttention:(id)arg1;	// IMP=0x00000001002642ac
- (void)attentionAwarenessMonitorDidLoseAttention:(id)arg1;	// IMP=0x00000001002641ac
- (void)powerManagerDidWakeSystem:(id)arg1;	// IMP=0x0000000100264138
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100264078
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100263e44
- (_Bool)isConstantAudioAlwaysAllowed;	// IMP=0x0000000100263d60
- (void)setConstantAudioOutputEnabled:(_Bool)arg1 reason:(id)arg2;	// IMP=0x0000000100263b10
- (void)enableConstantAudioOutputIfNeeded:(_Bool)arg1 reason:(id)arg2;	// IMP=0x00000001002637b8
- (_Bool)isEndpointHDMI;	// IMP=0x0000000100263654
- (_Bool)stopControllingConstantAudioOutput:(id *)arg1;	// IMP=0x00000001002635a0
- (_Bool)startControllingConstantAudioOutput:(id *)arg1;	// IMP=0x00000001002634f0
- (void)dealloc;	// IMP=0x00000001002633a4
- (id)init;	// IMP=0x000000010026307c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

