/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue;

@interface CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoEntry : PBCodable <NSCopying> {

	NSString* _key;
	CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue* _value;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue * value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue *)value;
-(void)setValue:(CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue *)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValue;
-(BOOL)hasKey;
@end

