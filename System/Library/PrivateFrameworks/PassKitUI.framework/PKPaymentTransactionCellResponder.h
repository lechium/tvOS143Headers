/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, PKPaymentTransactionView;


@protocol PKPaymentTransactionCellResponder <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) PKPaymentTransactionView * transactionView; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(PKPaymentTransactionView *)transactionView;

@end

