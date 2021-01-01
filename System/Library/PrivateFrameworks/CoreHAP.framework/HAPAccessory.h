/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMerging.h>

@protocol HAPAccessoryDelegate, OS_dispatch_queue;
@class HAPAccessoryServer, NSString, NSNumber, NSArray, HMFMACAddress, NSObject;

@interface HAPAccessory : HMFObject <HMFMerging> {

	BOOL _reachable;
	BOOL _primary;
	BOOL _supportsRelay;
	int _consecutiveFailedPingCount;
	id<HAPAccessoryDelegate> _delegate;
	HAPAccessoryServer* _server;
	NSString* _identifier;
	NSNumber* _instanceID;
	NSArray* _services;
	NSString* _serverIdentifier;
	long long _linkType;
	HMFMACAddress* _bluetoothClassicMacAddress;
	NSString* _uniqueIdentifier;
	NSString* _name;
	NSString* _model;
	NSString* _manufacturer;
	NSString* _serialNumber;
	NSString* _firmwareVersion;
	NSString* _productData;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSNumber* _sleepInterval;

}

@property (assign,nonatomic,__weak) HAPAccessoryServer * server;                    //@synthesize server=_server - In the implementation block
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                         //@synthesize primary=_primary - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                     //@synthesize reachable=_reachable - In the implementation block
@property (assign,nonatomic) BOOL supportsRelay;                                    //@synthesize supportsRelay=_supportsRelay - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                                   //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * services;                                    //@synthesize services=_services - In the implementation block
@property (nonatomic,copy) NSString * serverIdentifier;                             //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                        //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                                 //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                 //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * firmwareVersion;                              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,copy) NSString * productData;                                  //@synthesize productData=_productData - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy) NSNumber * sleepInterval;                                //@synthesize sleepInterval=_sleepInterval - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (nonatomic,copy,readonly) NSNumber * category; 
@property (nonatomic,readonly) long long linkType;                                  //@synthesize linkType=_linkType - In the implementation block
@property (copy) HMFMACAddress * bluetoothClassicMacAddress;                        //@synthesize bluetoothClassicMacAddress=_bluetoothClassicMacAddress - In the implementation block
@property (assign,nonatomic) int consecutiveFailedPingCount;                        //@synthesize consecutiveFailedPingCount=_consecutiveFailedPingCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productDataStringFromData:(id)arg1 ;
+(BOOL)isAccessoryPairedWithIdentifier:(id)arg1 ;
+(id)serverIdentifierWithUniqueIdentifier:(id)arg1 ;
+(id)instanceIDForUniqueIdentifier:(id)arg1 ;
+(BOOL)isAccessoryPrimaryWithUniqueIdentifier:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)invalidate;
-(id<HAPAccessoryDelegate>)delegate;
-(void)setDelegate:(id<HAPAccessoryDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSNumber *)category;
-(HAPAccessoryServer *)server;
-(NSArray *)services;
-(BOOL)_isReachable;
-(void)setServer:(HAPAccessoryServer *)arg1 ;
-(long long)linkType;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)model;
-(NSString *)serialNumber;
-(void)setServices:(NSArray *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)firmwareVersion;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(BOOL)isPrimary;
-(NSString *)serverIdentifier;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(NSNumber *)instanceID;
-(BOOL)isPaired;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(BOOL)supportsRelay;
-(void)setSupportsRelay:(BOOL)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)mergeObject:(id)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(int)consecutiveFailedPingCount;
-(void)setConsecutiveFailedPingCount:(int)arg1 ;
-(id)characteristicOfType:(id)arg1 serviceType:(id)arg2 ;
-(void)readValueForCharacteristic:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeCharacteristicValue:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSNumber *)sleepInterval;
-(void)setSleepInterval:(NSNumber *)arg1 ;
-(id)characteristicsOfType:(id)arg1 ;
-(id)servicesOfType:(id)arg1 ;
-(BOOL)_validateCharacteristicValues;
-(BOOL)_updateAndValidateServices;
-(void)_setReachable:(BOOL)arg1 ;
-(BOOL)_updateService:(id)arg1 ;
-(BOOL)_updateForAccessoryInformationService;
-(HMFMACAddress *)bluetoothClassicMacAddress;
-(void)setBluetoothClassicMacAddress:(HMFMACAddress *)arg1 ;
@end
