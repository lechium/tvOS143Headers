/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol SCNActionable <NSObject>
@property (nonatomic,readonly) BOOL hasActions; 
@property (nonatomic,readonly) NSArray * actionKeys; 
@required
-(void)removeAllActions;
-(id)actionForKey:(id)arg1;
-(void)runAction:(id)arg1;
-(NSArray *)actionKeys;
-(void)runAction:(id)arg1 forKey:(id)arg2;
-(void)removeActionForKey:(id)arg1;
-(void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)runAction:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)hasActions;

@end

