/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFAppSessionCompletedEvent : WFEvent {

	unsigned _duration;
	NSString* _key;
	NSString* _source;

}

@property (nonatomic,copy) NSString * key;                   //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * source;                //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned duration;              //@synthesize duration=_duration - In the implementation block
+(Class)codableEventClass;
+(id)serializablePropertyTransformers;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
@end
