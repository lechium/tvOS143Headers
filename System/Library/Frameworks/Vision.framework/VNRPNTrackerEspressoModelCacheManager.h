/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSLock, NSString;

@interface VNRPNTrackerEspressoModelCacheManager : NSObject {

	NSMutableDictionary* _rpnEspressoResourcesKeyToEspressoResourcesCache;
	NSLock* _rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
	NSString* _espressoModelName;

}

@property (readonly) NSString * espressoModelName;              //@synthesize espressoModelName=_espressoModelName - In the implementation block
+(id)cacheKeyFromOptions:(id)arg1 error:(id*)arg2 ;
+(id)cacheOptionsKeys;
-(void)dealloc;
-(id)initWithRPNEspressoModelName:(id)arg1 ;
-(id)espressoResourcesFromOptions:(id)arg1 error:(id*)arg2 ;
-(NSString *)espressoModelName;
@end
