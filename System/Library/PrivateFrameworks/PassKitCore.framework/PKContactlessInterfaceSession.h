/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentSession.h>

@protocol PKContactlessInterfaceSessionDelegate, OS_dispatch_queue;
@class PKPaymentApplication, PKPaymentPass, NSArray, PKFieldProperties, NSObject, PKTransitAppletHistory;

@interface PKContactlessInterfaceSession : PKPaymentSession {

	PKPaymentApplication* _activatedPaymentApplication;
	PKPaymentPass* _activatedPaymentPass;
	NSArray* _activatedValueAddedServicePasses;
	NSArray* _activatedHostCards;
	NSArray* _valueAddedServiceTransactions;
	PKFieldProperties* _fieldProperties;
	PKFieldProperties* _fieldPropertiesToLookup;
	BOOL _restoreActiveApplets;
	unsigned long long _transactionStartTime;
	AB _fieldPresent;
	BOOL _handlingExpress;
	unsigned long long _expressActivity;
	BOOL _felicaStateChanged;
	unsigned long long _state;
	id<PKContactlessInterfaceSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) BOOL persistentCardEmulationQueued; 
@property (nonatomic,readonly) PKPaymentApplication * activatedPaymentApplication; 
@property (nonatomic,readonly) PKPaymentPass * activatedPaymentPass; 
@property (nonatomic,readonly) NSArray * activatedValueAddedServicePasses;                           //@synthesize activatedValueAddedServicePasses=_activatedValueAddedServicePasses - In the implementation block
@property (nonatomic,readonly) BOOL fieldPresent; 
@property (nonatomic,readonly) PKFieldProperties * fieldProperties;                                  //@synthesize fieldProperties=_fieldProperties - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) PKTransitAppletHistory * transitAppletState; 
@property (assign,nonatomic,__weak) id<PKContactlessInterfaceSessionDelegate> delegate; 
+(id)transitAppletStateFromPaymentSession:(id)arg1 withPaymentApplication:(id)arg2 ;
-(id<PKContactlessInterfaceSessionDelegate>)delegate;
-(void)setDelegate:(id<PKContactlessInterfaceSessionDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)invalidateSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 ;
-(BOOL)activateValueAddedServicePasses:(id)arg1 ;
-(BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1 deferAuthorization:(BOOL)arg2 ;
-(BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 markAsDefault:(BOOL)arg3 ;
-(BOOL)activateValueAddedServicePassWhitelist:(id)arg1 greylist:(id)arg2 ;
-(BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1 ;
-(BOOL)stopCardEmulation;
-(void)resetExpressState;
-(BOOL)queuePersistentCardEmulation;
-(BOOL)resetPersistentCardEmulation;
-(BOOL)paymentApplicationSupportsAutomaticAuthorization:(id)arg1 ;
-(PKPaymentApplication *)activatedPaymentApplication;
-(PKPaymentPass *)activatedPaymentPass;
-(PKTransitAppletHistory *)transitAppletState;
-(BOOL)fieldPresent;
-(BOOL)persistentCardEmulationQueued;
-(id)_filteredLoyaltyPassesFromVASTransactions:(id)arg1 activatedPasses:(id)arg2 ;
-(NSArray *)activatedValueAddedServicePasses;
-(PKFieldProperties *)fieldProperties;
@end

