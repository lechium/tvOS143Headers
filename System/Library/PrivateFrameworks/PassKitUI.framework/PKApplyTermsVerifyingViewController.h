/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKApplyController, NSString, CLInUseAssertion;

@interface PKApplyTermsVerifyingViewController : PKExplanationViewController {

	PKApplyController* _applyController;
	NSString* _termsIdentifier;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	BOOL _isProcessingTerms;
	unsigned long long _featureIdentifier;
	CLInUseAssertion* _inUseAssertion;

}
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_terminateSetupFlow;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4 ;
-(void)_showActivationSpinner:(BOOL)arg1 ;
-(void)_processTerms;
@end
