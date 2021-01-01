/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MPCProtoRadioContentReferenceLibraryAlbumContentReference : PBCodable <NSCopying> {

	long long _representativeItemCloudID;
	long long _storeAdamID;
	NSString* _albumName;
	SCD_Struct_MP24 _has;

}

@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) NSString * albumName;                             //@synthesize albumName=_albumName - In the implementation block
@property (assign,nonatomic) BOOL hasRepresentativeItemCloudID; 
@property (assign,nonatomic) long long representativeItemCloudID;              //@synthesize representativeItemCloudID=_representativeItemCloudID - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;                            //@synthesize storeAdamID=_storeAdamID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(BOOL)hasAlbumName;
-(void)setStoreAdamID:(long long)arg1 ;
-(long long)storeAdamID;
-(void)setHasStoreAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreAdamID;
-(void)setRepresentativeItemCloudID:(long long)arg1 ;
-(void)setHasRepresentativeItemCloudID:(BOOL)arg1 ;
-(BOOL)hasRepresentativeItemCloudID;
-(long long)representativeItemCloudID;
@end

