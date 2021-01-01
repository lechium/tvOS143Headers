/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GKGame;


@protocol GKExtensionHostProtocol <NSObject>
@property (nonatomic,retain) GKGame * game; 
@optional
-(void)remoteViewControllerIsCanceling;
-(void)remoteViewControllerIsFinishing;

@required
-(GKGame *)game;
-(void)setGame:(id)arg1;
-(void)messageFromExtension:(id)arg1;

@end

