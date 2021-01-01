//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDMigrationEvent.h"

@class MRAVEndpoint, MRAVOutputDevice, MRDNowPlayingPlayerClient, NSString;

@interface MRDNearbyMigrationEvent : MRDMigrationEvent
{
    MRAVEndpoint *_sourceEndpoint;	// 72 = 0x48
    MRAVEndpoint *_destinationEndpoint;	// 80 = 0x50
    MRAVOutputDevice *_outputDevice;	// 88 = 0x58
    MRDNowPlayingPlayerClient *_sourcePlayerClient;	// 96 = 0x60
    NSString *_nominationReason;	// 104 = 0x68
    unsigned char _interactionBehavior;	// 112 = 0x70
    _Bool _invalidated;	// 113 = 0x71
    NSString *_invalidationReason;	// 120 = 0x78
}

+ (void)_migrate:(id)arg1 destinationEndpoint:(id)arg2 outputDevice:(id)arg3 sourcePlayer:(id)arg4 label:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000255e4
- (void).cxx_destruct;	// IMP=0x00000001000288e8
- (void)_invalidateForNotitication:(id)arg1;	// IMP=0x00000001000286b8
- (void)activeEndpointDidChangeNotification:(id)arg1;	// IMP=0x0000000100028604
- (void)originDidInvalidateNotification:(id)arg1;	// IMP=0x0000000100028370
- (void)playerPathDidInvalidateNotification:(id)arg1;	// IMP=0x0000000100028020
- (id)_outputDeviceFromEndpoints;	// IMP=0x0000000100027e04
- (_Bool)_nominateDirectionFromEndpoints:(id)arg1 proactiveEndpoint:(id)arg2 forReason:(id *)arg3;	// IMP=0x00000001000274bc
- (void)_fetchEndpointForOutputDeviceAndProactiveEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100026ebc
- (id)_title;	// IMP=0x0000000100026df4
- (id)_bodyFromContentItem:(id)arg1;	// IMP=0x0000000100026a84
- (unsigned char)_interactionDirection;	// IMP=0x00000001000269b0
- (id)createNotificationInfo;	// IMP=0x0000000100026684
- (void)migrateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000264cc
- (void)_prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024ec4
- (id)description;	// IMP=0x0000000100024cdc
- (id)initWithUID:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100024978

@end
