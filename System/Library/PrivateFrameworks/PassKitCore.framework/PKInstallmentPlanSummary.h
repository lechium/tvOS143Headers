/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKInstallmentPlanSummary : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _startDate;
	NSDate* _originalEndDate;
	NSDate* _currentEndDate;
	NSDecimalNumber* _currentBalance;
	NSString* _currencyCode;
	NSDecimalNumber* _minimumDue;
	NSDate* _minimumDueDate;
	NSDecimalNumber* _interestCharged;
	NSDecimalNumber* _paymentsToDateAmount;

}

@property (nonatomic,retain) NSDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * originalEndDate;                            //@synthesize originalEndDate=_originalEndDate - In the implementation block
@property (nonatomic,retain) NSDate * currentEndDate;                             //@synthesize currentEndDate=_currentEndDate - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * currentBalance;                    //@synthesize currentBalance=_currentBalance - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                               //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * minimumDue;                        //@synthesize minimumDue=_minimumDue - In the implementation block
@property (nonatomic,retain) NSDate * minimumDueDate;                             //@synthesize minimumDueDate=_minimumDueDate - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * interestCharged;                   //@synthesize interestCharged=_interestCharged - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * paymentsToDateAmount;              //@synthesize paymentsToDateAmount=_paymentsToDateAmount - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDecimalNumber *)minimumDue;
-(void)setMinimumDue:(NSDecimalNumber *)arg1 ;
-(NSDate *)originalEndDate;
-(NSDecimalNumber *)currentBalance;
-(void)setCurrentBalance:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)interestCharged;
-(void)setInterestCharged:(NSDecimalNumber *)arg1 ;
-(BOOL)isEqualToInstallmentPlanSummary:(id)arg1 ;
-(void)setOriginalEndDate:(NSDate *)arg1 ;
-(NSDate *)currentEndDate;
-(void)setCurrentEndDate:(NSDate *)arg1 ;
-(NSDate *)minimumDueDate;
-(void)setMinimumDueDate:(NSDate *)arg1 ;
-(NSDecimalNumber *)paymentsToDateAmount;
-(void)setPaymentsToDateAmount:(NSDecimalNumber *)arg1 ;
@end

