//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADSharedPeerStreamConnection, IDSDeviceConnection;
@protocol ADPeerStreamConnectionDelegate;

@interface ADPeerStreamConnection : NSObject
{
    ADSharedPeerStreamConnection *_sharedConnection;	// 8 = 0x8
    id <ADPeerStreamConnectionDelegate> _delegate;	// 16 = 0x10
    IDSDeviceConnection *_vendedDeviceConnection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010005b7e8
- (_Bool)hasNearbyPeer;	// IMP=0x000000010005b7d8
- (void)close;	// IMP=0x000000010005b79c
- (_Bool)peerSupportsExtendedHeader;	// IMP=0x000000010005b78c
- (void)getAWDMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005b73c
- (void)getRemoteMetrics:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b72c
- (void)getLocalMetrics:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b5c8
- (void)getSocket:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b398
- (id)initWithServiceIdentifier:(id)arg1 delegate:(id)arg2 listener:(_Bool)arg3;	// IMP=0x000000010005b288

@end

