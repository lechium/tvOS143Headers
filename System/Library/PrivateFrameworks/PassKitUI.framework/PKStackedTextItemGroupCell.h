/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKStackedTextItemGroupView, PKStackedTextItemGroup;

@interface PKStackedTextItemGroupCell : PKTableViewCell {

	PKStackedTextItemGroupView* _groupView;
	long long _style;
	BOOL _animated;

}

@property (nonatomic,retain) PKStackedTextItemGroup * content; 
-(PKStackedTextItemGroup *)content;
-(void)prepareForReuse;
-(void)setContent:(PKStackedTextItemGroup *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGRect)_separatorFrame;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)setContent:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithGroupViewStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

