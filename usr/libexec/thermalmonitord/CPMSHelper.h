//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CommonProduct;
@protocol OS_dispatch_queue;

@interface CPMSHelper : NSObject
{
    unsigned int connect;	// 8 = 0x8
    struct DetailedThermalBudgets detailMitigationArray;	// 16 = 0x10
    CommonProduct *productObj;	// 408 = 0x198
    unsigned int cpmsService;	// 416 = 0x1a0
    unsigned int _notification;	// 420 = 0x1a4
    unsigned int _ioIterator;	// 424 = 0x1a8
    struct IONotificationPort *notificationPort;	// 432 = 0x1b0
    NSObject<OS_dispatch_queue> *_cpmsHelperQueue;	// 440 = 0x1b8
}

+ (id)sharedInstance;	// IMP=0x000000010000e128
@property(nonatomic) NSObject<OS_dispatch_queue> *cpmsHelperQueue; // @synthesize cpmsHelperQueue=_cpmsHelperQueue;
@property(nonatomic) unsigned int ioIterator; // @synthesize ioIterator=_ioIterator;
@property(nonatomic) unsigned int notification; // @synthesize notification=_notification;
@property(nonatomic) struct IONotificationPort *notificationPort; // @synthesize notificationPort;
@property(nonatomic) unsigned int cpmsService; // @synthesize cpmsService;
- (int)getMitigationTypeForClientID:(unsigned char)arg1;	// IMP=0x000000010000eebc
- (void)setProduct:(id)arg1;	// IMP=0x000000010000eeb4
- (void)updateCPMSClientState:(int)arg1;	// IMP=0x000000010000ed30
- (void)requestCurrentPowerCallbackForComponent:(int)arg1;	// IMP=0x000000010000eaf4
- (unsigned int)getMinPowerForComponent:(int)arg1;	// IMP=0x000000010000e950
- (unsigned int)getMaxPowerForComponent:(int)arg1;	// IMP=0x000000010000e7b0
- (void)publishDetailedMitigationArrayToCPMS;	// IMP=0x000000010000e698
- (void)addToCPMSMitigationArray:(unsigned int)arg1 withDetails:(unsigned long long)arg2 forComponent:(int)arg3;	// IMP=0x000000010000e4e8
- (void)addToCPMSMitigationArray:(unsigned int)arg1 forComponent:(int)arg2;	// IMP=0x000000010000e4d4
- (void)setPowerBudget:(unsigned int)arg1 withDetails:(unsigned long long)arg2 forCPMSClient:(unsigned char)arg3 atIdx:(int)arg4;	// IMP=0x000000010000e4b4
- (_Bool)isCPMSSupportedClient:(int)arg1;	// IMP=0x000000010000e468
- (void)dealloc;	// IMP=0x000000010000e3e8
- (id)init;	// IMP=0x000000010000e18c

@end

