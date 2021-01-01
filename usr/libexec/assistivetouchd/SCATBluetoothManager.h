//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSPointerArray;
@protocol OS_dispatch_queue;

@interface SCATBluetoothManager : NSObject
{
    NSPointerArray *_deviceListeners;	// 8 = 0x8
    struct BTSessionImpl *_session;	// 16 = 0x10
    struct BTLocalDeviceImpl *_localDevice;	// 24 = 0x18
    struct BTAccessoryManagerImpl *_accessoryManager;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableArray *_activationReasons;	// 48 = 0x30
    NSMutableDictionary *_addressToDeviceMap;	// 56 = 0x38
    int _sessionState;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x0000000100027654
+ (id)superNew;	// IMP=0x0000000100027620
- (void).cxx_destruct;	// IMP=0x000000010002921c
- (void)sendConfigurationMessageToDevice:(id)arg1 ofType:(unsigned char)arg2 value:(unsigned int)arg3;	// IMP=0x0000000100028f94
- (void)sendCustomMessageToDevice:(id)arg1 ofType:(int)arg2 withData:(id)arg3;	// IMP=0x0000000100028c5c
- (void)getExtantDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028b8c
- (void)removeDeviceListener:(id)arg1;	// IMP=0x0000000100028a60
- (void)addDeviceListener:(id)arg1;	// IMP=0x00000001000289cc
- (void)checkIfActiveForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028898
- (void)removeActivationReason:(id)arg1;	// IMP=0x00000001000287d8
- (void)addActivationReason:(id)arg1;	// IMP=0x0000000100028718
- (void)_accessoryCustomMessageForAccessoryManager:(struct BTAccessoryManagerImpl *)arg1 device:(struct BTDeviceImpl *)arg2 customMessageType:(int)arg3 data:(char *)arg4 dataSize:(unsigned long long)arg5;	// IMP=0x0000000100028584
- (void)_serviceEventForDevice:(struct BTDeviceImpl *)arg1 serviceMask:(unsigned int)arg2 eventType:(int)arg3 specificEvent:(unsigned int)arg4 result:(int)arg5;	// IMP=0x0000000100028578
- (void)_accessoryEventForManager:(struct BTAccessoryManagerImpl *)arg1 event:(int)arg2 device:(struct BTDeviceImpl *)arg3 state:(int)arg4;	// IMP=0x000000010002856c
- (void)_sessionEventForSession:(struct BTSessionImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x0000000100028340
- (void)_didDisconnect;	// IMP=0x00000001000282e0
- (void)_didConnectWithSession:(struct BTSessionImpl *)arg1;	// IMP=0x00000001000281b4
- (void)_probeAccessories;	// IMP=0x0000000100027ae8
- (void)_beginStateTransitionIfNecessary;	// IMP=0x00000001000279a0
- (void)_beginDetach;	// IMP=0x0000000100027930
- (void)_beginAttach;	// IMP=0x00000001000277f4
- (int)_desiredSessionState;	// IMP=0x00000001000277c8
- (int)_sessionState;	// IMP=0x00000001000277c0
- (id)init;	// IMP=0x00000001000276d0

@end
