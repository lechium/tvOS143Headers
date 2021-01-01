/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage;

@interface _UISliderControlStateContent : NSObject {

	UIImage* _thumb;
	UIImage* _minTrack;
	UIImage* _maxTrack;

}

@property (nonatomic,retain) UIImage * thumb;                 //@synthesize thumb=_thumb - In the implementation block
@property (nonatomic,retain) UIImage * minTrack;              //@synthesize minTrack=_minTrack - In the implementation block
@property (nonatomic,retain) UIImage * maxTrack;              //@synthesize maxTrack=_maxTrack - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
-(BOOL)isEmpty;
-(void)setThumb:(UIImage *)arg1 ;
-(void)setMinTrack:(UIImage *)arg1 ;
-(void)setMaxTrack:(UIImage *)arg1 ;
-(UIImage *)thumb;
-(UIImage *)minTrack;
-(UIImage *)maxTrack;
@end

