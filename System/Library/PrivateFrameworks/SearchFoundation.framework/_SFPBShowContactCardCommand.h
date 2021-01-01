/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBShowContactCardCommand.h>
@class NSString, NSData;


@protocol _SFPBShowContactCardCommand <NSObject>
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (assign,nonatomic) BOOL isSuggestedContact; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)contactIdentifier;
-(id)initWithJSON:(id)arg1;
-(void)setContactIdentifier:(id)arg1;
-(NSData *)jsonData;
-(BOOL)isSuggestedContact;
-(void)setIsSuggestedContact:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBShowContactCardCommand : PBCodable <_SFPBShowContactCardCommand, NSSecureCoding> {

	BOOL _isSuggestedContact;
	NSString* _contactIdentifier;

}

@property (nonatomic,copy) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isSuggestedContact;                 //@synthesize isSuggestedContact=_isSuggestedContact - In the implementation block
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
-(NSString *)contactIdentifier;
-(id)initWithJSON:(id)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)isSuggestedContact;
-(void)setIsSuggestedContact:(BOOL)arg1 ;
@end

