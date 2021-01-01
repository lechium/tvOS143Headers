/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class SISchemaViewContainer, NSString, NSData;

@interface SISchemaUUFRPresented : PBCodable {

	SISchemaViewContainer* _viewContainer;
	NSString* _errorDomain;
	int _errorCode;
	SCD_Struct_SI1 _has;
	BOOL _hasViewContainer;
	BOOL _hasErrorDomain;

}

@property (nonatomic,retain) SISchemaViewContainer * viewContainer;              //@synthesize viewContainer=_viewContainer - In the implementation block
@property (assign,nonatomic) BOOL hasViewContainer;                              //@synthesize hasViewContainer=_hasViewContainer - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                               //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorDomain;                                //@synthesize hasErrorDomain=_hasErrorDomain - In the implementation block
@property (assign,nonatomic) int errorCode;                                      //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(NSString *)errorDomain;
-(int)errorCode;
-(BOOL)hasErrorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasErrorDomain:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setViewContainer:(SISchemaViewContainer *)arg1 ;
-(SISchemaViewContainer *)viewContainer;
-(BOOL)hasViewContainer;
-(void)setHasViewContainer:(BOOL)arg1 ;
@end
