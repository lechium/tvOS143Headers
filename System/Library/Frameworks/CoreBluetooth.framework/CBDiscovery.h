/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/CBSystemOverridable.h>
#import <libobjc.A.dylib/CUXPCCodable.h>
#import <libobjc.A.dylib/CBActivatable.h>
#import <libobjc.A.dylib/CBDeviceReporting.h>
#import <libobjc.A.dylib/CBLabelable.h>
#import <libobjc.A.dylib/CBStateReporting.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSArray, NSMutableDictionary, NSObject, NSString;

@interface CBDiscovery : NSObject <CBSystemOverridable, CUXPCCodable, CBActivatable, CBDeviceReporting, CBLabelable, CBStateReporting> {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	BOOL _changesPending;
	NSMutableDictionary* _deviceMap;
	BOOL _direct;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSObject*<OS_xpc_object> _xpcCnx;
	char _bleRSSIThresholdHint;
	BOOL _disabledActive;
	BOOL _disabledPending;
	unsigned _systemOverrideFlags;
	int _bleScanRate;
	int _bleScanRateOverride;
	unsigned _clientID;
	unsigned _internalFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	NSString* _label;
	long long _bluetoothState;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _systemOverrideHandler;
	unsigned long long _changeFlags;
	unsigned long long _discoveryFlags;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	unsigned long long _extraDiscoveryFlags;
	NSObject*<OS_xpc_object> _testListenerEndpoint;

}

@property (assign,nonatomic) int bleScanRateOverride;                                    //@synthesize bleScanRateOverride=_bleScanRateOverride - In the implementation block
@property (assign,nonatomic) unsigned clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) BOOL disabledActive;                                        //@synthesize disabledActive=_disabledActive - In the implementation block
@property (assign,nonatomic) BOOL disabledPending;                                       //@synthesize disabledPending=_disabledPending - In the implementation block
@property (assign,nonatomic) unsigned long long extraDiscoveryFlags;                     //@synthesize extraDiscoveryFlags=_extraDiscoveryFlags - In the implementation block
@property (assign,nonatomic) unsigned internalFlags;                                     //@synthesize internalFlags=_internalFlags - In the implementation block
@property (assign,nonatomic) unsigned systemOverrideFlags;                               //@synthesize systemOverrideFlags=_systemOverrideFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (assign,nonatomic) char bleRSSIThresholdHint;                                  //@synthesize bleRSSIThresholdHint=_bleRSSIThresholdHint - In the implementation block
@property (assign,nonatomic) int bleScanRate;                                            //@synthesize bleScanRate=_bleScanRate - In the implementation block
@property (assign,nonatomic) unsigned long long changeFlags;                             //@synthesize changeFlags=_changeFlags - In the implementation block
@property (assign,nonatomic) unsigned long long discoveryFlags;                          //@synthesize discoveryFlags=_discoveryFlags - In the implementation block
@property (nonatomic,copy) id errorHandler;                                              //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                       //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id systemOverrideHandler;                                     //@synthesize systemOverrideHandler=_systemOverrideHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                       //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                        //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                         //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (copy,readonly) NSArray * discoveredDevices; 
@property (nonatomic,copy) NSString * label;                                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) long long bluetoothState;                                 //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                              //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(void)_activate;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_update;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_interrupted;
-(unsigned)clientID;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(void)_activateDirectStart;
-(void)_activateXPCStart:(BOOL)arg1 ;
-(id)_ensureXPCStarted;
-(void)_activateXPCCompleted:(id)arg1 ;
-(void)_xpcReceivedEvent:(id)arg1 ;
-(void)_invalidateDirect;
-(void)_xpcReceivedMessage:(id)arg1 ;
-(void)_xpcReceivedPowerStateChanged:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(long long)bluetoothState;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)_updateIfNeededWithBlock:(/*^block*/id)arg1 ;
-(void)setClientID:(unsigned)arg1 ;
-(unsigned)internalFlags;
-(void)setInternalFlags:(unsigned)arg1 ;
-(NSObject*<OS_xpc_object>)testListenerEndpoint;
-(void)setTestListenerEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_lostAllDevices;
-(void)_xpcReceivedDeviceFound:(id)arg1 ;
-(void)_xpcReceivedDeviceLost:(id)arg1 ;
-(unsigned)systemOverrideFlags;
-(id)systemOverrideHandler;
-(void)setSystemOverrideHandler:(id)arg1 ;
-(id)deviceFoundHandler;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(NSArray *)discoveredDevices;
-(void)setBleScanRate:(int)arg1 ;
-(void)setChangeFlags:(unsigned long long)arg1 ;
-(void)setDiscoveryFlags:(unsigned long long)arg1 ;
-(unsigned long long)updateWithXPCSubscriberInfo:(id)arg1 ;
-(void)setSystemOverrideFlags:(unsigned)arg1 ;
-(char)bleRSSIThresholdHint;
-(void)setBleRSSIThresholdHint:(char)arg1 ;
-(int)bleScanRate;
-(unsigned long long)changeFlags;
-(unsigned long long)discoveryFlags;
-(int)bleScanRateOverride;
-(void)setBleScanRateOverride:(int)arg1 ;
-(BOOL)disabledActive;
-(void)setDisabledActive:(BOOL)arg1 ;
-(BOOL)disabledPending;
-(void)setDisabledPending:(BOOL)arg1 ;
-(unsigned long long)extraDiscoveryFlags;
-(void)setExtraDiscoveryFlags:(unsigned long long)arg1 ;
@end

