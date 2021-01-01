//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordZone, CKServerChangeToken, NSArray, NSMutableArray, NSString;
@protocol ADCloudKitDataStoreProtocol, OS_dispatch_source;

@interface ADCloudKitRecordZoneInfo : NSObject
{
    _Bool _fetchInProgress;	// 8 = 0x8
    _Bool _simulatedError;	// 9 = 0x9
    NSString *_zoneName;	// 16 = 0x10
    NSString *_subscriptionName;	// 24 = 0x18
    NSArray *_subscriptionNames;	// 32 = 0x20
    CKRecordZone *_zone;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_zoneSetupTimer;	// 48 = 0x30
    NSMutableArray *_subscriptionList;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_subscriptionSetupTimer;	// 64 = 0x40
    NSObject<ADCloudKitDataStoreProtocol> *_dataStore;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_rateLimitTimer;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_syncRetryTimer;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_shareCreationTimer;	// 96 = 0x60
    unsigned long long _shareCreationRetryCount;	// 104 = 0x68
    long long _retryState;	// 112 = 0x70
    double _currentRetryInterval;	// 120 = 0x78
    NSString *_zoneId;	// 128 = 0x80
    NSString *_subscriptionId;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000001001266f4
@property(copy, nonatomic) NSString *subscriptionId; // @synthesize subscriptionId=_subscriptionId;
@property(copy, nonatomic) NSString *zoneId; // @synthesize zoneId=_zoneId;
@property(nonatomic) _Bool simulatedError; // @synthesize simulatedError=_simulatedError;
@property(nonatomic) double currentRetryInterval; // @synthesize currentRetryInterval=_currentRetryInterval;
@property(nonatomic) long long retryState; // @synthesize retryState=_retryState;
@property(nonatomic) _Bool fetchInProgress; // @synthesize fetchInProgress=_fetchInProgress;
@property(nonatomic) unsigned long long shareCreationRetryCount; // @synthesize shareCreationRetryCount=_shareCreationRetryCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *shareCreationTimer; // @synthesize shareCreationTimer=_shareCreationTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *syncRetryTimer; // @synthesize syncRetryTimer=_syncRetryTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *rateLimitTimer; // @synthesize rateLimitTimer=_rateLimitTimer;
@property(retain, nonatomic) NSObject<ADCloudKitDataStoreProtocol> *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *subscriptionSetupTimer; // @synthesize subscriptionSetupTimer=_subscriptionSetupTimer;
@property(retain, nonatomic) NSMutableArray *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *zoneSetupTimer; // @synthesize zoneSetupTimer=_zoneSetupTimer;
@property(retain, nonatomic, setter=setZone:) CKRecordZone *zone; // @synthesize zone=_zone;
@property(readonly, copy, nonatomic) NSArray *subscriptionNames; // @synthesize subscriptionNames=_subscriptionNames;
@property(readonly, copy, nonatomic) NSString *subscriptionName; // @synthesize subscriptionName=_subscriptionName;
@property(readonly, copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)reset;	// IMP=0x0000000100126360
@property(nonatomic) _Bool hasSetUpRecordZoneSubscription; // @dynamic hasSetUpRecordZoneSubscription;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken;
- (id)initWithZone:(id)arg1 dataStore:(id)arg2 subscriptionNames:(id)arg3;	// IMP=0x0000000100126130
- (id)initWithZoneName:(id)arg1 subscriptionNames:(id)arg2;	// IMP=0x0000000100126054
- (id)initWithZoneName:(id)arg1 subscriptionName:(id)arg2;	// IMP=0x0000000100125f70

@end

