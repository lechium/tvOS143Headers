/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPhysicalCardActionControllerDelegate.h>

@class PKPhysicalCard, PKPhysicalCardActionController, PKPaymentPass, NSString, PKOrderPhysicalCardHeroView, CLInUseAssertion, CLLocationManager, PKBusinessChatController, SFClient;

@interface PKPhysicalCardManualActivationViewController : PKExplanationViewController <PKPhysicalCardActionControllerDelegate> {

	PKPhysicalCard* _physicalCard;
	PKPhysicalCardActionController* _actionController;
	PKPaymentPass* _paymentPass;
	unsigned long long _feature;
	NSString* _activationCode;
	PKOrderPhysicalCardHeroView* _hero;
	long long _state;
	CLInUseAssertion* _inUseAssertion;
	CLLocationManager* _locationManager;
	PKBusinessChatController* _businessChatController;
	SFClient* _sharingClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)_presentDisplayableError:(id)arg1 ;
-(id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 activationCode:(id)arg5 ;
-(void)physicalCardActionController:(id)arg1 didChangeToState:(long long)arg2 withError:(id)arg3 ;
-(void)_setupForCurrentState;
@end

