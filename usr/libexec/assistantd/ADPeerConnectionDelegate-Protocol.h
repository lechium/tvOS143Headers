//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADPeerConnection, PBCodable;

@protocol ADPeerConnectionDelegate <NSObject>
- (void)peerConnection:(ADPeerConnection *)arg1 handlePBSubclass:(PBCodable *)arg2 completion:(void (^)(PBCodable *, NSError *))arg3;

@optional
- (void)peerConnection:(ADPeerConnection *)arg1 peerAvailabilityDidChange:(_Bool)arg2;
@end

