/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface ASDBagKeySetAggregator : NSObject {

	NSMutableDictionary* _bagKeySets;

}
-(id)init;
-(void)addBagKeySet:(id)arg1 forConsumer:(Class)arg2 ;
-(id)generateAggregatedBagKeySet;
-(BOOL)hasBagKeySetForConsumer:(Class)arg1 ;
@end

