/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, PKPaymentPass, PKAssertion;

@interface PKPaymentPassMakeDefaultViewController : PKExplanationViewController {

	PKPaymentProvisioningController* _provisioningController;
	PKPaymentPass* _pass;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKAssertion* _notificationSupressionAssertion;

}
+(BOOL)shouldOfferMakeDefaultForPass:(id)arg1 provisioningController:(id)arg2 ;
-(void)dealloc;
-(CGSize)_snapshotSize;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_invalidateAssertion;
-(void)_acquireAssertion;
-(void)proceedToNextScreen;
-(void)_performAddToWatchFlowWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_showAddToWatchOfferWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 delegate:(id)arg4 ;
@end

