//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
    _Bool _isVoiceTriggerEnabled;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x0000000100086db8
- (_Bool)_checkVoiceTriggerEnabled;	// IMP=0x00000001000872d8
- (_Bool)isEnabled;	// IMP=0x00000001000872c8
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;	// IMP=0x0000000100087250
- (void)_didReceiveVoiceTriggerSettingChanged:(_Bool)arg1;	// IMP=0x00000001000871d8
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(_Bool)arg1;	// IMP=0x0000000100087160
- (void)_stopMonitoring;	// IMP=0x000000010008708c
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0000000100086e78
- (id)init;	// IMP=0x0000000100086e24

@end
