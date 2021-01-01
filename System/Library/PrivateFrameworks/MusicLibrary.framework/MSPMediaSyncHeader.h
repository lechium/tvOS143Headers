/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MSPMediaSyncHeader : PBCodable <NSCopying> {

	int _syncType;
	int _totalPackages;
	SCD_Struct_MI1 _has;

}

@property (assign,nonatomic) BOOL hasTotalPackages; 
@property (assign,nonatomic) int totalPackages;                  //@synthesize totalPackages=_totalPackages - In the implementation block
@property (assign,nonatomic) BOOL hasSyncType; 
@property (assign,nonatomic) int syncType;                       //@synthesize syncType=_syncType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSyncType:(int)arg1 ;
-(BOOL)hasSyncType;
-(int)syncType;
-(void)setHasSyncType:(BOOL)arg1 ;
-(int)totalPackages;
-(void)setTotalPackages:(int)arg1 ;
-(void)setHasTotalPackages:(BOOL)arg1 ;
-(BOOL)hasTotalPackages;
-(id)syncTypeAsString:(int)arg1 ;
-(int)StringAsSyncType:(id)arg1 ;
@end
