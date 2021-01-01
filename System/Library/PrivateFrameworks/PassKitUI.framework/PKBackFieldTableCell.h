/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKPassField, UITextView;

@interface PKBackFieldTableCell : PKTableViewCell {

	PKPassField* _field;
	UITextView* _valueTextView;
	double _cachedWidth;
	double _computedHeight;
	BOOL _showLinks;

}

@property (nonatomic,retain) PKPassField * field;              //@synthesize field=_field - In the implementation block
@property (assign,nonatomic) BOOL showLinks;                   //@synthesize showLinks=_showLinks - In the implementation block
+(id)reuseIdentifier;
+(id)titleFont;
+(id)valueFont;
+(id)_linkTextAttributes;
-(void)dealloc;
-(PKPassField *)field;
-(void)setField:(PKPassField *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setShowLinks:(BOOL)arg1 ;
-(id)initWithField:(id)arg1 showLinks:(BOOL)arg2 ;
-(void)_detectLinks;
-(CGRect)_textBounds;
-(void)_setupTextAttributes;
-(BOOL)showLinks;
@end

