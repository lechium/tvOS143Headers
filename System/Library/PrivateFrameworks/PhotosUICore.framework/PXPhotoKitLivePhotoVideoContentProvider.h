/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXPhotoKitVideoContentProvider.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class NSString, PXPhotoKitLivePhotoVideoContentProviderSpec;

@interface PXPhotoKitLivePhotoVideoContentProvider : PXPhotoKitVideoContentProvider <PXSettingsKeyObserver> {

	NSString* _contentIdentifier;
	PXPhotoKitLivePhotoVideoContentProviderSpec* _spec;

}

@property (nonatomic,readonly) PXPhotoKitLivePhotoVideoContentProviderSpec * spec;              //@synthesize spec=_spec - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)postProcessingOperationQueue;
-(void)dealloc;
-(void)cancelLoading;
-(id)contentIdentifier;
-(PXPhotoKitLivePhotoVideoContentProviderSpec *)spec;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(BOOL)needsPostprocessing;
-(void)postprocessPlayerItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 spec:(id)arg3 ;
-(void)_handleStabilizeOperationFinishedWithProcessingCompletionHandler:(/*^block*/id)arg1 ;
@end

