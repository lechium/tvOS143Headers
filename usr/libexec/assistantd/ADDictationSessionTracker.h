//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADDictationSessionTracker : NSObject
{
    NSMutableArray *_activeSessions;	// 8 = 0x8
    NSMutableDictionary *_activeSessionsByUUID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100134d40
- (void)_endAudioFileIOTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x0000000100134bac
- (void)_endSpeechRecognitionTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x0000000100134a24
- (void)_endSessionTransactionForReason:(id)arg1 session:(id)arg2 isSpeechTransaction:(_Bool)arg3;	// IMP=0x00000001001348cc
- (void)_beginAudioFileIOTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x0000000100134688
- (void)_beginSpeechRecognitionTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x0000000100134458
- (id)_sessionWithUUID:(id)arg1;	// IMP=0x0000000100134448
- (id)_startedOrStartingSession;	// IMP=0x00000001001343a8
- (void)_removeSession:(id)arg1;	// IMP=0x0000000100134248
- (void)_addSession:(id)arg1;	// IMP=0x00000001001340e4
- (void)notifyAudioFileIOTransactionStoppedForReason:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0000000100133dc0
- (void)notifySpeechRecognitionTransactionStoppedForReason:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0000000100133a9c
- (void)stopSessionForReason:(id)arg1;	// IMP=0x0000000100133810
- (id)startSessionForReason:(id)arg1 languageCode:(id)arg2 options:(id)arg3 speechRequestOptions:(id)arg4;	// IMP=0x00000001001333cc
- (id)init;	// IMP=0x0000000100133300

@end

