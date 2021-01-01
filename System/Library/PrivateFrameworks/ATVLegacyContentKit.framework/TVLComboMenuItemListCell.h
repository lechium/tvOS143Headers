/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVTableViewCell.h>
#import <libobjc.A.dylib/TVLMenuItemCell.h>

@class TVLComboMenuItemView, NSString;

@interface TVLComboMenuItemListCell : TVTableViewCell <TVLMenuItemCell> {

	TVLComboMenuItemView* _menuItemView;

}

@property (nonatomic,readonly) TVLComboMenuItemView * menuItemView;              //@synthesize menuItemView=_menuItemView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)configureWithMenuItemElement:(id)arg1 ;
-(id)labelForMarquee;
-(TVLComboMenuItemView *)menuItemView;
@end

