/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIScrollView;


@protocol UIScrollAccessory
@property (assign,nonatomic,__weak) UIScrollView * scrollView; 
@property (assign,nonatomic) long long edge; 
@property (nonatomic,readonly) BOOL overlay; 
@required
-(void)update;
-(BOOL)overlay;
-(UIScrollView *)scrollView;
-(void)setScrollView:(id)arg1;
-(long long)edge;
-(void)setEdge:(long long)arg1;

@end
