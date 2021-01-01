/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKContactFormatConfiguration;

@interface PKContactFormatValidator : NSObject {

	PKContactFormatConfiguration* _configuration;

}
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)emailAddressIsValid:(id)arg1 ;
-(BOOL)phoneNumberIsValid:(id)arg1 forCountryCode:(id)arg2 ;
-(unsigned long long)checkPostalAddressFormat:(id)arg1 ;
-(unsigned long long)checkNameFormat:(id)arg1 forCountryCode:(id)arg2 ;
-(id)formatPostalAddress:(id)arg1 ;
-(BOOL)_isFieldEntry:(id)arg1 validForContactFieldConfiguration:(id)arg2 ;
-(id)contactFieldConfigurationForGivenNameForCountryCode:(id)arg1 ;
-(id)contactFieldConfigurationForFamilyNameForCountryCode:(id)arg1 ;
-(id)contactFieldConfigurationForPhoneticGivenNameForCountryCode:(id)arg1 ;
-(id)contactFieldConfigurationForPhoneticFamilyNameForCountryCode:(id)arg1 ;
-(id)contactFieldConfigurationForPostalField:(id)arg1 forCountryCode:(id)arg2 ;
-(id)_formattedFieldEntry:(id)arg1 forFieldConfiguration:(id)arg2 ;
-(BOOL)_isFieldEntry:(id)arg1 validForTextContactFieldConfiguration:(id)arg2 ;
-(BOOL)_isFieldEntry:(id)arg1 validForPickerContactFieldConfiguration:(id)arg2 ;
-(BOOL)hasFormatValidationConfigurationForCountryCode:(id)arg1 ;
-(BOOL)isGivenName:(id)arg1 validFormatForCountryCode:(id)arg2 ;
-(BOOL)isFamilyName:(id)arg1 validFormatForCountryCode:(id)arg2 ;
-(BOOL)isPhoneticGivenName:(id)arg1 validFormatForCountryCode:(id)arg2 ;
-(BOOL)isPhoneticFamilyName:(id)arg1 validFormatForCountryCode:(id)arg2 ;
-(BOOL)isPostalAddressFieldEntry:(id)arg1 validForPostalFieldKey:(id)arg2 forCountryCode:(id)arg3 ;
@end

