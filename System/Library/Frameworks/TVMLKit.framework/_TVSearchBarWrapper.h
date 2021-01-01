/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UISearchBar;

@interface _TVSearchBarWrapper : UIView {

	UISearchBar* _searchBar;
	BOOL _enabled;

}

@property (nonatomic,retain) UISearchBar * searchBar;                    //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(UISearchBar *)searchBar;
-(BOOL)canBecomeFocused;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
@end

