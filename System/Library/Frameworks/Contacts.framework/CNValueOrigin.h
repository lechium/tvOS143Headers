/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNValueOrigin : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localizedApplicationName;
	NSString* _donationIdentifier;

}

@property (nonatomic,copy,readonly) NSString * localizedApplicationName;              //@synthesize localizedApplicationName=_localizedApplicationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * donationIdentifier;                    //@synthesize donationIdentifier=_donationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLocalizedApplicationName:(id)arg1 donationIdentifier:(id)arg2 ;
-(NSString *)localizedApplicationName;
-(NSString *)donationIdentifier;
@end
