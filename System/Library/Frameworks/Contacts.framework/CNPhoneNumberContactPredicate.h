/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNPredicate.h>

@class CNPhoneNumber, NSString, NSArray;

@interface CNPhoneNumberContactPredicate : CNPredicate {

	BOOL _returnsMultipleResults;
	CNPhoneNumber* _phoneNumber;
	NSString* _prefixHint;
	NSString* _digits;
	NSString* _countryCode;
	NSArray* _groupIdentifiers;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDebugDescription;
@end

