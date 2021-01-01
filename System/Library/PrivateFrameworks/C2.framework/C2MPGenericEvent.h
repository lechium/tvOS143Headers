/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface C2MPGenericEvent : PBCodable <NSCopying> {

	unsigned long long _timestampEnd;
	unsigned long long _timestampStart;
	NSMutableArray* _metrics;
	NSString* _name;
	int _type;
	SCD_Struct_C24 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampStart; 
@property (assign,nonatomic) unsigned long long timestampStart;              //@synthesize timestampStart=_timestampStart - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampEnd; 
@property (assign,nonatomic) unsigned long long timestampEnd;                //@synthesize timestampEnd=_timestampEnd - In the implementation block
@property (nonatomic,retain) NSMutableArray * metrics;                       //@synthesize metrics=_metrics - In the implementation block
+(Class)metricType;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setMetrics:(NSMutableArray *)arg1 ;
-(unsigned long long)metricsCount;
-(void)clearMetrics;
-(NSMutableArray *)metrics;
-(void)setTimestampStart:(unsigned long long)arg1 ;
-(void)setTimestampEnd:(unsigned long long)arg1 ;
-(void)addMetric:(id)arg1 ;
-(id)metricAtIndex:(unsigned long long)arg1 ;
-(void)setHasTimestampStart:(BOOL)arg1 ;
-(BOOL)hasTimestampStart;
-(void)setHasTimestampEnd:(BOOL)arg1 ;
-(BOOL)hasTimestampEnd;
-(unsigned long long)timestampStart;
-(unsigned long long)timestampEnd;
@end

