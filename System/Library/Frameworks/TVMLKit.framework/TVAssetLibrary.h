/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray;

@interface TVAssetLibrary : NSObject {

	NSObject*<OS_dispatch_queue> assetWriteQueue;
	NSObject*<OS_dispatch_queue> assetAccessQueue;
	NSString* _cachePath;
	NSMutableArray* _registeredGroups;

}

@property (nonatomic,copy) NSString * cachePath;                             //@synthesize cachePath=_cachePath - In the implementation block
@property (nonatomic,retain) NSMutableArray * registeredGroups;              //@synthesize registeredGroups=_registeredGroups - In the implementation block
+(id)sharedInstance;
+(void)initializeAssetLibraryWithCachePath:(id)arg1 purgeCacheOnLoad:(BOOL)arg2 ;
+(void)_initializeAssetLibraryWithCachePath:(id)arg1 screensaverCache:(BOOL)arg2 purgeCacheOnLoad:(BOOL)arg3 ;
+(void)initializeAssetLibraryWithCachePath:(id)arg1 ;
+(void)intializeScreensaverSharedAssetLibrary;
-(NSString *)cachePath;
-(void)setCachePath:(NSString *)arg1 ;
-(id)assetExpiryDateForKey:(id)arg1 inGroupOfType:(long long)arg2 ;
-(void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 ;
-(id)assetPathForKey:(id)arg1 inGroupOfType:(long long)arg2 ;
-(id)assetForKey:(id)arg1 inGroupOfType:(long long)arg2 ;
-(void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 tags:(id)arg5 ;
-(id)keyForAssetWithTags:(id)arg1 inGroupOfType:(long long)arg2 ;
-(id)initWithCachePath:(id)arg1 screensaverCache:(BOOL)arg2 purgeCacheOnLoad:(BOOL)arg3 ;
-(void)registerGroup:(id)arg1 ;
-(id)groupWithGroupType:(long long)arg1 ;
-(void)removeAssetForKey:(id)arg1 inGroupOfType:(long long)arg2 ;
-(void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(BOOL)arg5 ;
-(void)_setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 overWrite:(BOOL)arg5 tags:(id)arg6 ;
-(void)setImageAssetFromPath:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 tags:(id)arg5 ;
-(void)setImageAsset:(id)arg1 forKey:(id)arg2 inGroupOfType:(long long)arg3 expiryDate:(id)arg4 ;
-(void)purgeAssetsInGroupOfType:(long long)arg1 ;
-(void)updateAssetsInGroupOfType:(long long)arg1 ;
-(id)assetPathsForGroupOfType:(long long)arg1 ;
-(id)cachePathForGroupOfType:(long long)arg1 ;
-(void)unRegisterGroup:(long long)arg1 ;
-(NSMutableArray *)registeredGroups;
-(void)setRegisteredGroups:(NSMutableArray *)arg1 ;
@end

