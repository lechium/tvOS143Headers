/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKAuthenticateViewController <NSObject>
@property (nonatomic,copy) id completionHandler; 
@property (assign,nonatomic) BOOL disablesSignIn; 
@required
-(void)setCompletionHandler:(/*^block*/id)arg1;
-(id)completionHandler;
-(void)showPasswordChangeAlertWithURL:(id)arg1;
-(BOOL)disablesSignIn;
-(void)setDisablesSignIn:(BOOL)arg1;

@end
