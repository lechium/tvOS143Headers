/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class AVTransportBarViewController, _TVPlayerResumeMenuView, TVPlayer;

@interface _TVPlayerResumeMenuViewController : UIViewController {

	AVTransportBarViewController* _transportBarViewController;
	_TVPlayerResumeMenuView* _resumeMenuView;
	TVPlayer* _player;
	/*^block*/id _didSelectOptionBlock;

}

@property (nonatomic,readonly) _TVPlayerResumeMenuView * resumeMenuView;                               //@synthesize resumeMenuView=_resumeMenuView - In the implementation block
@property (nonatomic,readonly) AVTransportBarViewController * transportBarViewController;              //@synthesize transportBarViewController=_transportBarViewController - In the implementation block
@property (nonatomic,readonly) TVPlayer * player;                                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,copy) id didSelectOptionBlock;                                                    //@synthesize didSelectOptionBlock=_didSelectOptionBlock - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(TVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(AVTransportBarViewController *)transportBarViewController;
-(void)resumeMenuSelection:(id)arg1 ;
-(_TVPlayerResumeMenuView *)resumeMenuView;
-(void)_updateTransportBarForFocusedView:(id)arg1 ;
-(id)didSelectOptionBlock;
-(void)setDidSelectOptionBlock:(id)arg1 ;
@end

