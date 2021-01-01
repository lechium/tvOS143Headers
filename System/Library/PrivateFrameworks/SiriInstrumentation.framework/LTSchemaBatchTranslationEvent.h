/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class LTSchemaTask, NSString, LTSchemaError, NSData;

@interface LTSchemaBatchTranslationEvent : PBCodable {

	LTSchemaTask* _task;
	NSString* _sessionID;
	NSString* _requestID;
	NSString* _systemLocale;
	unsigned _batchSeqNo;
	unsigned _numberOfParagraphs;
	unsigned _responseTimeMs;
	unsigned _numParagraphFailures;
	LTSchemaError* _error;
	SCD_Struct_LT2 _has;
	BOOL _hasTask;
	BOOL _hasSessionID;
	BOOL _hasRequestID;
	BOOL _hasSystemLocale;
	BOOL _hasError;

}

@property (nonatomic,retain) LTSchemaTask * task;                        //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) BOOL hasTask;                               //@synthesize hasTask=_hasTask - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                         //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID;                          //@synthesize hasSessionID=_hasSessionID - In the implementation block
@property (nonatomic,copy) NSString * requestID;                         //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL hasRequestID;                          //@synthesize hasRequestID=_hasRequestID - In the implementation block
@property (nonatomic,copy) NSString * systemLocale;                      //@synthesize systemLocale=_systemLocale - In the implementation block
@property (assign,nonatomic) BOOL hasSystemLocale;                       //@synthesize hasSystemLocale=_hasSystemLocale - In the implementation block
@property (assign,nonatomic) unsigned batchSeqNo;                        //@synthesize batchSeqNo=_batchSeqNo - In the implementation block
@property (assign,nonatomic) BOOL hasBatchSeqNo; 
@property (assign,nonatomic) unsigned numberOfParagraphs;                //@synthesize numberOfParagraphs=_numberOfParagraphs - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfParagraphs; 
@property (assign,nonatomic) unsigned responseTimeMs;                    //@synthesize responseTimeMs=_responseTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTimeMs; 
@property (assign,nonatomic) unsigned numParagraphFailures;              //@synthesize numParagraphFailures=_numParagraphFailures - In the implementation block
@property (assign,nonatomic) BOOL hasNumParagraphFailures; 
@property (nonatomic,retain) LTSchemaError * error;                      //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasError;                              //@synthesize hasError=_hasError - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)systemLocale;
-(LTSchemaError *)error;
-(void)setError:(LTSchemaError *)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasError;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(LTSchemaTask *)task;
-(void)setTask:(LTSchemaTask *)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(NSData *)jsonData;
-(BOOL)hasRequestID;
-(void)setHasRequestID:(BOOL)arg1 ;
-(void)setSystemLocale:(NSString *)arg1 ;
-(void)setBatchSeqNo:(unsigned)arg1 ;
-(void)setNumberOfParagraphs:(unsigned)arg1 ;
-(void)setResponseTimeMs:(unsigned)arg1 ;
-(void)setNumParagraphFailures:(unsigned)arg1 ;
-(unsigned)batchSeqNo;
-(unsigned)numberOfParagraphs;
-(unsigned)responseTimeMs;
-(unsigned)numParagraphFailures;
-(BOOL)hasTask;
-(BOOL)hasSystemLocale;
-(BOOL)hasBatchSeqNo;
-(void)setHasBatchSeqNo:(BOOL)arg1 ;
-(BOOL)hasNumberOfParagraphs;
-(void)setHasNumberOfParagraphs:(BOOL)arg1 ;
-(BOOL)hasResponseTimeMs;
-(void)setHasResponseTimeMs:(BOOL)arg1 ;
-(BOOL)hasNumParagraphFailures;
-(void)setHasNumParagraphFailures:(BOOL)arg1 ;
-(void)setHasTask:(BOOL)arg1 ;
-(void)setHasSystemLocale:(BOOL)arg1 ;
@end

