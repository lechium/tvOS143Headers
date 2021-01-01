/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface OSALogCounterObject : NSObject {

	unsigned long long _count;
	NSMutableDictionary* _signatures;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (readonly) NSMutableDictionary * signatures;              //@synthesize signatures=_signatures - In the implementation block
+(id)counter;
+(id)masterCounts;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(NSMutableDictionary *)signatures;
@end

