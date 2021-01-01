/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _SFServiceIdentifier, NSArray, NSString, NSDate, NSDictionary, NSData;

@interface _SFCredential : NSObject <NSSecureCoding, NSCopying> {

	_SFServiceIdentifier* _primaryServiceIdentifier;
	NSArray* _supplementaryServiceIdentifiers;
	NSString* _label;
	NSString* _description;
	NSString* _persistentIdentifier;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSDictionary* _customAttributes;
	int _keyclass;
	NSString* _accessGroup;
	NSData* _changeToken;

}

@property (setter=_setPersistentIdentifier:,nonatomic,copy) NSString * persistentIdentifier;                  //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (setter=_setCreationDate:,nonatomic,copy) NSDate * creationDate;                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (setter=_setModificationDate:,nonatomic,copy) NSDate * modificationDate;                            //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,setter=_setKeyclass:,getter=_keyclass,nonatomic) int keyclass; 
@property (setter=_setAccessGroup:,getter=_accessGroup,nonatomic,retain) NSString * accessGroup; 
@property (setter=_setChangeToken:,getter=_changeToken,nonatomic,retain) NSData * changeToken; 
@property (nonatomic,retain) _SFServiceIdentifier * primaryServiceIdentifier;                                 //@synthesize primaryServiceIdentifier=_primaryServiceIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * supplementaryServiceIdentifiers; 
@property (nonatomic,copy) NSString * localizedLabel;                                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                                                   //@synthesize description=_description - In the implementation block
@property (nonatomic,copy) NSDictionary * customAttributes;                                                   //@synthesize customAttributes=_customAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(void)_setCreationDate:(id)arg1 ;
-(NSString *)persistentIdentifier;
-(NSDate *)modificationDate;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSDictionary *)customAttributes;
-(id)_accessGroup;
-(_SFServiceIdentifier *)primaryServiceIdentifier;
-(void)setPrimaryServiceIdentifier:(_SFServiceIdentifier *)arg1 ;
-(id)_changeToken;
-(NSString *)localizedLabel;
-(NSArray *)supplementaryServiceIdentifiers;
-(id)_initWithPrimaryServiceIdentifier:(id)arg1 supplementaryServiceIdentiifers:(id)arg2 ;
-(void)setSupplementaryServiceIdentifiers:(NSArray *)arg1 ;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(void)setCustomAttributes:(NSDictionary *)arg1 ;
-(void)_setPersistentIdentifier:(id)arg1 ;
-(void)_setModificationDate:(id)arg1 ;
-(void)_setKeyclass:(int)arg1 ;
-(int)_keyclass;
-(void)_setAccessGroup:(id)arg1 ;
-(void)_setChangeToken:(id)arg1 ;
@end

