//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSUUID, WPContinuity;

@protocol WPContinuityDelegate <NSObject>
- (void)continuityDidUpdateState:(WPContinuity *)arg1;

@optional
- (void)continuity:(WPContinuity *)arg1 peerTrackingAvailable:(_Bool)arg2;
- (void)continuity:(WPContinuity *)arg1 didLosePeer:(NSUUID *)arg2 type:(long long)arg3;
- (void)continuity:(WPContinuity *)arg1 didFindPeer:(NSUUID *)arg2 type:(long long)arg3;
- (void)continuityDidStopTrackingPeer:(WPContinuity *)arg1 peer:(NSUUID *)arg2 type:(long long)arg3;
- (void)continuityDidStartTrackingPeer:(WPContinuity *)arg1 peer:(NSUUID *)arg2 type:(long long)arg3 error:(NSError *)arg4;
- (void)continuity:(WPContinuity *)arg1 didReceiveData:(NSData *)arg2 fromPeer:(NSUUID *)arg3;
- (void)continuity:(WPContinuity *)arg1 didSendData:(NSData *)arg2 toPeer:(NSUUID *)arg3 error:(NSError *)arg4;
- (void)continuity:(WPContinuity *)arg1 didDisconnectFromPeer:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)continuity:(WPContinuity *)arg1 didConnectToPeer:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)continuity:(WPContinuity *)arg1 didDiscoverPeerWithData:(NSData *)arg2 fromPeer:(NSUUID *)arg3;
- (void)continuity:(WPContinuity *)arg1 didDiscoverType:(long long)arg2 withData:(NSData *)arg3 fromPeer:(NSUUID *)arg4;
- (void)continuity:(WPContinuity *)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(NSError *)arg3;
- (void)continuityDidStopScanningForType:(WPContinuity *)arg1 scanningType:(long long)arg2;
- (void)continuityDidStartScanningForType:(WPContinuity *)arg1 scanningType:(long long)arg2;
- (void)continuity:(WPContinuity *)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(NSError *)arg3;
- (void)continuityDidStopAdvertisingOfType:(WPContinuity *)arg1 advertisingType:(long long)arg2 withError:(NSError *)arg3;
- (void)continuityDidStopAdvertisingOfType:(WPContinuity *)arg1 advertisingType:(long long)arg2;
- (void)continuityPendingAdvertisingOfType:(WPContinuity *)arg1 advertisingType:(long long)arg2;
- (void)continuityDidStartAdvertisingOfType:(WPContinuity *)arg1 advertisingType:(long long)arg2;
- (void)continuityDidChangeBluetoothBandwidthState:(WPContinuity *)arg1;
@end

