/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, _DKPRValueType;

@interface _DKPRValue : PBCodable <NSCopying> {

	double _dateValue;
	double _doubleValue;
	long long _integerValue;
	NSData* _blobValue;
	NSString* _stringValue;
	_DKPRValueType* _type;
	SCD_Struct_DK4 _has;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
