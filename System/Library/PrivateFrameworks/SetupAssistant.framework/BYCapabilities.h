/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BYCapabilities : NSObject
+(id)sharedCapabilities;
-(BOOL)supportsApplePay;
-(BOOL)supportsPearl;
-(BOOL)mgHasSecureElement;
-(BOOL)mgHasSiriCapability;
-(id)_paymentScreenRequirements;
-(BOOL)_paymentScreenRequirementsIncludePasscode:(id)arg1 ;
-(BOOL)canShowPasscodeScreen;
-(BOOL)_paymentScreenRequirementsIncludeiCloud:(id)arg1 ;
-(BOOL)canShowAppleIDScreen;
-(BOOL)mgHasMesa;
-(BOOL)isPearlEnrolled;
-(BOOL)canShowSiriScreen;
-(BOOL)canShowPaymentScreen;
-(BOOL)canShowTouchIDScreen;
-(BOOL)canShowFaceIDScreen;
-(BOOL)mgHasCellularTelephony;
-(BOOL)mgHasGreenTea;
@end

