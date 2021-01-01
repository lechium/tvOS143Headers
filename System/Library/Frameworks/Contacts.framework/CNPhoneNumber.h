/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	NSString* _initialCountryCode;
	NSString* _stringValue;
	os_unfair_lock_s _stateLock;
	CFPhoneNumberRef _phoneNumberRef;

}

@property (nonatomic,copy,readonly) NSString * initialCountryCode;                               //@synthesize initialCountryCode=_initialCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,copy,readonly) NSString * digits; 
@property (nonatomic,copy,readonly) NSString * formattedStringValue; 
@property (nonatomic,copy,readonly) NSString * formattedInternationalStringValue; 
@property (nonatomic,copy,readonly) NSString * unformattedInternationalStringValue; 
@property (nonatomic,copy,readonly) NSString * stringValue;                                      //@synthesize stringValue=_stringValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(id)defaultCountryCode;
+(id)phoneNumberWithStringValue:(id)arg1 ;
+(id)phoneNumberWithCopiedStringValue:(id)arg1 ;
+(CFPhoneNumberRef)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2 ;
+(BOOL)_isCountryCodeForNorthAmericanDialingPlan:(id)arg1 ;
+(id)_countryCodesForNorthAmericanDialingPlan;
+(id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;
+(id)unsupportedCountryCodes;
+(id)dialingCodeForISOCountryCode:(id)arg1 ;
+(/*^block*/id)StringValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)countryCode;
-(NSString *)digits;
-(BOOL)isValid:(id*)arg1 ;
-(NSString *)unformattedInternationalStringValue;
-(BOOL)isLikePhoneNumberForSamePerson:(id)arg1 ;
-(NSString *)formattedStringValue;
-(id)primitiveInitWithStringValue:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithStringValue:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)initialCountryCode;
-(BOOL)isLikePhoneNumber:(id)arg1 ;
-(CFPhoneNumberRef)phoneNumberRef;
-(CFPhoneNumberRef)nts_lazyPhoneNumberRef;
-(id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1 ;
-(id)_countryCodeFromPhoneNumberRef;
-(id)initWithStringValue:(id)arg1 ;
-(id)lastFourDigits;
-(NSString *)formattedInternationalStringValue;
-(BOOL)isFullyQualified;
-(id)fullyQualifiedDigits;
-(id)digitsRemovingDialingCode;
-(id)formattedStringValueRemovingDialingCode;
@end

