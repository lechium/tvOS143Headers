/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_PASAssetProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSDictionary, NSObject, _PASNotificationTracker, _PASLock;

@interface _PASAsset : NSObject <_PASAssetProtocol> {

	NSString* _bundleIdentifier;
	NSDictionary* _requiredMobileAssetProperties;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _installNotificationToken;
	int _metadataNotificationToken;
	_PASNotificationTracker* _updateNotificationTracker;
	_PASLock* _lock;
	unsigned long long _compatibilityVersion;

}

@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) unsigned long long compatibilityVersion;                  //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long bestAssetVersionObserved; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)bundlePath;
-(void)setBundlePath:(id)arg1 ;
-(unsigned long long)compatibilityVersion;
-(unsigned long long)assetVersion;
-(NSString *)assetType;
-(id)_assetDescription;
-(id)registerUpdateHandler:(/*^block*/id)arg1 ;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1 ;
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2 ;
-(unsigned long long)bestAssetVersionObserved;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 enableAssetUpdates:(BOOL)arg5 ;
-(id)_initWithBundleIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 enableAssetUpdates:(BOOL)arg6 ;
-(void)_loadDefaultBundleVersionWithGuardedData:(id)arg1 ;
-(BOOL)deregisterUpdateHandlerWithToken:(id)arg1 ;
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2 assetVersion:(unsigned long long*)arg3 ;
-(id)pathForResourceWithNameAndExtension:(id)arg1 assetVersion:(unsigned long long*)arg2 ;
-(id)pathForResourceWithNameAndExtension:(id)arg1 ;
-(id)pathsForResourcesWithNames:(id)arg1 assetVersion:(unsigned long long*)arg2 ;
-(id)pathsForResourcesWithNames:(id)arg1 ;
-(void)_updateAssetMetadata;
-(BOOL)_updateAssetMetadataUsingQueryResults:(id)arg1 ;
-(void)_issueUpdateNotificationsWithCallback:(/*^block*/id)arg1 ;
-(void)invokeWithBundleOverride:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addOverridePath:(id)arg1 forResource:(id)arg2 ofType:(id)arg3 ;
-(void)clearOverrides;
-(void)callAssetUpdateHandlers;
@end

