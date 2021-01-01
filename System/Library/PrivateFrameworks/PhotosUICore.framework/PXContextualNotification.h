/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXContextualNotificationDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString, UIImage, AVAsset, AVVideoComposition, PXImageRequester, UIWindow, PXContextualNotificationCenter, PXContextualNotificationView, NSValue, UIView;

@interface PXContextualNotification : NSObject {

	SCD_Struct_PX44 _delegateRespondsTo;
	id<PXContextualNotificationDelegate> _delegate;
	long long _style;
	NSString* _title;
	UIImage* _titleIcon;
	NSString* _message;
	UIImage* _image;
	AVAsset* _loopingVideoAsset;
	AVVideoComposition* _loopingVideoComposition;
	PXImageRequester* _imageRequester;
	id _userInfo;
	long long _appearanceState;
	UIWindow* _window;
	PXContextualNotificationCenter* _contextualNotificationCenter;
	PXContextualNotificationView* _view;
	long long _animationCount;
	NSValue* _releaseVelocity;
	double _panInitialVerticalOffset;
	PXContextualNotificationVisualState _nextState;
	PXContextualNotificationVisualState _appliedState;

}

@property (assign,nonatomic) long long appearanceState;                                                         //@synthesize appearanceState=_appearanceState - In the implementation block
@property (assign,nonatomic,__weak) PXContextualNotificationCenter * contextualNotificationCenter;              //@synthesize contextualNotificationCenter=_contextualNotificationCenter - In the implementation block
@property (nonatomic,retain) PXContextualNotificationView * view;                                               //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) PXContextualNotificationVisualState nextState;                                     //@synthesize nextState=_nextState - In the implementation block
@property (assign,nonatomic) PXContextualNotificationVisualState appliedState;                                  //@synthesize appliedState=_appliedState - In the implementation block
@property (assign,nonatomic) long long animationCount;                                                          //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,retain) NSValue * releaseVelocity;                                                         //@synthesize releaseVelocity=_releaseVelocity - In the implementation block
@property (assign,nonatomic) double panInitialVerticalOffset;                                                   //@synthesize panInitialVerticalOffset=_panInitialVerticalOffset - In the implementation block
@property (nonatomic,readonly) UIView * preferredContainerView; 
@property (nonatomic,readonly) long long preferredAnimation; 
@property (assign,nonatomic,__weak) id<PXContextualNotificationDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long style;                                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * titleIcon;                                                               //@synthesize titleIcon=_titleIcon - In the implementation block
@property (nonatomic,copy) NSString * message;                                                                  //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                                   //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) AVAsset * loopingVideoAsset;                                                         //@synthesize loopingVideoAsset=_loopingVideoAsset - In the implementation block
@property (nonatomic,copy) AVVideoComposition * loopingVideoComposition;                                        //@synthesize loopingVideoComposition=_loopingVideoComposition - In the implementation block
@property (nonatomic,retain) PXImageRequester * imageRequester;                                                 //@synthesize imageRequester=_imageRequester - In the implementation block
@property (nonatomic,retain) id userInfo;                                                                       //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * window;                                                          //@synthesize window=_window - In the implementation block
-(id)init;
-(id)userInfo;
-(id<PXContextualNotificationDelegate>)delegate;
-(void)setDelegate:(id<PXContextualNotificationDelegate>)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)_invalidate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)present;
-(NSString *)message;
-(void)dismiss;
-(void)setMessage:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIWindow *)window;
-(PXContextualNotificationView *)view;
-(void)setView:(PXContextualNotificationView *)arg1 ;
-(void)invalidateLayout;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)handleTap:(id)arg1 ;
-(PXContextualNotificationVisualState)nextState;
-(void)setNextState:(PXContextualNotificationVisualState)arg1 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)setTitleIcon:(UIImage *)arg1 ;
-(void)setLoopingVideoAsset:(AVAsset *)arg1 ;
-(void)setLoopingVideoComposition:(AVVideoComposition *)arg1 ;
-(void)setAppearanceState:(long long)arg1 ;
-(CGRect)containingFrameInContainerView:(id)arg1 ;
-(UIView *)preferredContainerView;
-(long long)preferredAnimation;
-(BOOL)shouldPassthroughPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(void)handleDiscard;
-(UIImage *)titleIcon;
-(AVAsset *)loopingVideoAsset;
-(AVVideoComposition *)loopingVideoComposition;
-(long long)appearanceState;
-(PXContextualNotificationCenter *)contextualNotificationCenter;
-(void)setContextualNotificationCenter:(PXContextualNotificationCenter *)arg1 ;
-(PXContextualNotificationVisualState)appliedState;
-(void)setAppliedState:(PXContextualNotificationVisualState)arg1 ;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
-(NSValue *)releaseVelocity;
-(void)setReleaseVelocity:(NSValue *)arg1 ;
-(double)panInitialVerticalOffset;
-(void)setPanInitialVerticalOffset:(double)arg1 ;
@end

