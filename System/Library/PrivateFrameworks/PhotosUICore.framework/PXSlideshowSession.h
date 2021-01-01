/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/OKPresentationViewControllerDelegate.h>

@protocol PXSlideshowSessionDelegate;
@class OKPresentationViewController, PHAssetCollection, UIView, NSString;

@interface PXSlideshowSession : NSObject <OKPresentationViewControllerDelegate> {

	OKPresentationViewController* _presentationViewController;
	id<PXSlideshowSessionDelegate> _delegate;
	PHAssetCollection* _assetCollection;
	long long _startIndex;

}

@property (assign,nonatomic,__weak) id<PXSlideshowSessionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                                 //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) long long startIndex;                                                //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,readonly) OKPresentationViewController * slideshowViewController; 
@property (nonatomic,readonly) UIView * slideshowView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void*)_loadSlideshowFrameworkIfNeeded;
+(void)preloadSlideshowFrameworkIfNeeded;
-(id)init;
-(void)dealloc;
-(id<PXSlideshowSessionDelegate>)delegate;
-(void)setDelegate:(id<PXSlideshowSessionDelegate>)arg1 ;
-(long long)startIndex;
-(PHAssetCollection *)assetCollection;
-(OKPresentationViewController *)slideshowViewController;
-(void)presentationViewControllerDidPrepare:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 startIndex:(long long)arg2 ;
-(UIView *)slideshowView;
-(id)_presentationGuidelines;
-(void)_initPresentationViewController;
@end

