/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class TVLPlayerWindow;

@interface _TVLPlayerWindowRootViewController : UIViewController {

	BOOL appearedOnce;
	TVLPlayerWindow* _playerWindow;

}

@property (assign,nonatomic,__weak) TVLPlayerWindow * playerWindow;              //@synthesize playerWindow=_playerWindow - In the implementation block
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setPlayerWindow:(TVLPlayerWindow *)arg1 ;
-(TVLPlayerWindow *)playerWindow;
@end

