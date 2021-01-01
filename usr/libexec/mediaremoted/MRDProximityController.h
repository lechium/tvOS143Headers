//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDMigrationEventDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, SFProximityClient;
@protocol OS_dispatch_queue;

@interface MRDProximityController : NSObject <MRDMigrationEventDelegate>
{
    SFProximityClient *_proximityClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSMutableDictionary *_events;	// 24 = 0x18
    NSMutableDictionary *_migratingEvents;	// 32 = 0x20
    NSMutableDictionary *_notifications;	// 40 = 0x28
    NSMutableSet *_nearbyDevices;	// 48 = 0x30
    NSMutableSet *_mediumDevices;	// 56 = 0x38
    NSMutableSet *_immediateDevices;	// 64 = 0x40
    _Bool _initializingProximityClient;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010002292c
- (void)proximityEventDidInvalidate:(id)arg1;	// IMP=0x000000010002264c
- (id)_onSerialQueue_eventForUID:(id)arg1;	// IMP=0x00000001000225a8
- (void)_onSerialQueue_prepareDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000223dc
- (void)_onSerialQueue_migrateDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000220a8
- (void)_onSerialQueue_updateForDevice:(id)arg1;	// IMP=0x0000000100021b88
- (void)_onSerialQueue_provideForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021708
- (id)_bodyFromContentItem:(id)arg1 localToRemote:(_Bool)arg2;	// IMP=0x00000001000213d4
- (void)_handleIsPlayingDidChange:(id)arg1;	// IMP=0x000000010002133c
@property(readonly, nonatomic) NSArray *migratingDevices;
@property(readonly, nonatomic) NSArray *immediateDevices;
@property(readonly, nonatomic) NSArray *mediumDevices;
@property(readonly, nonatomic) NSArray *nearbyDevices;
@property(readonly, nonatomic) NSArray *events;
- (void)promptForDevice:(id)arg1;	// IMP=0x0000000100020978
- (void)_attemptInitializeProximityClient;	// IMP=0x00000001000207ec
- (void)_initializeProximityClient;	// IMP=0x000000010001e9b8
- (id)init;	// IMP=0x000000010001e8d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

