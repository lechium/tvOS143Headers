/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerDataSource.h>

@class PKFamilyMember, PKPeerPaymentWebService, PKPeerPaymentSetupFlowController, PKPeerPaymentAccount, PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration, PKWatchDeviceImageOverlayView, NSString;

@interface PKPeerPaymentAddAssociatedAccountViewController : PKExplanationViewController <PKPeerPaymentSetupFlowControllerDataSource> {

	unsigned long long _operations;
	PKFamilyMember* _familyMember;
	PKFamilyMember* _viewer;
	PKPeerPaymentWebService* _webService;
	PKPeerPaymentSetupFlowController* _peerPaymentSetupFlowController;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration* _configuration;
	PKWatchDeviceImageOverlayView* _watchDeviceImageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg1 ;
-(id)_imageForWatchView;
-(void)_showSpinner:(BOOL)arg1 ;
-(void)_presentDisplayableError:(id)arg1 ;
-(BOOL)shouldPushTerms;
-(void)_terminateAddAssociatedAccountFlow;
-(id)initWithFamilyMember:(id)arg1 viewer:(id)arg2 webService:(id)arg3 passLibraryDataProvider:(id)arg4 delegate:(id)arg5 context:(long long)arg6 ;
@end

