/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSQLCore, NSMutableArray;

@interface NSSQLCoreDispatchManager : NSObject {

	NSSQLCore* _sqlCore;
	NSMutableArray* _connectionManagers;

}
-(void)dealloc;
-(void)disconnectAllConnections;
-(id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(void)enumerateAvailableConnectionsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)routeStoreRequest:(id)arg1 ;
@end

