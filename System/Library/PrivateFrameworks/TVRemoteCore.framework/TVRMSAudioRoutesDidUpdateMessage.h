/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface TVRMSAudioRoutesDidUpdateMessage : PBCodable <NSCopying> {

	NSMutableArray* _audioRoutes;
	int _sessionIdentifier;
	SCD_Struct_TV4 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioRoutes;              //@synthesize audioRoutes=_audioRoutes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(BOOL)hasSessionIdentifier;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)addAudioRoutes:(id)arg1 ;
-(unsigned long long)audioRoutesCount;
-(void)clearAudioRoutes;
-(id)audioRoutesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)audioRoutes;
-(void)setAudioRoutes:(NSMutableArray *)arg1 ;
@end

