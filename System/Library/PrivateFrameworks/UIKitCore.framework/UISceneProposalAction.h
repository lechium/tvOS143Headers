/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class NSString, BSAction;

@interface UISceneProposalAction : BSAction

@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
@property (nonatomic,copy,readonly) BSAction * action; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(BSAction *)action;
-(NSString *)sceneIdentifier;
-(long long)UIActionType;
-(id)initWithSceneIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

