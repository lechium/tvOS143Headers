//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriCore/SiriCoreNWConnection.h>

#import "ADPeerStreamConnectionDelegate-Protocol.h"

@class ADPeerStreamConnection, NSString;
@protocol SiriCoreConnectionProviderDelegate;

@interface ADPeerConnectionProvider : SiriCoreNWConnection <ADPeerStreamConnectionDelegate>
{
    id <SiriCoreConnectionProviderDelegate> _delegate;	// 8 = 0x8
    ADPeerStreamConnection *_peerConnection;	// 16 = 0x10
    _Bool _isListener;	// 24 = 0x18
}

+ (void)getMetricsContext:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e1f4c
- (void).cxx_destruct;	// IMP=0x00000001000e2a04
- (void)peerStreamConnection:(id)arg1 failedWithError:(id)arg2;	// IMP=0x00000001000e299c
- (void)updateConnectionMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e2650
- (id)analysisInfo;	// IMP=0x00000001000e2648
- (id)connectionType;	// IMP=0x00000001000e261c
- (void)close;	// IMP=0x00000001000e25c4
- (void)_getNWConnectionWithInitialData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e2150
- (void)_setupStaleConnectionTimer;	// IMP=0x00000001000e214c
- (void)setRetransmitConnectionDropTime:(double)arg1;	// IMP=0x00000001000e2148
- (void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(unsigned long long)arg3;	// IMP=0x00000001000e2144
- (void)setScopeIsWiFiOnly;	// IMP=0x00000001000e2140
- (_Bool)shouldFallbackFromError:(id)arg1;	// IMP=0x00000001000e20a8
- (_Bool)isMultipath;	// IMP=0x00000001000e20a0
- (_Bool)isPeerNotNearbyError:(id)arg1;	// IMP=0x00000001000e2090
- (_Bool)isPeerConnectionError:(id)arg1;	// IMP=0x00000001000e2080
- (_Bool)supportsInitialPayload;	// IMP=0x00000001000e2078
- (_Bool)shouldFallbackQuickly;	// IMP=0x00000001000e2070
- (id)headerDataWithForceReconnect:(_Bool)arg1;	// IMP=0x00000001000e1f74
- (void)setPrefersWWAN:(_Bool)arg1;	// IMP=0x00000001000e1f70
- (void)setProviderConnectionPolicy:(id)arg1;	// IMP=0x00000001000e1f6c
- (void)setPolicyRoute:(id)arg1;	// IMP=0x00000001000e1f68
- (void)setDelegate:(id)arg1;	// IMP=0x00000001000e1f54
- (id)_peerConnection;	// IMP=0x00000001000e1ed8
- (void)setPeerStreamConnection:(id)arg1;	// IMP=0x00000001000e1ec4
- (id)initListenerWithQueue:(id)arg1;	// IMP=0x00000001000e1e94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

