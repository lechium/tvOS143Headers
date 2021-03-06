//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

#import "CSCommandControlBehaviorMonitorDelegate-Protocol.h"

@class NSString;

@interface CSCommandControlStreamEventMonitor : CSEventMonitor <CSCommandControlBehaviorMonitorDelegate>
{
    _Bool _isCommandControlStreaming;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000c70b4
- (void)_notifyStopCommandControl;	// IMP=0x00000001000c7390
- (void)commandControlBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;	// IMP=0x00000001000c7384
- (void)commandControlBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x00000001000c7378
- (void)commandControlBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;	// IMP=0x00000001000c72f8
- (void)commandControlBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00000001000c72f4
- (_Bool)isStreaming;	// IMP=0x00000001000c7224
- (void)_stopMonitoring;	// IMP=0x00000001000c71c4
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000001000c7164
- (id)init;	// IMP=0x00000001000c7120

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

