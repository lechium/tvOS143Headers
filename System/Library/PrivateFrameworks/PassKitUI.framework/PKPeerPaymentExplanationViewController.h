/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerDataSource.h>

@class PKPeerPaymentSetupFlowController, UIViewController, PKPeerPaymentSetupFlowProvisionConfiguration, NSString;

@interface PKPeerPaymentExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPeerPaymentSetupFlowControllerDataSource> {

	unsigned long long _operations;
	PKPeerPaymentSetupFlowController* _peerPaymentSetupFlowController;
	UIViewController* _nextViewController;
	PKPeerPaymentSetupFlowProvisionConfiguration* _configuration;
	BOOL _hidesSetupLater;
	BOOL _allowsManualEntry;

}

@property (assign,nonatomic) BOOL allowsManualEntry;                //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id)_bodyText;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_terminateSetupFlow;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)_handleNextStep;
-(void)_presentDisplayableError:(id)arg1 ;
-(BOOL)shouldPushTerms;
-(void)_addDifferentCard;
-(id)initWithProvisoningController:(id)arg1 setupDelegate:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4 credential:(id)arg5 ;
-(BOOL)allowsManualEntry;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
@end

