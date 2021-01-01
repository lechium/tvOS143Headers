/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMutableDictionary, NSMapTable;

@interface ICKeyedSharedInstanceManager : NSObject {

	os_unfair_lock_s _lock;
	/*^block*/id _instantiationHandler;
	NSMutableDictionary* _stronglyHeldSharedInstances;
	NSMapTable* _weaklyHeldSharedInstances;
	NSMutableDictionary* _usageCounts;

}
-(id)initWithInstantiationHandler:(/*^block*/id)arg1 ;
-(id)sharedInstanceForKey:(id)arg1 ;
-(void)incrementUsageCountForKey:(id)arg1 ;
-(void)decrementUsageCountForKey:(id)arg1 ;
@end
