/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UITextField, UIColor;


@protocol _UISearchSuggestionControllerDelegate <NSObject>
@property (nonatomic,readonly) UITextField * searchTextField; 
@property (nonatomic,readonly) UIColor * searchTextColor; 
@property (nonatomic,readonly) UIColor * searchPlaceholderColor; 
@optional
-(UITextField *)searchTextField;
-(UIColor *)searchTextColor;
-(UIColor *)searchPlaceholderColor;

@required
-(void)searchSuggestionController:(id)arg1 didSelectSuggestion:(id)arg2;

@end

