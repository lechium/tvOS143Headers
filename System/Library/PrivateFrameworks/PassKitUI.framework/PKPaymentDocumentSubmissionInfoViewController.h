/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPaymentDocumentSubmissionControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>

@class PKPaymentDocumentSubmissionController, NSString;

@interface PKPaymentDocumentSubmissionInfoViewController : PKExplanationViewController <PKPaymentDocumentSubmissionControllerDelegate, PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol> {

	PKPaymentDocumentSubmissionController* _controller;
	long long _context;
	long long _currentState;
	long long _currentSide;
	unsigned long long _featureIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_secondaryButton;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)onPresentationRemoveViewControllersAfterMarker;
-(id)paymentSetupMarker;
-(void)updateUIWithState:(long long)arg1 ;
-(void)captureController:(id)arg1 showLoading:(BOOL)arg2 ;
-(void)captureController:(id)arg1 didChangeStateTo:(long long)arg2 ;
-(id)initWithController:(id)arg1 context:(long long)arg2 featureIdentifier:(unsigned long long)arg3 ;
-(void)_cancelPressed;
-(void)didSelectSetupLater;
@end

