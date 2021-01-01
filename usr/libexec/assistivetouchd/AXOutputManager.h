//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXAccessQueue, AXSpeechManager, NSMutableDictionary, NSMutableSet;

@interface AXOutputManager : NSObject
{
    _Bool _speechEnabled;	// 8 = 0x8
    _Bool _soundAudioSessionActive;	// 9 = 0x9
    _Bool _speechAudioSessionActive;	// 10 = 0xa
    _Bool _soundEffectsEnabled;	// 11 = 0xb
    NSMutableDictionary *_registeredSoundIDs;	// 16 = 0x10
    AXAccessQueue *_outputAccessQueue;	// 24 = 0x18
    AXSpeechManager *_speechManager;	// 32 = 0x20
    NSMutableSet *_unfinishedSpeechActionsWithCompletionBlocks;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000a2a14
@property(retain, nonatomic) NSMutableSet *unfinishedSpeechActionsWithCompletionBlocks; // @synthesize unfinishedSpeechActionsWithCompletionBlocks=_unfinishedSpeechActionsWithCompletionBlocks;
@property(nonatomic, getter=areSoundEffectsEnabled) _Bool soundEffectsEnabled; // @synthesize soundEffectsEnabled=_soundEffectsEnabled;
@property(nonatomic, getter=isSpeechAudioSessionActive) _Bool speechAudioSessionActive; // @synthesize speechAudioSessionActive=_speechAudioSessionActive;
@property(nonatomic, getter=isSoundAudioSessionActive) _Bool soundAudioSessionActive; // @synthesize soundAudioSessionActive=_soundAudioSessionActive;
@property(nonatomic, getter=isSpeechEnabled) _Bool speechEnabled; // @synthesize speechEnabled=_speechEnabled;
@property(retain, nonatomic) AXSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) AXAccessQueue *outputAccessQueue; // @synthesize outputAccessQueue=_outputAccessQueue;
@property(retain, nonatomic) NSMutableDictionary *registeredSoundIDs; // @synthesize registeredSoundIDs=_registeredSoundIDs;
- (id)_urlForSoundEffect:(int)arg1;	// IMP=0x00000001000a2780
- (void)_flushSoundIDs;	// IMP=0x00000001000a259c
- (void)_playSoundWithSoundID:(unsigned int)arg1;	// IMP=0x00000001000a2590
- (void)cancelSpeech;	// IMP=0x00000001000a2558
- (void)dispatchSpeechAction:(id)arg1;	// IMP=0x00000001000a24b0
- (void)playSound:(int)arg1;	// IMP=0x00000001000a21e0
- (id)_voiceOverBundle;	// IMP=0x00000001000a21c4
- (void)dealloc;	// IMP=0x00000001000a1e90
- (id)init;	// IMP=0x00000001000a1db8
@property(readonly, nonatomic) _Bool scanningInterruptsSpeech;
- (void)outputScannerAnnouncement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a2c3c
- (void)outputScannerFocusContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a2a5c

@end
