/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLServerFeedbackMessage : PBCodable <NSCopying> {

	NSMutableArray* _keysAndValues;

}

@property (nonatomic,retain) NSMutableArray * keysAndValues;              //@synthesize keysAndValues=_keysAndValues - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)clearKeysAndValues;
-(void)addKeysAndValues:(id)arg1 ;
-(unsigned long long)keysAndValuesCount;
-(id)keysAndValuesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)keysAndValues;
-(void)setKeysAndValues:(NSMutableArray *)arg1 ;
@end
