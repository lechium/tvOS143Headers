/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying> {

	NSMutableArray* _logMsgEvents;
	unsigned _groupRetryCount;
	int _logMessageType;
	struct {
		unsigned has_groupRetryCount : 1;
		unsigned has_logMessageType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasGroupRetryCount; 
@property (assign,nonatomic) unsigned groupRetryCount; 
@property (nonatomic,retain) NSMutableArray * logMsgEvents; 
@property (assign,nonatomic) BOOL hasLogMessageType; 
@property (assign,nonatomic) int logMessageType; 
+(BOOL)isValid:(id)arg1 ;
+(Class)logMsgEventType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)addLogMsgEvent:(id)arg1 ;
-(void)setLogMessageType:(int)arg1 ;
-(void)setGroupRetryCount:(unsigned)arg1 ;
-(unsigned long long)logMsgEventsCount;
-(void)clearLogMsgEvents;
-(id)logMsgEventAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)logMsgEvents;
-(void)setLogMsgEvents:(NSMutableArray *)arg1 ;
-(int)logMessageType;
-(void)setHasLogMessageType:(BOOL)arg1 ;
-(BOOL)hasLogMessageType;
-(id)logMessageTypeAsString:(int)arg1 ;
-(int)StringAsLogMessageType:(id)arg1 ;
-(unsigned)groupRetryCount;
-(void)setHasGroupRetryCount:(BOOL)arg1 ;
-(BOOL)hasGroupRetryCount;
@end

