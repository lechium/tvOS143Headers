/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXAssetControllerObserver.h>

@class AXAssetController, NSURL, NSString;

@interface AXMImageCaptionModelAssetManager : NSObject <AXAssetControllerObserver> {

	os_unfair_lock_s _lock;
	BOOL _didTryWaitingForAssetLookup;
	AXAssetController* _assetController;
	NSURL* _modelURL;

}

@property (nonatomic,copy) NSURL * modelURL;                        //@synthesize modelURL=_modelURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(void)_performWithLock:(/*^block*/id)arg1 ;
-(void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(BOOL)arg3 error:(id)arg4 ;
-(id)modelURLWithTimeout:(double)arg1 ;
-(id)infoForModelAtURL:(id)arg1 ;
@end

