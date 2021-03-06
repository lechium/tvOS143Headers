//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol _TtP10cloudpaird14DeviceManaging_;

@interface _TtC10cloudpaird13DeviceManager : NSObject
{
    MISSING_TYPE *pushService;	// 8 = 0x8
    MISSING_TYPE *buddyStateWatcher;	// 16 = 0x10
    MISSING_TYPE *firstUnlockStateWatcher;	// 24 = 0x18
    MISSING_TYPE *clientQueue;	// 32 = 0x20
    MISSING_TYPE *managerQueue;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_deviceStore;	// 48 = 0x30
    MISSING_TYPE *delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100054d60
- (id)init;	// IMP=0x00000001000647d8
- (id)printDebug;	// IMP=0x000000010006477c
- (id)cloudAccountInfo;	// IMP=0x0000000100063050
- (void)resetCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100062dc0
- (void)resetCachedDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100062918
- (void)removeDeviceMagicSettingsWithBluetoothAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100062484
- (void)updateDeviceMagicSettingsWithMagicPairingSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000621ac
- (void)addDeviceMagicSettingsWithRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061cdc
- (void)fetchMagicSettingsRecordWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000611b0
- (void)fetchMagicPairingSettingsRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005f99c
- (void)removeDeviceSupportInformationWithBluetoothAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005e454
- (void)updateDeviceSupportInformationWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005e220
- (void)addDeviceSupportInformationWithRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005dd50
- (void)fetchDeviceSupportInformationRecordWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005d3cc
- (void)fetchDeviceSupportInformationRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c224
- (void)removeDeviceWithBluetoothAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005aba4
- (void)removeDeviceWithRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005a728
- (void)updateDeviceWithRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005a0c8
- (void)addDeviceWithRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005978c
- (void)fetchDeviceWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000592ac
- (void)fetchDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100056954
- (void)deactivate;	// IMP=0x00000001000556dc
- (void)dealloc;	// IMP=0x0000000100054ca0
- (id)initWithClientQueue:(id)arg1;	// IMP=0x0000000100054bac
@property(nonatomic) __weak id <_TtP10cloudpaird14DeviceManaging_> delegate; // @synthesize delegate;

@end

