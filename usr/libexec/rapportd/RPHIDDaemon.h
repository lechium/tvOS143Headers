//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol RPMessageable;

@interface RPHIDDaemon : NSObject
{
    NSMutableDictionary *_activeTouchEventMap;	// 8 = 0x8
    unsigned long long _epochNanos;	// 16 = 0x10
    unsigned long long _epochTicks;	// 24 = 0x18
    unsigned long long _epochResetTicks;	// 32 = 0x20
    struct __IOHIDEventSystemClient *_hidClient;	// 40 = 0x28
    struct __IOHIDEventSystemClient *_hidGCClient;	// 48 = 0x30
    struct __IOHIDUserDevice *_hidGCDevice;	// 56 = 0x38
    unsigned long long _hidGCSenderID;	// 64 = 0x40
    _Bool _hidGCSenderIDInitialized;	// 72 = 0x48
    unsigned long long _hidSenderID;	// 80 = 0x50
    _Bool _hidSenderIDInitialized;	// 88 = 0x58
    struct __IOHIDUserDevice *_hidTouchDevice;	// 96 = 0x60
    unsigned long long _lastEventTicks;	// 104 = 0x68
    unsigned long long _lastSelectButtonDown;	// 112 = 0x70
    id <RPMessageable> _messenger;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000100033280
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)_setupHIDSenderIDIfNeeded;	// IMP=0x0000000100033068
- (_Bool)_setupHIDTouchDeviceAndReturnError:(id *)arg1;	// IMP=0x0000000100032e84
- (void)_handleSelectWithButtonState:(int)arg1;	// IMP=0x0000000100032d68
- (void)_handleTouchEvent:(id)arg1;	// IMP=0x00000001000328c8
- (void)_handleTouchStop:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000327d8
- (void)_handleTouchStart:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032604
- (void)_setupHIDGCSenderIDIfNeeded;	// IMP=0x00000001000323fc
- (_Bool)_setupHIDGCDeviceWithOptions:(id)arg1 andReturnError:(id *)arg2;	// IMP=0x000000010003214c
- (void)_handleGameControllerEvent:(id)arg1;	// IMP=0x0000000100031d1c
- (void)_handleGameControllerStop:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100031cbc
- (void)_handleGameControllerStart:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100031ba8
- (void)_wakeSystemWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100031a3c
- (void)_sleepSystemWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000318d0
- (void)_injectKeyboardEventUsagePage:(unsigned int)arg1 usageCode:(unsigned int)arg2 buttonState:(int)arg3;	// IMP=0x00000001000316b4
- (void)_activateScreenSaverWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100031418
- (void)_handleCommand:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100031058
- (void)deregisteredEventID:(id)arg1;	// IMP=0x0000000100031054
- (void)registeredEventID:(id)arg1;	// IMP=0x0000000100031050
- (void)invalidate;	// IMP=0x0000000100030f14
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x0000000100030924

@end
