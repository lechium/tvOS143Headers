//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC12searchpartyd14CentralManager.h"

#import "CBCentralManagerDelegate-Protocol.h"

@interface _TtC12searchpartyd14CentralManager (searchpartyd) <CBCentralManagerDelegate>
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000010032d7a4
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000010032d798
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x000000010032d728
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x000000010032d640
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000010032d2e8
@end

