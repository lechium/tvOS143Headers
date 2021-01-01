//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSAVVCRecordingClientMonitor : CSEventMonitor
{
    unsigned long long _numOfAVVCRecordingClients;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010009f678
@property(readonly, nonatomic) unsigned long long numOfAVVCRecordingClients; // @synthesize numOfAVVCRecordingClients=_numOfAVVCRecordingClients;
- (void)_stopMonitoring;	// IMP=0x000000010009f6c0
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010009f6bc
- (id)init;	// IMP=0x000000010009f680

@end
