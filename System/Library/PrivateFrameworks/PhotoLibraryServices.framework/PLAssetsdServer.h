/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, PLXPCMessageLogger, NSMutableSet, PLPhotoLibraryBundleController, PLBackgroundJobService, PLDistributedNotificationHandler, PLTCCObserver, NSXPCInterface, NSString;

@interface PLAssetsdServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	PLXPCMessageLogger* _connectionLogger;
	os_unfair_lock_s _servicesLock;
	NSMutableSet* _services;
	PLPhotoLibraryBundleController* _libraryBundleController;
	PLBackgroundJobService* _backgroundJobService;
	PLDistributedNotificationHandler* _distributedNotificationHandler;
	PLTCCObserver* _tccObserver;
	NSXPCInterface* _assetsdInterface;
	SCD_Struct_PL42 _resourceCacheMetrics;

}

@property (assign,nonatomic) SCD_Struct_PL42 resourceCacheMetrics;              //@synthesize resourceCacheMetrics=_resourceCacheMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)addService:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(void)handleInterruption:(id)arg1 ;
-(void)setResourceCacheMetrics:(SCD_Struct_PL42)arg1 ;
-(SCD_Struct_PL42)resourceCacheMetrics;
-(void)logStatus;
-(void)_checkInWithLaunchd;
-(void)_collectCacheMetricsDataFromService:(id)arg1 ;
-(void)handleInvalidation:(id)arg1 ;
@end
