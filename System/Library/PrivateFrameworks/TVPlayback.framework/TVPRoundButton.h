/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPFloatingButton.h>

@class UIImageView, NSMutableDictionary;

@interface TVPRoundButton : TVPFloatingButton {

	UIImageView* _imageView;
	NSMutableDictionary* _imagesForControlState;

}

@property (nonatomic,readonly) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * imagesForControlState;              //@synthesize imagesForControlState=_imagesForControlState - In the implementation block
-(void)setSelected:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(NSMutableDictionary *)imagesForControlState;
-(void)_updateImageForCurrentControlState;
-(id)imageForControlState:(unsigned long long)arg1 ;
-(id)initWithDiameter:(double)arg1 ;
-(void)setImage:(id)arg1 forControlState:(unsigned long long)arg2 ;
@end
