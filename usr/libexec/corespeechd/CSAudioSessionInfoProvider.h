//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioSessionInfoProviding-Protocol.h"

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAudioSessionInfoProvider : NSObject <CSAudioSessionInfoProviding>
{
    NSObject<OS_dispatch_queue> *_sessionInfoQueue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100011fdc
- (void).cxx_destruct;	// IMP=0x0000000100013094
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionInfoQueue; // @synthesize sessionInfoQueue=_sessionInfoQueue;
- (void)_deregisterAudioSessionNotifications;	// IMP=0x0000000100012f8c
- (void)_registerAudioSessionNotifications;	// IMP=0x0000000100012f58
- (void)_audioRouteChanged:(id)arg1;	// IMP=0x0000000100012d18
- (void)_handleInterruption:(id)arg1;	// IMP=0x0000000100012ad8
- (void)_registerAudioRouteChangeNotification;	// IMP=0x0000000100012960
- (void)_registerInterruptionNotification;	// IMP=0x00000001000127e8
- (void)_stopMonitoring;	// IMP=0x0000000100012788
- (void)_startMonitoring;	// IMP=0x0000000100012728
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x000000010001252c
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;	// IMP=0x0000000100012370
- (unsigned int)audioSessionID;	// IMP=0x000000010001231c
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000100012224
- (void)registerObserver:(id)arg1;	// IMP=0x0000000100012128
- (void)dealloc;	// IMP=0x00000001000120dc
- (id)init;	// IMP=0x0000000100012048

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

