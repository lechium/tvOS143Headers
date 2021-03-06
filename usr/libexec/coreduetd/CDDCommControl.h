//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegatePrivate-Protocol.h"

@class CDD, CDDCommunicator, IDSDevice, IDSService, NSDate, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CDDCommControl : NSObject <IDSServiceDelegatePrivate>
{
    NSMutableDictionary *identifierCache;	// 8 = 0x8
    NSMutableDictionary *scheduledSendMapping;	// 16 = 0x10
    NSMutableSet *registeredDevices;	// 24 = 0x18
    NSMutableDictionary *exchangeRecords;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *commQueue;	// 40 = 0x28
    int nearbyDevicesNotifyToken;	// 48 = 0x30
    IDSDevice *_defaultPairedDevice;	// 56 = 0x38
    int _conditionsChangedToken;	// 64 = 0x40
    CDD *cdd;	// 72 = 0x48
    CDDCommunicator *comm;	// 80 = 0x50
    IDSService *_service;	// 88 = 0x58
    NSMutableDictionary *committedTimestamps;	// 96 = 0x60
    NSMutableDictionary *committedState;	// 104 = 0x68
    NSMutableDictionary *committedTimers;	// 112 = 0x70
    NSMutableDictionary *pendingTimestamps;	// 120 = 0x78
    NSMutableDictionary *pendingState;	// 128 = 0x80
    NSMutableDictionary *pendingTimers;	// 136 = 0x88
    NSMutableDictionary *scheduledAttemptCounts;	// 144 = 0x90
    NSMutableDictionary *retryTimers;	// 152 = 0x98
    NSDate *lastForecastSent;	// 160 = 0xa0
    NSMutableDictionary *sentRequestedTimestamps;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000100011984
@property(readonly, nonatomic) NSMutableDictionary *sentRequestedTimestamps; // @synthesize sentRequestedTimestamps;
@property(retain, nonatomic) NSDate *lastForecastSent; // @synthesize lastForecastSent;
@property(readonly, nonatomic) NSMutableDictionary *retryTimers; // @synthesize retryTimers;
@property(readonly, nonatomic) NSMutableDictionary *scheduledAttemptCounts; // @synthesize scheduledAttemptCounts;
@property(readonly, nonatomic) NSMutableDictionary *pendingTimers; // @synthesize pendingTimers;
@property(readonly, nonatomic) NSMutableDictionary *pendingState; // @synthesize pendingState;
@property(readonly, nonatomic) NSMutableDictionary *pendingTimestamps; // @synthesize pendingTimestamps;
@property(readonly, nonatomic) NSMutableDictionary *committedTimers; // @synthesize committedTimers;
@property(readonly, nonatomic) NSMutableDictionary *committedState; // @synthesize committedState;
@property(readonly, nonatomic) NSMutableDictionary *committedTimestamps; // @synthesize committedTimestamps;
@property(retain) IDSService *_service; // @synthesize _service;
@property(readonly, nonatomic) __weak CDDCommunicator *comm; // @synthesize comm;
@property(readonly, nonatomic) __weak CDD *cdd; // @synthesize cdd;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00000001000118d4
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x000000010001171c
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010001170c
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100011448
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000100011314
- (_Bool)updateState:(long long)arg1 identifier:(id)arg2 dataIdentifier:(id)arg3 time:(id)arg4 timer:(id)arg5;	// IMP=0x0000000100011090
- (_Bool)commitTransaction:(id)arg1;	// IMP=0x0000000100010f34
- (void)removePendingState:(id)arg1;	// IMP=0x0000000100010ec4
- (int)minCompensationDelta;	// IMP=0x0000000100010e5c
- (int)minBoundaryDelta;	// IMP=0x0000000100010df4
- (void)clearState;	// IMP=0x0000000100010d1c
- (void)checkDevices:(id)arg1;	// IMP=0x0000000100010650
- (void)removeDevice:(id)arg1;	// IMP=0x000000010001054c
- (void)addDevice:(id)arg1;	// IMP=0x000000010000feb0
- (void)checkAccounts:(id)arg1;	// IMP=0x000000010000fdac
- (void)scheduleDevice:(id)arg1 fired:(_Bool)arg2;	// IMP=0x000000010000fda8
- (void)transactionSucceeded:(_Bool)arg1 identifier:(id)arg2;	// IMP=0x000000010000fda4
- (void)reanimateDeviceState:(id)arg1;	// IMP=0x000000010000fda0
- (void)reanimateDevices:(id)arg1;	// IMP=0x000000010000fd9c
- (id)getDeviceStateToCommit:(id)arg1;	// IMP=0x000000010000fd94
- (id)identifierFromDeviceDescription:(id)arg1;	// IMP=0x000000010000fd30
- (id)deviceFromDeviceDescription:(id)arg1;	// IMP=0x000000010000faec
- (id)deviceDescriptionFromDevice:(id)arg1;	// IMP=0x000000010000f8d4
- (id)requestDataFromDevice:(id)arg1 message:(id)arg2;	// IMP=0x000000010000f4ac
- (void)triggeredWorldExchange;	// IMP=0x000000010000f0c8
- (void)triggeredExchange:(id)arg1 opportunistic:(_Bool)arg2 queue:(id)arg3 timeout:(id)arg4 urgent:(_Bool)arg5;	// IMP=0x000000010000e970
- (id)deviceDescriptionOfDefaultPaired;	// IMP=0x000000010000e8f4
- (id)synchronize:(id)arg1 interval:(id)arg2 withForecasts:(_Bool)arg3;	// IMP=0x000000010000e4b0
- (void)receiveData:(id)arg1 context:(id)arg2 device:(id)arg3;	// IMP=0x000000010000caa0
- (void)updateOutgoingVersionNumberAndSyncState:(unsigned long long)arg1 forIncomingSupportedVersions:(id)arg2;	// IMP=0x000000010000c8bc
- (void)checkForecastSync;	// IMP=0x000000010000c378
- (void)setupPairedSyncClient;	// IMP=0x000000010000c374
- (void)setupIDSLink;	// IMP=0x000000010000c028
- (void)saveLastDate;	// IMP=0x000000010000bf28
- (void)loadSavedDateIfExist;	// IMP=0x000000010000bb04
- (_Bool)hasDefaultPaired;	// IMP=0x000000010000baf4
- (void)dealloc;	// IMP=0x000000010000ba9c
- (id)initWithCommInstance:(id)arg1;	// IMP=0x000000010000b0e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

