/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPStreamingAssetRetrieveAssetResponse : PBCodable <NSCopying> {

	long long _downloadURLExpirationTimeSeconds;
	long long _size;
	NSString* _downloadURL;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) long long size;                                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasDownloadURL; 
@property (nonatomic,retain) NSString * downloadURL;                                  //@synthesize downloadURL=_downloadURL - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadURLExpirationTimeSeconds; 
@property (assign,nonatomic) long long downloadURLExpirationTimeSeconds;              //@synthesize downloadURLExpirationTimeSeconds=_downloadURLExpirationTimeSeconds - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)size;
-(id)dictionaryRepresentation;
-(void)setSize:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(NSString *)downloadURL;
-(void)setDownloadURL:(NSString *)arg1 ;
-(BOOL)hasDownloadURL;
-(void)setDownloadURLExpirationTimeSeconds:(long long)arg1 ;
-(void)setHasDownloadURLExpirationTimeSeconds:(BOOL)arg1 ;
-(BOOL)hasDownloadURLExpirationTimeSeconds;
-(long long)downloadURLExpirationTimeSeconds;
@end
