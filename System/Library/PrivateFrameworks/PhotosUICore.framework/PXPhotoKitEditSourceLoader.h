/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXEditSourceLoader.h>

@protocol OS_dispatch_queue;
@class NSDate, NSProgress, NSObject, PLEditSource, NSError, NSNumber, NSString, PHAsset;

@interface PXPhotoKitEditSourceLoader : NSObject <PXEditSourceLoader> {

	unsigned long long _loadingQueue_imageRequestID;
	NSDate* _mainQueue_loadingStartDate;
	NSProgress* _editSourceCreationProgress;
	NSObject*<OS_dispatch_queue> _loadingQueue;
	BOOL _overcaptureSourceIsActive;
	PLEditSource* _editSource;
	PLEditSource* _overcaptureEditSource;
	NSProgress* _progress;
	NSError* _error;
	long long _baseVersion;
	NSNumber* _loadDuration;
	NSString* _livePhotoPairingIdentifier;
	PHAsset* _asset;

}

@property (nonatomic,readonly) PHAsset * asset;                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) PLEditSource * editSource;                               //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,readonly) PLEditSource * overcaptureEditSource;                    //@synthesize overcaptureEditSource=_overcaptureEditSource - In the implementation block
@property (nonatomic,readonly) PLEditSource * activeEditSource; 
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier;              //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
@property (nonatomic,readonly) long long baseVersion;                                   //@synthesize baseVersion=_baseVersion - In the implementation block
@property (nonatomic,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) NSNumber * loadDuration;                                 //@synthesize loadDuration=_loadDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(NSProgress *)progress;
-(long long)baseVersion;
-(PHAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
-(NSString *)contentIdentifier;
-(NSString *)livePhotoPairingIdentifier;
-(PLEditSource *)editSource;
-(PLEditSource *)overcaptureEditSource;
-(void)beginLoading;
-(PLEditSource *)activeEditSource;
-(NSNumber *)loadDuration;
-(void)_handleCancellation;
-(void)_resetProgress;
-(void)_cancelContentInputRequest;
-(void)_handleContentEditingInputRequestCompletion:(id)arg1 info:(id)arg2 asset:(id)arg3 ;
@end

