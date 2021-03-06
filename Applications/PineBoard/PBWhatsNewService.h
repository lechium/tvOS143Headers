//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PBDialogContext, TVSBackgroundTask;

@interface PBWhatsNewService : NSObject
{
    _Bool _monitoringStarted;	// 8 = 0x8
    _Bool _shouldRetryShowingWhatsNew;	// 9 = 0x9
    _Bool _presentingWhatsNew;	// 10 = 0xa
    TVSBackgroundTask *_whatsNewCheckTask;	// 16 = 0x10
    double _checkTimeInterval;	// 24 = 0x18
    double _currentCheckTimeInterval;	// 32 = 0x20
    int _whatsNewNotifyToken;	// 40 = 0x28
    PBDialogContext *_dialogContext;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000001000b65d4
- (void).cxx_destruct;	// IMP=0x00000001000b7960
- (void)_presentWhatsNewDialog;	// IMP=0x00000001000b71c0
- (void)_scheduleWhatsNewCheckTaskWithInterval:(double)arg1;	// IMP=0x00000001000b6dbc
- (_Bool)_isHeadBoardAppFocused;	// IMP=0x00000001000b6d24
@property(nonatomic) double checkTimeInterval;
- (void)noteGoodTimeToShowWhatsNew;	// IMP=0x00000001000b6a84
- (void)startWhatsNewMonitoring;	// IMP=0x00000001000b6714
- (void)dealloc;	// IMP=0x00000001000b66a4

@end

