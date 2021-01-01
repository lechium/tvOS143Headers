/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, SiriTVUITemplateLabel, UIImage, NSAttributedString;

@interface SiriTVUITemplateTabularDataTextCell : UICollectionViewCell {

	UIImageView* _imageView;
	SiriTVUITemplateLabel* _textLabel;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGSize imageSize;                               //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText; 
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)imageSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)layoutSubviews;
-(void)setImageSize:(CGSize)arg1 ;
-(BOOL)canBecomeFocused;
@end

