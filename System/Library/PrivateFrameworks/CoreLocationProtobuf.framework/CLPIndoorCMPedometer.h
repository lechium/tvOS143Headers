/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPIndoorCMPedometer : PBCodable <NSCopying> {

	double _firstStepTime;
	double _timestamp;
	float _activeTime;
	float _distance;
	int _floorsAscended;
	int _floorsDescended;
	int _numberOfSteps;
	SCD_Struct_CL8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) float distance;                       //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSteps; 
@property (assign,nonatomic) int numberOfSteps;                    //@synthesize numberOfSteps=_numberOfSteps - In the implementation block
@property (assign,nonatomic) BOOL hasFloorsAscended; 
@property (assign,nonatomic) int floorsAscended;                   //@synthesize floorsAscended=_floorsAscended - In the implementation block
@property (assign,nonatomic) BOOL hasFloorsDescended; 
@property (assign,nonatomic) int floorsDescended;                  //@synthesize floorsDescended=_floorsDescended - In the implementation block
@property (assign,nonatomic) BOOL hasFirstStepTime; 
@property (assign,nonatomic) double firstStepTime;                 //@synthesize firstStepTime=_firstStepTime - In the implementation block
@property (assign,nonatomic) BOOL hasActiveTime; 
@property (assign,nonatomic) float activeTime;                     //@synthesize activeTime=_activeTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDistance:(float)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(float)distance;
-(int)numberOfSteps;
-(int)floorsAscended;
-(int)floorsDescended;
-(float)activeTime;
-(double)firstStepTime;
-(void)setNumberOfSteps:(int)arg1 ;
-(void)setHasNumberOfSteps:(BOOL)arg1 ;
-(BOOL)hasNumberOfSteps;
-(void)setFloorsAscended:(int)arg1 ;
-(void)setHasFloorsAscended:(BOOL)arg1 ;
-(BOOL)hasFloorsAscended;
-(void)setFloorsDescended:(int)arg1 ;
-(void)setHasFloorsDescended:(BOOL)arg1 ;
-(BOOL)hasFloorsDescended;
-(void)setFirstStepTime:(double)arg1 ;
-(void)setHasFirstStepTime:(BOOL)arg1 ;
-(BOOL)hasFirstStepTime;
-(void)setActiveTime:(float)arg1 ;
-(void)setHasActiveTime:(BOOL)arg1 ;
-(BOOL)hasActiveTime;
@end

