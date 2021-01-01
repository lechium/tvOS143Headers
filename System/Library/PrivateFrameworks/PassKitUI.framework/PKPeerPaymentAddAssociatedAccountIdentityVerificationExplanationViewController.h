/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>

@class PKPeerPaymentSetupFlowController, NSString;

@interface PKPeerPaymentAddAssociatedAccountIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate> {

	PKPeerPaymentSetupFlowController* _controller;
	/*^block*/id _cancelHandler;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id cancelHandler;                        //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,copy) id continueHandler;                      //@synthesize continueHandler=_continueHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id)cancelHandler;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(id)initWithPeerPaymentSetupFlowController:(id)arg1 ;
-(void)setCancelHandler:(id)arg1 ;
@end
