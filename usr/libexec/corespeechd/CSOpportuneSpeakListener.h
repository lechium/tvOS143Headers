//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioStreamProvidingDelegate-Protocol.h"
#import "CSSPGEndpointAnalyzerDelegate-Protocol.h"

@class CSAudioRecordContext, CSAudioStream, CSPlainAudioFileWriter, CSSPGEndpointAnalyzer, NSMutableArray, NSString;
@protocol CSAudioSessionProviding, CSAudioStreamProviding, CSOpportuneSpeakListenerDelegate, OS_dispatch_queue;

@interface CSOpportuneSpeakListener : NSObject <CSAudioStreamProvidingDelegate, CSSPGEndpointAnalyzerDelegate>
{
    _Bool _isMediaPlayingNow;	// 8 = 0x8
    int _remoteVADSPGRatio;	// 12 = 0xc
    id <CSOpportuneSpeakListenerDelegate> _delegate;	// 16 = 0x10
    CSAudioStream *_audioStream;	// 24 = 0x18
    CSSPGEndpointAnalyzer *_spgEndpointAnalyzer;	// 32 = 0x20
    id <CSAudioStreamProviding> _audioStreamProvider;	// 40 = 0x28
    id <CSAudioSessionProviding> _audioSessionProvider;	// 48 = 0x30
    CSAudioRecordContext *_latestContext;	// 56 = 0x38
    NSMutableArray *_remoteVADAlignBuffer;	// 64 = 0x40
    unsigned long long _remoteVADAlignCount;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_alignBufferQueue;	// 80 = 0x50
    CSPlainAudioFileWriter *_audioFileWriter;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010005d55c
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *alignBufferQueue; // @synthesize alignBufferQueue=_alignBufferQueue;
@property(nonatomic) unsigned long long remoteVADAlignCount; // @synthesize remoteVADAlignCount=_remoteVADAlignCount;
@property(retain, nonatomic) NSMutableArray *remoteVADAlignBuffer; // @synthesize remoteVADAlignBuffer=_remoteVADAlignBuffer;
@property _Bool isMediaPlayingNow; // @synthesize isMediaPlayingNow=_isMediaPlayingNow;
@property(retain, nonatomic) CSAudioRecordContext *latestContext; // @synthesize latestContext=_latestContext;
@property(retain, nonatomic) id <CSAudioSessionProviding> audioSessionProvider; // @synthesize audioSessionProvider=_audioSessionProvider;
@property(retain, nonatomic) id <CSAudioStreamProviding> audioStreamProvider; // @synthesize audioStreamProvider=_audioStreamProvider;
@property(nonatomic) int remoteVADSPGRatio; // @synthesize remoteVADSPGRatio=_remoteVADSPGRatio;
@property(retain, nonatomic) CSSPGEndpointAnalyzer *spgEndpointAnalyzer; // @synthesize spgEndpointAnalyzer=_spgEndpointAnalyzer;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(nonatomic) __weak id <CSOpportuneSpeakListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)spgEndpointAnalyzer:(id)arg1 hasSilenceScoreEstimate:(double)arg2;	// IMP=0x000000010005d14c
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x000000010005d148
- (_Bool)_shouldReportBoron;	// IMP=0x000000010005d130
- (_Bool)_popRemoteVADSignal;	// IMP=0x000000010005d0a8
- (void)_addRemoteVADSignal:(_Bool)arg1;	// IMP=0x000000010005d004
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x000000010005ccc4
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;	// IMP=0x000000010005cc14
- (void)stopListenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005cc00
- (void)stopListenWithStateReset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005c834
- (void)_startRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c2ac
- (void)_resetAlignBuffer;	// IMP=0x000000010005c27c
- (void)startListenWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005bde0
- (id)init;	// IMP=0x000000010005bd0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

