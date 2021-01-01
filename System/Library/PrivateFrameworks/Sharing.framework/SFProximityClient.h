/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface SFProximityClient : NSObject <NSSecureCoding> {

	BOOL _activateCalled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	BOOL _shouldAdvertise;
	BOOL _wantsUpdates;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _deviceEnteredImmediateHandler;
	/*^block*/id _deviceExitedImmediateHandler;
	/*^block*/id _deviceEnteredNearbyHandler;
	/*^block*/id _deviceExitedNearbyHandler;
	/*^block*/id _deviceWasSelectedHandler;
	/*^block*/id _deviceWillTriggerHandler;
	/*^block*/id _deviceDidUntriggerHandler;
	/*^block*/id _deviceWasDismissedHandlerEx;
	/*^block*/id _deviceWasDismissedHandler;
	/*^block*/id _deviceUpdateHandler;

}

@property (nonatomic,copy) id deviceUpdateHandler;                                    //@synthesize deviceUpdateHandler=_deviceUpdateHandler - In the implementation block
@property (assign,nonatomic) BOOL wantsUpdates;                                       //@synthesize wantsUpdates=_wantsUpdates - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldAdvertise;                                    //@synthesize shouldAdvertise=_shouldAdvertise - In the implementation block
@property (nonatomic,copy) id deviceEnteredImmediateHandler;                          //@synthesize deviceEnteredImmediateHandler=_deviceEnteredImmediateHandler - In the implementation block
@property (nonatomic,copy) id deviceExitedImmediateHandler;                           //@synthesize deviceExitedImmediateHandler=_deviceExitedImmediateHandler - In the implementation block
@property (nonatomic,copy) id deviceEnteredNearbyHandler;                             //@synthesize deviceEnteredNearbyHandler=_deviceEnteredNearbyHandler - In the implementation block
@property (nonatomic,copy) id deviceExitedNearbyHandler;                              //@synthesize deviceExitedNearbyHandler=_deviceExitedNearbyHandler - In the implementation block
@property (nonatomic,copy) id deviceWasSelectedHandler;                               //@synthesize deviceWasSelectedHandler=_deviceWasSelectedHandler - In the implementation block
@property (nonatomic,copy) id deviceWillTriggerHandler;                               //@synthesize deviceWillTriggerHandler=_deviceWillTriggerHandler - In the implementation block
@property (nonatomic,copy) id deviceDidUntriggerHandler;                              //@synthesize deviceDidUntriggerHandler=_deviceDidUntriggerHandler - In the implementation block
@property (nonatomic,copy) id deviceWasDismissedHandlerEx;                            //@synthesize deviceWasDismissedHandlerEx=_deviceWasDismissedHandlerEx - In the implementation block
@property (nonatomic,copy) id deviceWasDismissedHandler;                              //@synthesize deviceWasDismissedHandler=_deviceWasDismissedHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)_invalidate;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_interrupted;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_ensureXPCStarted;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setShouldAdvertise:(BOOL)arg1 ;
-(BOOL)shouldAdvertise;
-(void)proximityClientDeviceEnteredImmediate:(id)arg1 ;
-(void)proximityClientDeviceExitedImmediate:(id)arg1 ;
-(void)proximityClientDeviceEnteredNearby:(id)arg1 ;
-(void)proximityClientDeviceExitedNearby:(id)arg1 ;
-(void)proximityClientDeviceWasDismissedHandler:(id)arg1 reason:(long long)arg2 ;
-(void)proximityClientDeviceWasSelectedHandler:(id)arg1 ;
-(void)proximityClientDeviceWillTriggerHandler:(id)arg1 ;
-(void)proximityClientDeviceDidUntriggerHandler:(id)arg1 ;
-(void)proximityClientDeviceUpdated:(id)arg1 rssi:(long long)arg2 state:(long long)arg3 ;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(void)_dismissContentForDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_provideContent:(id)arg1 forDevice:(id)arg2 force:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_suppressDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stopSuppressingDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateContent:(id)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissContentForDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)provideContent:(id)arg1 forDevice:(id)arg2 force:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)suppressDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopSuppressingDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateContent:(id)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestScannerTimerReset;
-(id)deviceEnteredImmediateHandler;
-(void)setDeviceEnteredImmediateHandler:(id)arg1 ;
-(id)deviceExitedImmediateHandler;
-(void)setDeviceExitedImmediateHandler:(id)arg1 ;
-(id)deviceEnteredNearbyHandler;
-(void)setDeviceEnteredNearbyHandler:(id)arg1 ;
-(id)deviceExitedNearbyHandler;
-(void)setDeviceExitedNearbyHandler:(id)arg1 ;
-(id)deviceWasSelectedHandler;
-(void)setDeviceWasSelectedHandler:(id)arg1 ;
-(id)deviceWillTriggerHandler;
-(void)setDeviceWillTriggerHandler:(id)arg1 ;
-(id)deviceDidUntriggerHandler;
-(void)setDeviceDidUntriggerHandler:(id)arg1 ;
-(id)deviceWasDismissedHandlerEx;
-(void)setDeviceWasDismissedHandlerEx:(id)arg1 ;
-(id)deviceWasDismissedHandler;
-(void)setDeviceWasDismissedHandler:(id)arg1 ;
-(id)deviceUpdateHandler;
-(void)setDeviceUpdateHandler:(id)arg1 ;
-(BOOL)wantsUpdates;
-(void)setWantsUpdates:(BOOL)arg1 ;
@end

