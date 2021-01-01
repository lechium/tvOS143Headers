/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKDataAccessor.h>

@class PKDirectoryCoordinator, PKRemoteAssetManager, NSArray, NSURL;

@interface PKFileDataAccessor : PKDataAccessor {

	PKDirectoryCoordinator* _coordinator;
	BOOL _remoteAssetManagerAccessed;
	PKRemoteAssetManager* _remoteAssetManager;
	NSArray* _seids;
	BOOL _ownsFileURL;
	NSURL* _fileURL;

}

@property (assign,nonatomic) BOOL ownsFileURL;               //@synthesize ownsFileURL=_ownsFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
-(id)init;
-(void)dealloc;
-(id)dictionary;
-(NSURL *)fileURL;
-(id)content;
-(id)bundle;
-(id)archiveData;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 coordinator:(id)arg3 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(BOOL)remoteAssetsDownloadedForScreenScale:(double)arg1 seids:(id)arg2 suffix:(id)arg3 ;
-(id)remoteAssetManagerForSEIDs:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(id)manifestHash;
-(id)serializedFileWrapper;
-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg1 ;
-(id)remoteAssetManager;
-(id)displayProfileOfType:(long long)arg1 ;
-(BOOL)ownsFileURL;
-(void)setOwnsFileURL:(BOOL)arg1 ;
@end

