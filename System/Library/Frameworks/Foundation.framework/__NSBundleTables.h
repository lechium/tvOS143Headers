/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLock, NSHashTable, NSMapTable, NSPointerArray;

@interface __NSBundleTables : NSObject {

	NSLock* _lock;
	NSHashTable* _staticFrameworks;
	NSHashTable* _loadedBundles;
	NSHashTable* _loadedFrameworks;
	NSMapTable* _resolvedPathToBundles;
	NSMapTable* _bundleForClassMap;
	NSPointerArray* _immortalBundles;

}
-(id)init;
-(void)dealloc;
@end

