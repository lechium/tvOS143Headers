/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PBSViewServicePresenter.h>

@protocol TVPPlayback;
@class TVNavigationController, UITapGestureRecognizer, UIView, NSString;

@interface TVMusicRemoteNowPlayingViewController : UIViewController <PBSViewServicePresenter> {

	TVNavigationController* _navigationController;
	UITapGestureRecognizer* _menuGestureRecognizer;
	id<TVPPlayback> _player;
	UIView* _nowPlayingWallPaper;

}

@property (nonatomic,retain) TVNavigationController * navigationController;               //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuGestureRecognizer;              //@synthesize menuGestureRecognizer=_menuGestureRecognizer - In the implementation block
@property (nonatomic,retain) id<TVPPlayback> player;                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) UIView * nowPlayingWallPaper;                                //@synthesize nowPlayingWallPaper=_nowPlayingWallPaper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(id<TVPPlayback>)player;
-(void)setPlayer:(id<TVPPlayback>)arg1 ;
-(void)viewDidLoad;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(TVNavigationController *)navigationController;
-(void)setNavigationController:(TVNavigationController *)arg1 ;
-(UITapGestureRecognizer *)menuGestureRecognizer;
-(void)setMenuGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_menuPressed:(id)arg1 ;
-(void)_playerDidChangeState:(id)arg1 ;
-(void)_dismissRemoteViewController;
-(void)viewServiceBeginPresentationWithOptions:(id)arg1 ;
-(void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(UIView *)nowPlayingWallPaper;
-(void)setNowPlayingWallPaper:(UIView *)arg1 ;
@end

