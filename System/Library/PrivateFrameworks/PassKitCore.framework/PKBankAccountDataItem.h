/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentDataItem.h>

@class PKCurrencyAmount, PKBankAccountInformation;

@interface PKBankAccountDataItem : PKPaymentDataItem {

	PKCurrencyAmount* _peerPaymentBalance;
	PKBankAccountInformation* _PKBankAccountInformation;

}

@property (nonatomic,retain) PKBankAccountInformation * PKBankAccountInformation;              //@synthesize PKBankAccountInformation=_PKBankAccountInformation - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalance;                            //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (nonatomic,readonly) PKBankAccountInformation * bankAccountInformation; 
+(long long)dataType;
-(id)initWithModel:(id)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(PKBankAccountInformation *)bankAccountInformation;
-(PKCurrencyAmount *)peerPaymentBalance;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(PKBankAccountInformation *)PKBankAccountInformation;
-(void)setPKBankAccountInformation:(PKBankAccountInformation *)arg1 ;
@end

