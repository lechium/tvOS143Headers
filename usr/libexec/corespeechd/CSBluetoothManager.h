//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CSBluetoothManager : NSObject
{
    _Bool _isAttachingBluetoothSession;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    struct BTSessionImpl *_bluetoothSession;	// 32 = 0x20
    struct BTLocalDeviceImpl *_localDevice;	// 40 = 0x28
    NSArray *_pairedDeviceAddresses;	// 48 = 0x30
    NSArray *_connectedDeviceAddresses;	// 56 = 0x38
    NSObject<OS_dispatch_group> *_bluetoothSessionSetupGroup;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000010005dbf0
- (void).cxx_destruct;	// IMP=0x000000010005ebbc
@property(retain, nonatomic) NSObject<OS_dispatch_group> *bluetoothSessionSetupGroup; // @synthesize bluetoothSessionSetupGroup=_bluetoothSessionSetupGroup;
@property(retain, nonatomic) NSArray *connectedDeviceAddresses; // @synthesize connectedDeviceAddresses=_connectedDeviceAddresses;
@property(retain, nonatomic) NSArray *pairedDeviceAddresses; // @synthesize pairedDeviceAddresses=_pairedDeviceAddresses;
@property(nonatomic) struct BTLocalDeviceImpl *localDevice; // @synthesize localDevice=_localDevice;
@property(nonatomic) _Bool isAttachingBluetoothSession; // @synthesize isAttachingBluetoothSession=_isAttachingBluetoothSession;
@property(nonatomic) struct BTSessionImpl *bluetoothSession; // @synthesize bluetoothSession=_bluetoothSession;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)localDevice:(struct BTLocalDeviceImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x000000010005eb24
- (void)_tearDownLocalDevice;	// IMP=0x000000010005eaf0
- (void)_setUpLocalDevice;	// IMP=0x000000010005ea00
- (void)_sessionTerminated:(struct BTSessionImpl *)arg1;	// IMP=0x000000010005e8ec
- (void)_sessionDetached:(struct BTSessionImpl *)arg1;	// IMP=0x000000010005e7d8
- (void)_sessionAttached:(struct BTSessionImpl *)arg1 result:(int)arg2;	// IMP=0x000000010005e6bc
- (void)device:(struct BTDeviceImpl *)arg1 serviceMask:(unsigned int)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned int)arg4 result:(int)arg5;	// IMP=0x000000010005e6b8
- (void)_attachBluetoothSession;	// IMP=0x000000010005e598
- (void)_detachBluetoothSession;	// IMP=0x000000010005e484
- (id)_getWirelessSplitterInfoFromLocalDevice:(struct BTLocalDeviceImpl *)arg1;	// IMP=0x000000010005e0ac
- (void)getWirelessSplitterInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005dfb8
- (void)getBTLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005dd68
- (id)init;	// IMP=0x000000010005dc5c

@end

