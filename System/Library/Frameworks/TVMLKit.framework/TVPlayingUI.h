/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIViewController;


@protocol TVPlayingUI <NSObject>
@property (assign,nonatomic) long long resumeMenuBehavior; 
@property (nonatomic,retain) UIViewController * overlayViewController; 
@property (assign,nonatomic) BOOL showsVideoControls; 
@required
-(UIViewController *)overlayViewController;
-(long long)resumeMenuBehavior;
-(void)setResumeMenuBehavior:(long long)arg1;
-(void)setOverlayViewController:(id)arg1;
-(BOOL)showsVideoControls;
-(void)setShowsVideoControls:(BOOL)arg1;

@end

