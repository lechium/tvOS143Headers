//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ClientService.h"

#import "HIDServiceProtocol-Protocol.h"

@class CBCharacteristic, HIDBluetoothDevice, NSMapTable, NSString;

@interface HIDService : ClientService <HIDServiceProtocol>
{
    _Bool _pmIsSuspended;	// 8 = 0x8
    unsigned int _pmService;	// 12 = 0xc
    unsigned int _pmNotifier;	// 16 = 0x10
    CBCharacteristic *_reportMapCharacteristic;	// 24 = 0x18
    CBCharacteristic *_hidControlPointCharacteristic;	// 32 = 0x20
    CBCharacteristic *_hidInformationCharacteristic;	// 40 = 0x28
    CBCharacteristic *_accessoryCategoryCharacteristic;	// 48 = 0x30
    NSMapTable *_reportInfoMap;	// 56 = 0x38
    unsigned long long _numReports;	// 64 = 0x40
    HIDBluetoothDevice *_hidDevice;	// 72 = 0x48
    struct IONotificationPort *_pmNotificationPort;	// 80 = 0x50
}

+ (id)UUID;	// IMP=0x0000000100018034
- (void).cxx_destruct;	// IMP=0x000000010001bbec
@property(nonatomic) _Bool pmIsSuspended; // @synthesize pmIsSuspended=_pmIsSuspended;
@property(nonatomic) unsigned int pmNotifier; // @synthesize pmNotifier=_pmNotifier;
@property(nonatomic) struct IONotificationPort *pmNotificationPort; // @synthesize pmNotificationPort=_pmNotificationPort;
@property(nonatomic) unsigned int pmService; // @synthesize pmService=_pmService;
@property(retain, nonatomic) HIDBluetoothDevice *hidDevice; // @synthesize hidDevice=_hidDevice;
@property(nonatomic) unsigned long long numReports; // @synthesize numReports=_numReports;
@property(retain, nonatomic) NSMapTable *reportInfoMap; // @synthesize reportInfoMap=_reportInfoMap;
@property(retain, nonatomic) CBCharacteristic *accessoryCategoryCharacteristic; // @synthesize accessoryCategoryCharacteristic=_accessoryCategoryCharacteristic;
@property(retain, nonatomic) CBCharacteristic *hidInformationCharacteristic; // @synthesize hidInformationCharacteristic=_hidInformationCharacteristic;
@property(retain, nonatomic) CBCharacteristic *hidControlPointCharacteristic; // @synthesize hidControlPointCharacteristic=_hidControlPointCharacteristic;
@property(retain, nonatomic) CBCharacteristic *reportMapCharacteristic; // @synthesize reportMapCharacteristic=_reportMapCharacteristic;
- (id)reportTypeToString:(int)arg1;	// IMP=0x000000010001ba38
- (id)characteristicForReportID:(unsigned int)arg1 reportType:(int)arg2;	// IMP=0x000000010001b7f0
- (_Bool)allInputReportsReady;	// IMP=0x000000010001b6bc
- (void)authDidSucceedNotification:(id)arg1;	// IMP=0x000000010001b540
- (void)writeControlPointCommand:(unsigned char)arg1;	// IMP=0x000000010001b47c
- (void)exitSuspendModeIfNeeded;	// IMP=0x000000010001b400
- (void)enterSuspendModeIfNeeded:(long long)arg1;	// IMP=0x000000010001b2c8
- (void)handlePowerManagementNotification:(unsigned int)arg1 notificationID:(long long)arg2;	// IMP=0x000000010001b278
- (int)writeReportData:(id)arg1 reportID:(unsigned char)arg2 reportType:(int)arg3 withResponse:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000010001af74
- (int)readReportData:(id *)arg1 reportID:(unsigned char)arg2 reportType:(int)arg3 error:(id *)arg4;	// IMP=0x000000010001acc4
- (void)hidDeviceDesiredConnectionParametersDidChange;	// IMP=0x000000010001abfc
- (void)hidDeviceDidStop;	// IMP=0x000000010001abec
- (void)hidDeviceDidStart;	// IMP=0x000000010001abe0
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;	// IMP=0x000000010001ab14
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000010001a7dc
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000010001a6a4
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000010001a58c
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000010001a23c
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x0000000100019948
- (void)notifyDidStartIfEverythingReady;	// IMP=0x0000000100019838
- (void)deregisterForPowerManagementEvents;	// IMP=0x00000001000197cc
- (void)registerForPowerManagementEvents;	// IMP=0x0000000100019754
- (void)signalCommandCondition:(id)arg1 error:(id)arg2;	// IMP=0x0000000100019654
- (void)destroyHIDDevice;	// IMP=0x00000001000194ec
- (void)createHIDDeviceIfEverythingReady;	// IMP=0x000000010001904c
- (id)hidDeviceProperties;	// IMP=0x00000001000186b4
- (void)createReportInfo:(id)arg1;	// IMP=0x00000001000184b0
- (void)dealloc;	// IMP=0x0000000100018438
- (void)stop;	// IMP=0x00000001000183dc
- (void)start;	// IMP=0x0000000100018168
- (id)initWithManager:(id)arg1 peripheral:(id)arg2 service:(id)arg3;	// IMP=0x0000000100018054

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

