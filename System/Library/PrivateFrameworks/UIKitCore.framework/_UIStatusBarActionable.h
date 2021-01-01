/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class _UIStatusBarAction;


@protocol _UIStatusBarActionable <NSObject>
@property (nonatomic,retain) _UIStatusBarAction * action; 
@property (assign,nonatomic) UIEdgeInsets actionInsets; 
@property (nonatomic,readonly) id<UILayoutItem> layoutItem; 
@required
-(_UIStatusBarAction *)action;
-(void)setAction:(id)arg1;
-(id<UILayoutItem>)layoutItem;
-(void)setActionInsets:(UIEdgeInsets)arg1;
-(UIEdgeInsets)actionInsets;

@end

