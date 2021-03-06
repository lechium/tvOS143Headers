//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerAssetChangeDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerAssetChangeMonitor : NSObject
{
    int _notifyToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSVoiceTriggerAssetChangeDelegate> _delegate;	// 24 = 0x18
}

+ (id)sharedMonitor;	// IMP=0x0000000100026848
- (void).cxx_destruct;	// IMP=0x0000000100026aa4
@property(nonatomic) __weak id <CSVoiceTriggerAssetChangeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyVoiceTriggerAssetChanged;	// IMP=0x0000000100026a74
- (void)startMonitoring;	// IMP=0x0000000100026924
- (id)init;	// IMP=0x00000001000268b4

@end

