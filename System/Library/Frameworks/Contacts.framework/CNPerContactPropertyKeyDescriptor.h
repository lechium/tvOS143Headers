/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>
#import <libobjc.A.dylib/CNKeyDescriptor.h>

@class NSMutableDictionary, NSString;

@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor_Private, CNKeyDescriptor> {

	NSMutableDictionary* _propertiesByIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * propertiesByIdentifier;              //@synthesize propertiesByIdentifier=_propertiesByIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_cn_requiredKeys;
-(id)_cn_optionalKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_ignorableKeys;
-(NSMutableDictionary *)propertiesByIdentifier;
-(void)setPropertiesByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setKeysToFetch:(id)arg1 forContactIdentifier:(id)arg2 ;
@end

