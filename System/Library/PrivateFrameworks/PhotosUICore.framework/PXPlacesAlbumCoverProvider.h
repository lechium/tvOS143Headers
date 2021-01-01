/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;
@class UIImage, NSString, NSObject, PXPlacesSnapshotFactory, PHAssetCollection, NSMutableDictionary;

@interface PXPlacesAlbumCoverProvider : NSObject {

	UIImage* _cachedSnapshotImage;
	NSString* _cachedSnapshotImageIdentifier;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSObject*<OS_dispatch_queue> _requestsQueue;
	long long _cachedCount;
	PXPlacesSnapshotFactory* _factory;
	id<PXPlacesSnapshotFactoryDelegate> _factoryDelegate;
	PHAssetCollection* _placesCollection;
	NSMutableDictionary* _cachedPlaceholders;

}

@property (nonatomic,retain) PXPlacesSnapshotFactory * factory;                                //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) id<PXPlacesSnapshotFactoryDelegate> factoryDelegate;              //@synthesize factoryDelegate=_factoryDelegate - In the implementation block
@property (nonatomic,retain) PHAssetCollection * placesCollection;                             //@synthesize placesCollection=_placesCollection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPlaceholders;                         //@synthesize cachedPlaceholders=_cachedPlaceholders - In the implementation block
@property (assign,nonatomic) long long cachedCount;                                            //@synthesize cachedCount=_cachedCount - In the implementation block
+(id)_cachedSnapshotPathDark;
+(id)_cachedSnapshotPathLight;
+(id)_cachedSnapshotPathForFilename:(id)arg1 ;
-(PXPlacesSnapshotFactory *)factory;
-(long long)cachedCount;
-(void)setCachedCount:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 andPlacesCollection:(id)arg2 ;
-(void)preloadCachedSnapshotForUserInterfaceStyle:(long long)arg1 ;
-(void)preloadPlaceholderForTraitCollection:(id)arg1 ;
-(void)requestPlacesAlbumCover:(id)arg1 snapshotTraitCollection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAssetCountWithForcedRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_placeHolderImageForExtendedTraitCollection:(id)arg1 ;
-(BOOL)_fetchCachedSnapshotImage:(out id*)arg1 andIdentifier:(out id*)arg2 forUserInterfaceStyle:(long long)arg3 ;
-(BOOL)_imageExistsWithLocalIdentifier:(id)arg1 ;
-(id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)placesAlbumCoverProviderLog;
-(void)setFactory:(PXPlacesSnapshotFactory *)arg1 ;
-(id<PXPlacesSnapshotFactoryDelegate>)factoryDelegate;
-(void)setFactoryDelegate:(id<PXPlacesSnapshotFactoryDelegate>)arg1 ;
-(PHAssetCollection *)placesCollection;
-(void)setPlacesCollection:(PHAssetCollection *)arg1 ;
-(NSMutableDictionary *)cachedPlaceholders;
-(void)setCachedPlaceholders:(NSMutableDictionary *)arg1 ;
@end

