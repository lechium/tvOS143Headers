//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDDemoUpdateStatusDelegate-Protocol.h"

@class BKSApplicationStateMonitor, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MSDUIHelper : NSObject <MSDDemoUpdateStatusDelegate>
{
    _Bool _allowCancel;	// 8 = 0x8
    int _fullScreenState;	// 12 = 0xc
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSString *_fullScreenUIAppId;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_uiHelperQueue;	// 32 = 0x20
    NSString *_message;	// 40 = 0x28
    NSObject<OS_xpc_object> *_pendingMessage;	// 48 = 0x30
    long long _currentProgress;	// 56 = 0x38
    BKSApplicationStateMonitor *_fullScreenUIAppMonitor;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x00000001000756c4
- (void).cxx_destruct;	// IMP=0x0000000100077df0
@property(retain) BKSApplicationStateMonitor *fullScreenUIAppMonitor; // @synthesize fullScreenUIAppMonitor=_fullScreenUIAppMonitor;
@property long long currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain) NSObject<OS_xpc_object> *pendingMessage; // @synthesize pendingMessage=_pendingMessage;
@property int fullScreenState; // @synthesize fullScreenState=_fullScreenState;
@property _Bool allowCancel; // @synthesize allowCancel=_allowCancel;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) NSObject<OS_dispatch_queue> *uiHelperQueue; // @synthesize uiHelperQueue=_uiHelperQueue;
@property(retain) NSString *fullScreenUIAppId; // @synthesize fullScreenUIAppId=_fullScreenUIAppId;
- (void)demoUpdateCompleted:(id)arg1;	// IMP=0x0000000100077d48
- (void)demoUpdateAllowCancel:(_Bool)arg1;	// IMP=0x0000000100077a7c
- (void)demoUpdateProgress:(long long)arg1;	// IMP=0x0000000100077790
- (void)demoUpdateFailed:(id)arg1;	// IMP=0x00000001000771ec
- (_Bool)launchFullScreenUI_tv;	// IMP=0x0000000100076d70
- (void)handleFullScreenUIAppStateChange:(unsigned int)arg1;	// IMP=0x00000001000769d0
- (void)deactivateFullScreenUIAppMonitor;	// IMP=0x000000010007693c
- (void)activateFullScreenUIAppMonitor;	// IMP=0x0000000100076734
- (_Bool)launchFullScreenUI;	// IMP=0x00000001000766c0
- (void)requestFullScreenUI;	// IMP=0x0000000100076488
- (void)fullScreenUICanceledByUser;	// IMP=0x0000000100076344
- (void)stopFullScreenUI:(id)arg1;	// IMP=0x0000000100075d94
- (void)startFullScreenUIWith:(id)arg1 allowCancel:(_Bool)arg2;	// IMP=0x0000000100075b20
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)init;	// IMP=0x0000000100075730

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
