//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;	// IMP=0x0000000100050584
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x0000000100050a1c
- (void)_systemControllerDied:(id)arg1;	// IMP=0x0000000100050918
- (void)_startObservingSpeechDetectionVADPresence;	// IMP=0x0000000100050830
- (_Bool)isPresent;	// IMP=0x00000001000507a8
- (void)handleSpeechDetectionVADPresentChange:(id)arg1;	// IMP=0x00000001000506a8
- (void)_stopMonitoring;	// IMP=0x0000000100050658
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0000000100050624
- (id)init;	// IMP=0x00000001000505f0

@end

