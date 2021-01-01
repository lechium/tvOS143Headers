/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXVideoPlayerViewDelegate;
@class PXVideoView, NSArray, UIImageView, ISWrappedAVPlayer, UIImage;

@interface PXVideoPlayerView : UIView {

	PXVideoView* _videoView;
	NSArray* _videoViewConstraints;
	UIImageView* _previewImageView;
	NSArray* _previewImageViewConstraints;
	long long _placeholderVisibilityRequestID;
	/*^block*/id _visibilityChangeCompletionHandler;
	BOOL _displayingPlaceholder;
	BOOL _allowsEdgeAntialiasing;
	id<PXVideoPlayerViewDelegate> _delegate;
	ISWrappedAVPlayer* _player;
	UIImage* _placeholderImage;
	NSArray* _placeholderImageFilters;
	double _videoAppearanceCrossfadeDuration;
	long long _placeholderDisplayMode;
	long long _videoViewContentMode;
	CGRect _placeholderImageContentsRect;

}

@property (assign,nonatomic,__weak) id<PXVideoPlayerViewDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ISWrappedAVPlayer * player;                                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                               //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,copy) NSArray * placeholderImageFilters;                                          //@synthesize placeholderImageFilters=_placeholderImageFilters - In the implementation block
@property (assign,nonatomic) double videoAppearanceCrossfadeDuration;                                  //@synthesize videoAppearanceCrossfadeDuration=_videoAppearanceCrossfadeDuration - In the implementation block
@property (assign,nonatomic) CGRect placeholderImageContentsRect;                                      //@synthesize placeholderImageContentsRect=_placeholderImageContentsRect - In the implementation block
@property (assign,nonatomic) long long placeholderDisplayMode;                                         //@synthesize placeholderDisplayMode=_placeholderDisplayMode - In the implementation block
@property (getter=isDisplayingPlaceHolder,nonatomic,readonly) BOOL displayingPlaceholder;              //@synthesize displayingPlaceholder=_displayingPlaceholder - In the implementation block
@property (assign,nonatomic) long long videoViewContentMode;                                           //@synthesize videoViewContentMode=_videoViewContentMode - In the implementation block
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing;                                              //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
-(void)dealloc;
-(id<PXVideoPlayerViewDelegate>)delegate;
-(void)setDelegate:(id<PXVideoPlayerViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(ISWrappedAVPlayer *)player;
-(void)setPlayer:(ISWrappedAVPlayer *)arg1 ;
-(BOOL)allowsEdgeAntialiasing;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholderImageFilters:(NSArray *)arg1 ;
-(void)setPlaceholderDisplayMode:(long long)arg1 ;
-(void)setPlaceholderDisplayMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateVideoView;
-(void)setPlaceholderImageContentsRect:(CGRect)arg1 ;
-(void)setVideoViewContentMode:(long long)arg1 ;
-(void)_updateContentMode;
-(void)_updateEdgeAntialiasing;
-(void)_updateSubviewsVisibility;
-(void)_setDisplayingPlaceholder:(BOOL)arg1 requestID:(long long)arg2 ;
-(void)_runVisibilityChangeCompletionHandler;
-(id)generateSnapshotImage;
-(NSArray *)placeholderImageFilters;
-(double)videoAppearanceCrossfadeDuration;
-(void)setVideoAppearanceCrossfadeDuration:(double)arg1 ;
-(CGRect)placeholderImageContentsRect;
-(long long)placeholderDisplayMode;
-(BOOL)isDisplayingPlaceHolder;
-(long long)videoViewContentMode;
@end

