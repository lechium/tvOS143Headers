/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ADTransparencyDetails : PBCodable <NSCopying> {

	NSString* _transparencyDetailsUnavailableMessage;
	NSString* _transparencyRendererPayload;
	NSString* _transparencyRendererURL;

}

@property (nonatomic,readonly) BOOL hasTransparencyDetailsUnavailableMessage; 
@property (nonatomic,retain) NSString * transparencyDetailsUnavailableMessage;              //@synthesize transparencyDetailsUnavailableMessage=_transparencyDetailsUnavailableMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasTransparencyRendererPayload; 
@property (nonatomic,retain) NSString * transparencyRendererPayload;                        //@synthesize transparencyRendererPayload=_transparencyRendererPayload - In the implementation block
@property (nonatomic,readonly) BOOL hasTransparencyRendererURL; 
@property (nonatomic,retain) NSString * transparencyRendererURL;                            //@synthesize transparencyRendererURL=_transparencyRendererURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTransparencyDetailsUnavailableMessage:(NSString *)arg1 ;
-(void)setTransparencyRendererPayload:(NSString *)arg1 ;
-(void)setTransparencyRendererURL:(NSString *)arg1 ;
-(BOOL)hasTransparencyDetailsUnavailableMessage;
-(BOOL)hasTransparencyRendererPayload;
-(BOOL)hasTransparencyRendererURL;
-(NSString *)transparencyDetailsUnavailableMessage;
-(NSString *)transparencyRendererPayload;
-(NSString *)transparencyRendererURL;
@end

