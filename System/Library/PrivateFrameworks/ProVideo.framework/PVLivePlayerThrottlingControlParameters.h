/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface PVLivePlayerThrottlingControlParameters : NSObject <NSCopying> {

	NSNumber* _renderLinkRate;
	NSNumber* _playerQueueSize;
	NSNumber* _playerBypassRenderLink;

}

@property (nonatomic,retain) NSNumber * renderLinkRate;                      //@synthesize renderLinkRate=_renderLinkRate - In the implementation block
@property (nonatomic,retain) NSNumber * playerQueueSize;                     //@synthesize playerQueueSize=_playerQueueSize - In the implementation block
@property (nonatomic,retain) NSNumber * playerBypassRenderLink;              //@synthesize playerBypassRenderLink=_playerBypassRenderLink - In the implementation block
+(id)CreateControllerParameters:(id)arg1 :(id)arg2 :(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSNumber *)renderLinkRate;
-(NSNumber *)playerQueueSize;
-(NSNumber *)playerBypassRenderLink;
-(void)setRenderLinkRate:(NSNumber *)arg1 ;
-(void)setPlayerQueueSize:(NSNumber *)arg1 ;
-(void)setPlayerBypassRenderLink:(NSNumber *)arg1 ;
-(BOOL)hasNilParameter;
-(void)updateNilsFrom:(id)arg1 ;
@end

