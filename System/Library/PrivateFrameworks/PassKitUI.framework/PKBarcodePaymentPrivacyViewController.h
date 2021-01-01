/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>

@class NSString;

@interface PKBarcodePaymentPrivacyViewController : PKExplanationViewController {

	unsigned long long _displayContext;
	NSString* _issuerName;

}
-(void)viewDidLoad;
-(void)_dismiss;
-(BOOL)_canShowWhileLocked;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(id)initWithIssuerName:(id)arg1 displayContext:(unsigned long long)arg2 paymentSetupContext:(long long)arg3 ;
-(void)_closeButtonPressed:(id)arg1 ;
@end

