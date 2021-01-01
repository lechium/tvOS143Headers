/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@class UILabel, RUILinkLabel, UIImageView, NSString;

@interface RUIHeaderView : UIView <RUIHeader> {

	UILabel* _headerLabel;
	RUILinkLabel* _detailHeaderLabel;
	UILabel* _subHeaderLabel;
	UIImageView* _iconView;
	int _imageAlignment;
	BOOL _isFirstSection;
	BOOL _customIconSize;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) UIEdgeInsets margins;                  //@synthesize margins=_margins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAttributes:(id)arg1 ;
-(void)layoutSubviews;
-(void)setImageSize:(CGSize)arg1 ;
-(id)iconImage;
-(id)subHeaderLabel;
-(double)_headerOffsetInView:(id)arg1 ;
-(BOOL)_hasIcon;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(id)headerLabel;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2 ;
-(void)setDetailText:(id)arg1 attributes:(id)arg2 ;
-(id)detailHeaderLabel;
-(void)setIconImage:(id)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(void)setHeaderAlignment:(long long)arg1 ;
-(void)setHeaderColor:(id)arg1 ;
-(void)setSubHeaderAlignment:(long long)arg1 ;
-(void)setSubHeaderColor:(id)arg1 ;
-(void)setDetailHeaderColor:(id)arg1 ;
-(double)_imageTitlePaddingInView:(id)arg1 ;
-(double)_titleSubtitlePaddingInView:(id)arg1 ;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
@end

