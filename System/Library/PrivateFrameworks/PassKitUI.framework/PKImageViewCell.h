/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UIImage;

@interface PKImageViewCell : UITableViewCell {

	BOOL _matchCellBackgroundToImage;
	long long _imageViewContentMode;

}

@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) long long imageViewContentMode;               //@synthesize imageViewContentMode=_imageViewContentMode - In the implementation block
@property (assign,nonatomic) BOOL matchCellBackgroundToImage;              //@synthesize matchCellBackgroundToImage=_matchCellBackgroundToImage - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setContentMode:(long long)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(long long)imageViewContentMode;
-(void)setMatchCellBackgroundToImage:(BOOL)arg1 ;
-(void)setImageViewContentMode:(long long)arg1 ;
-(BOOL)matchCellBackgroundToImage;
@end
