/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNLabelValuePair, NSString, NSDictionary, NSSet;

@interface CNLabeledValue : NSObject <NSCopying, NSSecureCoding> {

	CNLabelValuePair* _labelValuePair;
	NSString* _identifier;
	int _iOSLegacyIdentifier;
	NSString* _storeIdentifier;
	NSDictionary* _storeInfo;
	NSSet* _linkedIdentifiers;
	BOOL _isValueMutable;

}

@property (readonly) CNLabelValuePair * labelValuePair;                               //@synthesize labelValuePair=_labelValuePair - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * linkedIdentifiers;                                 //@synthesize linkedIdentifiers=_linkedIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * storeInfo;                                  //@synthesize storeInfo=_storeInfo - In the implementation block
@property (assign,nonatomic) int iOSLegacyIdentifier;                                 //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,copy,readonly) id<NSCopying><NSSecureCoding> value; 
+(BOOL)supportsSecureCoding;
+(/*^block*/id)Value;
+(/*^block*/id)testMatchingIdentifier:(id)arg1 ;
+(id)localizedStringForLabel:(id)arg1 ;
+(id)entryForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)labelForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)valueForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(BOOL)isArrayOfEntries:(id)arg1 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg2 ;
+(id)entriesByUnifyingEntryArrays:(id)arg1 forProperty:(id)arg2 ;
+(id)emptyEntries;
+(id)allValuesInArray:(id)arg1 ;
+(id)labeledValueWithIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)firstLabeledValueWithValue:(id)arg1 inArray:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id<NSCopying><NSSecureCoding>)value;
-(NSString *)label;
-(NSString *)storeIdentifier;
-(int)iOSLegacyIdentifier;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSDictionary *)storeInfo;
-(id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(BOOL)isEqualIgnoringIdentifiers:(id)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(id)primitiveInitWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(NSSet *)linkedIdentifiers;
-(void)setLinkedIdentifiers:(NSSet *)arg1 ;
-(void)setStoreInfo:(NSDictionary *)arg1 ;
-(CNLabelValuePair *)labelValuePair;
-(id)labeledValueBySettingLabel:(id)arg1 ;
-(id)labeledValueBySettingValue:(id)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2 ;
-(void)addStoreInfo:(id)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
@end

