/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CNQuickActionButton;

@interface CNQuickActionCell : UICollectionViewCell {

	BOOL _showTitle;
	BOOL _showBackgroundPlatter;
	CNQuickActionButton* _button;

}

@property (nonatomic,retain) CNQuickActionButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL showTitle;                            //@synthesize showTitle=_showTitle - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;                //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
-(CNQuickActionButton *)button;
-(void)setButton:(CNQuickActionButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)showTitle;
-(void)setShowTitle:(BOOL)arg1 ;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(BOOL)showBackgroundPlatter;
@end

