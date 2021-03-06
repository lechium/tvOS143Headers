//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSActivationEventNotificationHandlerDelegate-Protocol.h"
#import "CSSiriClientBehaviorMonitorDelegate-Protocol.h"

@class CSAsset, CSAudioProvider, CSAudioStreamHolding, NSMutableDictionary, NSString;
@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerFirstPassHearst : NSObject <CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate>
{
    float _remoteMicVADThreshold;	// 8 = 0x8
    float _remoteMicVADMyriadThreshold;	// 12 = 0xc
    float _minimumPhraseLengthForVADGating;	// 16 = 0x10
    id <CSVoiceTriggerDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSMutableDictionary *_hearstSecondPassRequests;	// 40 = 0x28
    CSAsset *_currentAsset;	// 48 = 0x30
    CSAudioStreamHolding *_triggeredAudioStreamHolding;	// 56 = 0x38
    CSAudioProvider *_triggeredAudioProvider;	// 64 = 0x40
    unsigned long long _secondChanceHotTillMachTime;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100095680
@property(nonatomic) unsigned long long secondChanceHotTillMachTime; // @synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime;
@property(retain, nonatomic) CSAudioProvider *triggeredAudioProvider; // @synthesize triggeredAudioProvider=_triggeredAudioProvider;
@property(retain, nonatomic) CSAudioStreamHolding *triggeredAudioStreamHolding; // @synthesize triggeredAudioStreamHolding=_triggeredAudioStreamHolding;
@property(nonatomic) float minimumPhraseLengthForVADGating; // @synthesize minimumPhraseLengthForVADGating=_minimumPhraseLengthForVADGating;
@property(nonatomic) float remoteMicVADMyriadThreshold; // @synthesize remoteMicVADMyriadThreshold=_remoteMicVADMyriadThreshold;
@property(nonatomic) float remoteMicVADThreshold; // @synthesize remoteMicVADThreshold=_remoteMicVADThreshold;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSMutableDictionary *hearstSecondPassRequests; // @synthesize hearstSecondPassRequests=_hearstSecondPassRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelAllAudioStreamHoldings;	// IMP=0x0000000100095440
- (void)_requestStartAudioStreamWitContext:(id)arg1 secondPassRequest:(id)arg2 startStreamOption:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000951b0
- (void)_handleSecondPassResult:(unsigned long long)arg1 secondPassRequest:(id)arg2 voiceTriggerInfo:(id)arg3 deviceId:(id)arg4 secondChanceCandidate:(_Bool)arg5 error:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001000948f4
- (void)_handleRemoteMicVoiceTriggerEvent:(id)arg1 secondPassRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100094070
- (void)_handleRemoteMicVADEventWithSecondPassRequest:(id)arg1;	// IMP=0x0000000100093dc8
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x0000000100093dc4
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x0000000100093dc0
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x0000000100093dbc
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x0000000100093cac
- (void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100093484
- (void)_setAsset:(id)arg1;	// IMP=0x0000000100093280
- (void)setAsset:(id)arg1;	// IMP=0x00000001000931e8
- (void)_reset;	// IMP=0x00000001000930c8
- (void)reset;	// IMP=0x0000000100093060
- (void)start;	// IMP=0x0000000100092f28
- (id)init;	// IMP=0x0000000100092e58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

