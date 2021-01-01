/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPConfigurationFieldValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _longValue;
	NSData* _bytesValue;
	NSMutableArray* _fieldValues;
	NSMutableArray* _listValues;
	NSString* _stringValue;
	int _type;
	BOOL _boolValue;
	SCD_Struct_CK11 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                       //@synthesize bytesValue=_bytesValue - In the implementation block
@property (assign,nonatomic) BOOL hasBoolValue; 
@property (assign,nonatomic) BOOL boolValue;                            //@synthesize boolValue=_boolValue - In the implementation block
@property (assign,nonatomic) BOOL hasLongValue; 
@property (assign,nonatomic) long long longValue;                       //@synthesize longValue=_longValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                        //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * fieldValues;              //@synthesize fieldValues=_fieldValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * listValues;               //@synthesize listValues=_listValues - In the implementation block
+(Class)fieldValuesType;
+(Class)listValuesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)doubleValue;
-(long long)longValue;
-(void)setType:(int)arg1 ;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(int)type;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasBoolValue:(BOOL)arg1 ;
-(BOOL)hasBoolValue;
-(void)setBytesValue:(NSData *)arg1 ;
-(NSData *)bytesValue;
-(NSMutableArray *)listValues;
-(unsigned long long)listValuesCount;
-(void)clearListValues;
-(BOOL)hasBytesValue;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(void)addFieldValues:(id)arg1 ;
-(void)addListValues:(id)arg1 ;
-(unsigned long long)fieldValuesCount;
-(void)clearFieldValues;
-(id)fieldValuesAtIndex:(unsigned long long)arg1 ;
-(id)listValuesAtIndex:(unsigned long long)arg1 ;
-(void)setLongValue:(long long)arg1 ;
-(void)setHasLongValue:(BOOL)arg1 ;
-(BOOL)hasLongValue;
-(NSMutableArray *)fieldValues;
-(void)setFieldValues:(NSMutableArray *)arg1 ;
@end

