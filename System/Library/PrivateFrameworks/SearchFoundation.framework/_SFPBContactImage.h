/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBContactImage.h>
@class NSArray, NSString, NSData;


@protocol _SFPBContactImage <NSObject>
@property (nonatomic,copy) NSArray * contactIdentifiers; 
@property (assign,nonatomic) BOOL threeDTouchEnabled; 
@property (nonatomic,copy) NSString * appIconBadgeBundleIdentifier; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(id)arg1;
-(void)clearContactIdentifiers;
-(void)addContactIdentifiers:(id)arg1;
-(id)contactIdentifiersAtIndex:(unsigned long long)arg1;
-(unsigned long long)contactIdentifiersCount;
-(NSData *)jsonData;
-(BOOL)threeDTouchEnabled;
-(void)setThreeDTouchEnabled:(BOOL)arg1;
-(NSString *)appIconBadgeBundleIdentifier;
-(void)setAppIconBadgeBundleIdentifier:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSData;

@interface _SFPBContactImage : PBCodable <_SFPBContactImage, NSSecureCoding> {

	BOOL _threeDTouchEnabled;
	NSArray* _contactIdentifiers;
	NSString* _appIconBadgeBundleIdentifier;

}

@property (nonatomic,copy) NSArray * contactIdentifiers;                         //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                            //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (nonatomic,copy) NSString * appIconBadgeBundleIdentifier;              //@synthesize appIconBadgeBundleIdentifier=_appIconBadgeBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(NSArray *)arg1 ;
-(void)clearContactIdentifiers;
-(void)addContactIdentifiers:(id)arg1 ;
-(id)contactIdentifiersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)contactIdentifiersCount;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)threeDTouchEnabled;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(NSString *)appIconBadgeBundleIdentifier;
-(void)setAppIconBadgeBundleIdentifier:(NSString *)arg1 ;
@end

