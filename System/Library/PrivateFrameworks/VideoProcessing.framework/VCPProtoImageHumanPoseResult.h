/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoBounds;

@interface VCPProtoImageHumanPoseResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	VCPProtoBounds* _bounds;
	float _confidence;
	int _flags;

}

@property (assign,nonatomic) float confidence;                     //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) VCPProtoBounds * bounds;              //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) int flags;                            //@synthesize flags=_flags - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)flags;
-(id)dictionaryRepresentation;
-(float)confidence;
-(void)setFlags:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(VCPProtoBounds *)bounds;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(void)setBounds:(VCPProtoBounds *)arg1 ;
-(id)exportToLegacyDictionary;
@end

