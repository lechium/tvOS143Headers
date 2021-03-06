//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MRDHostedExternalDeviceManager : NSObject
{
    NSMutableArray *_hostedExternalDeviceGraveyard;	// 8 = 0x8
    NSMutableDictionary *_hostedExternalDeviceMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a671c
- (id)_outputDeviceUIDFromHostedExternalDevice:(id)arg1;	// IMP=0x00000001000a669c
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x00000001000a6424
- (void)_tombstoneHostedExternalDevice:(id)arg1;	// IMP=0x00000001000a62d4
- (void)_removeExternalDeviceWithOutputDeviceUID:(id)arg1 forReason:(id)arg2;	// IMP=0x00000001000a6188
- (void)purgeUndiscoverableDisconnectedDevices:(id)arg1;	// IMP=0x00000001000a5cf8
- (id)hostedExternalDeviceForOutputDeviceUID:(id)arg1;	// IMP=0x00000001000a5c64
- (void)addHostedExternalDevice:(id)arg1;	// IMP=0x00000001000a5b18
@property(readonly, nonatomic) NSDictionary *availableExternalDevices;
- (id)init;	// IMP=0x00000001000a5a28

@end

