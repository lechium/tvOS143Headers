/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKPaymentPreferenceCardCell.h>

@class UIImage, PKBankAccountInformation;

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {

	UIImage* _bankIcon;
	PKBankAccountInformation* _bankAccount;

}

@property (nonatomic,retain) PKBankAccountInformation * bankAccount;              //@synthesize bankAccount=_bankAccount - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setBankAccount:(PKBankAccountInformation *)arg1 ;
-(PKBankAccountInformation *)bankAccount;
-(void)_updateCellContent;
-(void)_updateCensoredPANLabel;
@end

