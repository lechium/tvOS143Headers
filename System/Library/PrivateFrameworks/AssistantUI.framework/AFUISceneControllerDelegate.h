/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFUISceneControllerDelegate <NSObject>
@optional
-(void)sceneController:(id)arg1 sceneContentStateDidChange:(id)arg2;
-(void)sceneController:(id)arg1 willInvalidateScene:(id)arg2 forReason:(unsigned long long)arg3;
-(void)sceneController:(id)arg1 sceneWasInvalidated:(id)arg2 forReason:(unsigned long long)arg3;
-(void)sceneController:(id)arg1 sceneDidUpdateClientSettings:(id)arg2;

@required
-(id)sceneConfigurationForDelegate;

@end
