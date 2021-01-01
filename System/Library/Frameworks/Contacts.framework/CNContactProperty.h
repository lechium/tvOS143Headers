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

@class NSString, CNContact;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {

	NSString* _key;
	NSString* _identifier;
	CNContact* _internalContact;

}

@property (nonatomic,copy,readonly) CNContact * contact; 
@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
+(id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
+(id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)value;
-(NSString *)key;
-(NSString *)label;
-(CNContact *)contact;
-(id)labeledValue;
-(id)sourceContact;
-(int)multiValueIdentifier;
@end

