/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INTransferMoneyIntentResponseExport.h>

@class INPaymentAccount, INPaymentAmount, INDateComponentsRange, NSString, INCurrencyAmount;

@interface INTransferMoneyIntentResponse : INIntentResponse <INTransferMoneyIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INPaymentAccount * fromAccount; 
@property (nonatomic,copy) INPaymentAccount * toAccount; 
@property (nonatomic,copy) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy) NSString * transactionNote; 
@property (nonatomic,copy) INCurrencyAmount * transferFee; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertiesByName;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(long long)_codeWithName:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(INPaymentAccount *)arg1 ;
-(INPaymentAccount *)toAccount;
-(void)setToAccount:(INPaymentAccount *)arg1 ;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(INPaymentAmount *)arg1 ;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(INDateComponentsRange *)arg1 ;
-(NSString *)transactionNote;
-(void)setTransactionNote:(NSString *)arg1 ;
-(INCurrencyAmount *)transferFee;
-(void)setTransferFee:(INCurrencyAmount *)arg1 ;
@end

