/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController;

@interface SMUPasswordController : NSObject {

	/*^block*/id _passwordEnteredHandler;
	/*^block*/id _passwordEntryCancelledHandler;

}

@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,copy) id passwordEnteredHandler;                          //@synthesize passwordEnteredHandler=_passwordEnteredHandler - In the implementation block
@property (nonatomic,copy) id passwordEntryCancelledHandler;                   //@synthesize passwordEntryCancelledHandler=_passwordEntryCancelledHandler - In the implementation block
-(void)dismiss;
-(UIViewController *)viewController;
-(id)initWithTitle:(id)arg1 passwordLength:(long long)arg2 ;
-(id)passwordEnteredHandler;
-(void)setPasswordEnteredHandler:(id)arg1 ;
-(id)passwordEntryCancelledHandler;
-(void)setPasswordEntryCancelledHandler:(id)arg1 ;
@end
