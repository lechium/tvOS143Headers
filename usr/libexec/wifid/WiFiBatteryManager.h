//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPMSClientDescription, NSDictionary, NSMutableArray, NSMutableDictionary, PPMClient;
@protocol CPMSAgentProtocol;

@interface WiFiBatteryManager : NSObject
{
    struct __WiFiDeviceManager *_manager;	// 8 = 0x8
    CPMSClientDescription *_wifiClientDescriptionRef;	// 16 = 0x10
    PPMClient *_wifiPpmClientRef;	// 24 = 0x18
    id <CPMSAgentProtocol> _cpmsAgent;	// 32 = 0x20
    struct apple80211_chip_power_limit _wifiChipPowerTable;	// 40 = 0x28
    _Bool _cpmsActive;	// 92 = 0x5c
    NSMutableArray *_pendingRequests;	// 96 = 0x60
    NSDictionary *_powerToDutyCycleTable100ms;	// 104 = 0x68
    NSDictionary *_dutyCycleToPowerTable100ms;	// 112 = 0x70
    NSDictionary *_wifiDevicePowerLevels100ms;	// 120 = 0x78
    long long _wifiCPMSHandle;	// 128 = 0x80
    NSMutableDictionary *_cachedBudget;	// 136 = 0x88
    unsigned long long _availableResource;	// 144 = 0x90
    unsigned long long _claimedResource;	// 152 = 0x98
    unsigned long long _minBatteryIndex;	// 160 = 0xa0
    CDUnknownBlockType _WiFiBatteryManagerPpmAsyncNotificationHandler;	// 168 = 0xa8
    CDUnknownBlockType _WiFiBatteryManagerPpmAdmissionResultHandler;	// 176 = 0xb0
    CDUnknownBlockType _cpmsAsyncNotificationCallback;	// 184 = 0xb8
    CDStruct_777f7d9a _requestDetails;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000010008650c
@property(copy, nonatomic) CDUnknownBlockType cpmsAsyncNotificationCallback; // @synthesize cpmsAsyncNotificationCallback=_cpmsAsyncNotificationCallback;
@property(copy, nonatomic) CDUnknownBlockType WiFiBatteryManagerPpmAdmissionResultHandler; // @synthesize WiFiBatteryManagerPpmAdmissionResultHandler=_WiFiBatteryManagerPpmAdmissionResultHandler;
@property(copy, nonatomic) CDUnknownBlockType WiFiBatteryManagerPpmAsyncNotificationHandler; // @synthesize WiFiBatteryManagerPpmAsyncNotificationHandler=_WiFiBatteryManagerPpmAsyncNotificationHandler;
@property(nonatomic) CDStruct_777f7d9a requestDetails; // @synthesize requestDetails=_requestDetails;
@property(nonatomic) _Bool cpmsActive; // @synthesize cpmsActive=_cpmsActive;
@property(nonatomic) unsigned long long minBatteryIndex; // @synthesize minBatteryIndex=_minBatteryIndex;
@property(nonatomic) unsigned long long claimedResource; // @synthesize claimedResource=_claimedResource;
@property(nonatomic) unsigned long long availableResource; // @synthesize availableResource=_availableResource;
@property(retain, nonatomic) NSMutableDictionary *cachedBudget; // @synthesize cachedBudget=_cachedBudget;
@property long long wifiCPMSHandle; // @synthesize wifiCPMSHandle=_wifiCPMSHandle;
@property(retain, nonatomic) NSDictionary *wifiDevicePowerLevels100ms; // @synthesize wifiDevicePowerLevels100ms=_wifiDevicePowerLevels100ms;
@property(retain, nonatomic) NSDictionary *dutyCycleToPowerTable100ms; // @synthesize dutyCycleToPowerTable100ms=_dutyCycleToPowerTable100ms;
@property(retain, nonatomic) NSDictionary *powerToDutyCycleTable100ms; // @synthesize powerToDutyCycleTable100ms=_powerToDutyCycleTable100ms;
@property(retain, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void)WiFiDeviceManagerHandlePowerUnchangedPowerBudget:(unsigned long long)arg1:(CDStruct_777f7d9a *)arg2;	// IMP=0x00000001000863f8
- (void)WiFiDeviceManagerHandlePowerBudgetChange:(unsigned long long)arg1;	// IMP=0x00000001000863ec
- (void)WiFiDeviceManagerHandleInterfaceAvailability:(unsigned long long)arg1;	// IMP=0x00000001000863e0
- (unsigned long long)WiFiBatteryManagerHandleCpmsAllocatedBudgetReturnIndex:(id)arg1;	// IMP=0x0000000100085fe4
- (id)getDutyCycleForPowerNumber:(int)arg1;	// IMP=0x0000000100085f7c
- (id)getPowerNumberForDutyCycle:(int)arg1;	// IMP=0x0000000100085f14
- (void)releasePowerResources;	// IMP=0x0000000100085ca0
- (int)admissionCheck;	// IMP=0x000000010008585c
- (int)requestPowerResource:(unsigned long long)arg1:(void *)arg2;	// IMP=0x0000000100085658
- (_Bool)isPowerResourceAvailable:(unsigned long long)arg1;	// IMP=0x0000000100085504
- (void)WiFiBatteryManagerHandlePowerAdmissionResponse:(unsigned long long)arg1;	// IMP=0x00000001000850c8
- (void)dealloc;	// IMP=0x0000000100085000
- (void)WiFiBatteryManagerPpmCallbackConfiguration:(struct __WiFiDeviceManager *)arg1;	// IMP=0x0000000100084af0
- (void)WiFiBatteryManagerCpmsCallbackConfiguration:(struct __WiFiDeviceManager *)arg1;	// IMP=0x00000001000847ac
- (id)WiFiBatteryManagerPopulatePowerTable;	// IMP=0x000000010008457c
- (_Bool)configureWiFiClientAndRegisterWithBatteryModule:(_Bool)arg1:(struct __WiFiDeviceManager *)arg2:(id)arg3:(id)arg4;	// IMP=0x00000001000841bc
- (_Bool)setup;	// IMP=0x0000000100084068
- (id)initWithContext:(void *)arg1;	// IMP=0x0000000100083b70

@end

