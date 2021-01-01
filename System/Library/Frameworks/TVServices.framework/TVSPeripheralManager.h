/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>
#import <libobjc.A.dylib/CBPairingAgentDelegate.h>

@class CBCentralManager, NSMutableDictionary, NSString, CBPeripheral, NSArray;

@interface TVSPeripheralManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBPairingAgentDelegate> {

	CBCentralManager* _centralManager;
	NSMutableDictionary* _discoveredCBPeripherals;
	NSMutableDictionary* _connectedCBPeripherals;
	NSMutableDictionary* _advertisementDataByPeripheralID;
	NSString* _factoryBDAddress;
	CBPeripheral* _peripheralBeingConnected;
	BOOL _autoConnectWithImmediateProximityPeripheralsEnabled;
	BOOL _factoryPairingEnabled;

}

@property (nonatomic,readonly) NSArray * discoveredPeripherals; 
@property (nonatomic,readonly) NSArray * connectedPeripherals; 
@property (nonatomic,readonly) NSArray * pairedPeripherals; 
@property (assign,nonatomic) BOOL autoConnectWithImmediateProximityPeripheralsEnabled;              //@synthesize autoConnectWithImmediateProximityPeripheralsEnabled=_autoConnectWithImmediateProximityPeripheralsEnabled - In the implementation block
@property (assign,nonatomic) BOOL factoryPairingEnabled;                                            //@synthesize factoryPairingEnabled=_factoryPairingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_retrievePairedRemoteBDAddress;
-(id)init;
-(void)dealloc;
-(void)startScanning;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didUpdatePeripheralConnectionState:(id)arg2 ;
-(NSArray *)discoveredPeripherals;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2 ;
-(void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3 ;
-(void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2 ;
-(BOOL)isPeerPaired:(id)arg1 ;
-(BOOL)isPeerCloudPaired:(id)arg1 ;
-(void)stopScanning;
-(NSArray *)connectedPeripherals;
-(NSArray *)pairedPeripherals;
-(BOOL)shouldIgnorePeripheral:(id)arg1 ;
-(void)_startScanning;
-(BOOL)isAppleTVRemote:(id)arg1 ;
-(BOOL)_shouldConnectDerpModePeripheral:(id)arg1 withAdvertisementData:(id)arg2 ;
-(void)_connectPeripheral:(id)arg1 ;
-(void)_unblockConnectionQueueForPeripheral:(id)arg1 ;
-(id)advertisementDataForPeripheral:(id)arg1 ;
-(BOOL)isHomeKitPeripheral:(id)arg1 ;
-(BOOL)isApplePencil:(id)arg1 ;
-(BOOL)factoryPairingEnabled;
-(void)connectPeripheral:(id)arg1 ;
-(void)disconnectPeripheral:(id)arg1 ;
-(void)unpairPeripheral:(id)arg1 ;
-(void)readBatteryLevelForPeripheral:(id)arg1 ;
-(void)setAutoConnectWithImmediateProximityPeripheralsEnabled:(BOOL)arg1 ;
-(id)configurationInfo;
-(BOOL)autoConnectWithImmediateProximityPeripheralsEnabled;
-(void)setFactoryPairingEnabled:(BOOL)arg1 ;
@end

