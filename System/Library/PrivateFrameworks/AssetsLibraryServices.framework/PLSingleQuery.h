/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDate;

@interface PLSingleQuery : PBCodable <NSCopying> {

	int _comparator;
	NSData* _firstValue;
	int _key;
	NSData* _secondValue;
	int _unit;
	int _valueType;
	SCD_Struct_PL14 _has;

}

@property (assign,nonatomic) double doubleValue; 
@property (assign,nonatomic) double secondDoubleValue; 
@property (assign,nonatomic) long long integerValue; 
@property (assign,nonatomic) long long secondIntegerValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,retain) NSString * stringValue; 
@property (nonatomic,retain) NSString * secondStringValue; 
@property (nonatomic,retain) NSDate * dateValue; 
@property (nonatomic,retain) NSDate * secondDateValue; 
@property (assign,nonatomic) BOOL hasKey; 
@property (assign,nonatomic) int key;                                   //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasValueType; 
@property (assign,nonatomic) int valueType;                             //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstValue; 
@property (nonatomic,retain) NSData * firstValue;                       //@synthesize firstValue=_firstValue - In the implementation block
@property (nonatomic,readonly) BOOL hasSecondValue; 
@property (nonatomic,retain) NSData * secondValue;                      //@synthesize secondValue=_secondValue - In the implementation block
@property (assign,nonatomic) BOOL hasComparator; 
@property (assign,nonatomic) int comparator;                            //@synthesize comparator=_comparator - In the implementation block
@property (assign,nonatomic) BOOL hasUnit; 
@property (assign,nonatomic) int unit;                                  //@synthesize unit=_unit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)doubleValue;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(long long)integerValue;
-(int)key;
-(int)comparator;
-(id)dictionaryRepresentation;
-(int)unit;
-(void)setKey:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSDate *)dateValue;
-(void)setIntegerValue:(long long)arg1 ;
-(void)setDateValue:(NSDate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)valueType;
-(BOOL)hasKey;
-(void)setHasKey:(BOOL)arg1 ;
-(void)setValueType:(int)arg1 ;
-(void)setUnit:(int)arg1 ;
-(BOOL)hasUnit;
-(void)setHasUnit:(BOOL)arg1 ;
-(BOOL)hasValueType;
-(void)setHasValueType:(BOOL)arg1 ;
-(id)logDescription;
-(double)secondDoubleValue;
-(void)setSecondDoubleValue:(double)arg1 ;
-(long long)secondIntegerValue;
-(void)setSecondIntegerValue:(long long)arg1 ;
-(NSString *)secondStringValue;
-(void)setSecondStringValue:(NSString *)arg1 ;
-(NSDate *)secondDateValue;
-(void)setSecondDateValue:(NSDate *)arg1 ;
-(int)migratedComparator;
-(void)setValueAndType:(id)arg1 ;
-(BOOL)hasFirstValue;
-(BOOL)hasSecondValue;
-(void)setComparator:(int)arg1 ;
-(void)setHasComparator:(BOOL)arg1 ;
-(BOOL)hasComparator;
-(NSData *)firstValue;
-(void)setFirstValue:(NSData *)arg1 ;
-(NSData *)secondValue;
-(void)setSecondValue:(NSData *)arg1 ;
@end

