/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKDPackageDirectoryPurger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _rootDirectories;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rootDirectories;                //@synthesize rootDirectories=_rootDirectories - In the implementation block
+(id)sharedPurger;
+(void)schedulePeriodicPurgesInDirectory:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)purgeAll;
-(NSMutableArray *)rootDirectories;
-(void)purgeRootDirectory:(id)arg1 ;
-(void)purgeDirectory:(id)arg1 ;
-(void)registerXPCActivity;
-(void)addRootDirectory:(id)arg1 ;
@end

