/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProxy.h>

@class Protocol, NSHashTable;

@interface MPProtocolProxy : NSProxy {

	Protocol* _protocol;
	NSHashTable* _objects;

}

@property (nonatomic,retain) Protocol * protocol;                //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSHashTable * objects;              //@synthesize objects=_objects - In the implementation block
+(id)proxyForObject:(id)arg1 protocol:(id)arg2 ;
+(id)proxyForObjects:(id)arg1 protocol:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(Protocol *)protocol;
-(void)setProtocol:(Protocol *)arg1 ;
-(NSHashTable *)objects;
-(void)setObjects:(NSHashTable *)arg1 ;
@end
