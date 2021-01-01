/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LTSchemaMTSpeechTranslationEvent : PBCodable {

	NSString* _requestID;
	NSString* _selectedLocale;
	int _responseTimeMs;
	SCD_Struct_SI1 _has;
	BOOL _hasRequestID;
	BOOL _hasSelectedLocale;

}

@property (nonatomic,copy) NSString * requestID;                   //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasRequestID;                    //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,copy) NSString * selectedLocale;              //@synthesize selectedLocale=_selectedLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedLocale;               //@synthesize hasSelectedLocale=_hasSelectedLocale - In the implementation block
@property (assign,nonatomic) int responseTimeMs;                   //@synthesize responseTimeMs=_responseTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTimeMs; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)setSelectedLocale:(NSString *)arg1 ;
-(NSString *)selectedLocale;
-(BOOL)hasRequestID;
-(BOOL)hasSelectedLocale;
-(void)setHasRequestID:(BOOL)arg1 ;
-(void)setHasSelectedLocale:(BOOL)arg1 ;
-(void)setResponseTimeMs:(int)arg1 ;
-(int)responseTimeMs;
-(BOOL)hasResponseTimeMs;
-(void)setHasResponseTimeMs:(BOOL)arg1 ;
@end

