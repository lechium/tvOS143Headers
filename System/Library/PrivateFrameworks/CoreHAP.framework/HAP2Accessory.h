/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryPrivate.h>
#import <libobjc.A.dylib/HAP2Accessory.h>
@class NSString, NSArray;


@protocol HAP2Accessory <NSObject>
@property (assign,nonatomic,__weak) id<HAP2AccessoryDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HAP2PairedAccessoryServer> accessoryServer; 
@property (getter=isPrimary,nonatomic,readonly) BOOL primary; 
@property (nonatomic,readonly) unsigned long long connectionState; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long instanceID; 
@property (nonatomic,copy,readonly) NSString * productData; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long category; 
@property (nonatomic,copy,readonly) NSString * model; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,copy,readonly) NSString * firmwareVersion; 
@property (nonatomic,readonly) double sleepInterval; 
@property (nonatomic,copy,readonly) NSArray * services; 
@required
-(NSString *)name;
-(id<HAP2AccessoryDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)identifier;
-(unsigned long long)category;
-(NSArray *)services;
-(NSString *)model;
-(NSString *)serialNumber;
-(NSString *)firmwareVersion;
-(BOOL)isPrimary;
-(NSString *)manufacturer;
-(unsigned long long)instanceID;
-(unsigned long long)connectionState;
-(NSString *)productData;
-(id)identifyWithCompletion:(/*^block*/id)arg1;
-(id<HAP2PairedAccessoryServer>)accessoryServer;
-(double)sleepInterval;
-(id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3;
-(id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3;
-(id)enableNotificationsForCharacteristics:(id)arg1 completion:(/*^block*/id)arg2;
-(id)disableNotificationsForCharacteristics:(id)arg1 completion:(/*^block*/id)arg2;

@end


@protocol HAP2AccessoryDelegate, HAP2PairedAccessoryServerPrivate;
@class NSNumber, NSString, NSArray, HAP2PropertyLock;

@interface HAP2Accessory : HAP2LoggingObject <HAP2AccessoryPrivate, HAP2Accessory> {

	id<HAP2AccessoryDelegate> _delegate;
	unsigned long long _instanceID;
	NSString* _identifier;
	NSString* _name;
	NSString* _model;
	NSString* _manufacturer;
	NSString* _serialNumber;
	NSString* _firmwareVersion;
	NSString* _productData;
	NSNumber* _internalSleepIntervalMs;
	NSArray* _services;
	id<HAP2PairedAccessoryServerPrivate> _accessoryServerPrivate;
	HAP2PropertyLock* _propertyLock;

}

@property (nonatomic,__weak,readonly) id<HAP2PairedAccessoryServerPrivate> accessoryServerPrivate;              //@synthesize accessoryServerPrivate=_accessoryServerPrivate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                                                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * manufacturer;                                                             //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                                             //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * firmwareVersion;                                                          //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,copy) NSString * productData;                                                              //@synthesize productData=_productData - In the implementation block
@property (nonatomic,copy) NSArray * services;                                                                  //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) HAP2PropertyLock * propertyLock;                                                 //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,retain) NSNumber * internalSleepIntervalMs;                                                //@synthesize internalSleepIntervalMs=_internalSleepIntervalMs - In the implementation block
@property (assign,nonatomic,__weak) id<HAP2AccessoryDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id<HAP2PairedAccessoryServer> accessoryServer; 
@property (getter=isPrimary,nonatomic,readonly) BOOL primary; 
@property (nonatomic,readonly) unsigned long long connectionState; 
@property (nonatomic,readonly) NSString * identifier;                                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long instanceID;                                                   //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,readonly) unsigned long long category; 
@property (nonatomic,readonly) double sleepInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validateAccessoryInformationService:(id)arg1 ;
+(BOOL)validateProtocolInformationService:(id)arg1 ;
+(BOOL)validateDiscoveredServices:(id)arg1 isPrimary:(BOOL)arg2 ;
+(id)accessoryWithAccessoryServer:(id)arg1 instanceID:(unsigned long long)arg2 discoveredServices:(id)arg3 ;
-(NSString *)name;
-(id<HAP2AccessoryDelegate>)delegate;
-(void)setDelegate:(id<HAP2AccessoryDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(unsigned long long)category;
-(NSArray *)services;
-(NSString *)model;
-(NSString *)serialNumber;
-(void)setServices:(NSArray *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)firmwareVersion;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(BOOL)isPrimary;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(unsigned long long)instanceID;
-(unsigned long long)connectionState;
-(void)setSerialNumber:(NSString *)arg1 ;
-(HAP2PropertyLock *)propertyLock;
-(void)setProductData:(NSString *)arg1 ;
-(NSString *)productData;
-(id)identifyWithCompletion:(/*^block*/id)arg1 ;
-(id<HAP2PairedAccessoryServer>)accessoryServer;
-(double)sleepInterval;
-(id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)enableNotificationsForCharacteristics:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)disableNotificationsForCharacteristics:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAccessoryServer:(id)arg1 instanceID:(unsigned long long)arg2 discoveredServices:(id)arg3 ;
-(void)_updateDiscoveredServices:(id)arg1 ;
-(id<HAP2PairedAccessoryServerPrivate>)accessoryServerPrivate;
-(NSNumber *)internalSleepIntervalMs;
-(void)setInternalSleepIntervalMs:(NSNumber *)arg1 ;
-(void)_handleUpdatedAccessoryInformationService:(id)arg1 ;
-(void)_handleUpdatedAccessoryRuntimeInformationService:(id)arg1 ;
-(void)updateConnectionState:(unsigned long long)arg1 ;
-(BOOL)updateDiscoveredServices:(id)arg1 ;
-(void)characteristicValueChanged:(id)arg1 ;
-(id)internalSleepInterval;
-(void)setInternalSleepInterval:(id)arg1 ;
@end

