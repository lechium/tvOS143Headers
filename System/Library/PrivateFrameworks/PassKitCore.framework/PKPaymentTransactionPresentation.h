/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PKPaymentTransactionPresentation : NSObject
+(id)_relativeDateForTransaction:(id)arg1 ;
+(id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 secondarySource:(id)arg2 includeBankAccountSuffix:(BOOL)arg3 useGenericNameIfNoDescriptionAvailable:(BOOL)arg4 ;
+(id)_statusAnnotationForTransaction:(id)arg1 ;
+(id)_billPaymentFundingSourceForTransaction:(id)arg1 ;
+(id)staticPDFNameForTransaction:(id)arg1 ;
+(id)presentationInformationForTransaction:(id)arg1 transactionSource:(id)arg2 secondaryTransactionSource:(id)arg3 account:(id)arg4 deviceName:(id)arg5 context:(unsigned long long)arg6 ;
+(unsigned long long)iconTypeForTransaction:(id)arg1 ignoreLogoURL:(BOOL)arg2 ;
@end
