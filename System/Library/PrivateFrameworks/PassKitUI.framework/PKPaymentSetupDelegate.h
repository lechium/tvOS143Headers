/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPaymentSetupDelegate <NSObject>
@optional
-(void)paymentSetupDidShowError:(id)arg1;
-(void)paymentSetupDidShowEligibilityIssue;
-(void)paymentSetupRequestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withVisibleViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentSetupDidExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg1 withShouldContinue:(BOOL)arg2 error:(id)arg3;
-(void)paymentSetupRequestPasscodeUpgradeWithVisibleViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)paymentSetupDidExitPasscodeUpgradeWithShouldContinue:(BOOL)arg1 error:(id)arg2;

@required
-(void)paymentSetupDidFinish:(id)arg1;

@end
