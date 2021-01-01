/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLFaceAnalysis : PBCodable <NSCopying> {

	NSMutableArray* _faceInstances;
	BOOL _completed;
	SCD_Struct_CP3 _has;

}

@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSMutableArray * faceInstances;              //@synthesize faceInstances=_faceInstances - In the implementation block
+(Class)faceInstancesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)completed;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)clearFaceInstances;
-(void)addFaceInstances:(id)arg1 ;
-(unsigned long long)faceInstancesCount;
-(id)faceInstancesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)faceInstances;
-(void)setFaceInstances:(NSMutableArray *)arg1 ;
@end

