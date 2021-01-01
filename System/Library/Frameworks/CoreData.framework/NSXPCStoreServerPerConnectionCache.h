/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class NSPersistentStoreCoordinator, NSSQLitePrefetchRequestCache, NSMutableDictionary, NSObject;

@interface NSXPCStoreServerPerConnectionCache : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSSQLitePrefetchRequestCache* _prefetchRequestCache;
	NSMutableDictionary* _generationTokenMap;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(void)dealloc;
-(id)initWithCoordinator:(id)arg1 ;
-(NSPersistentStoreCoordinator *)coordinator;
-(void)registerQueryGeneration:(id)arg1 forRemoteGeneration:(id)arg2 ;
-(id)localGenerationForRemoteGeneration:(id)arg1 ;
-(void)releaseQueryGenerationForRemoteGeneration:(id)arg1 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
@end

