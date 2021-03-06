/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MRTextRenderer, MRMarimbaLayer, MPText;

@interface MRMarimbaLayoutManager : NSObject {

	MRTextRenderer* _textRenderer;
	MRMarimbaLayer* _marimbaLayer;
	MPText* _text;

}

@property (nonatomic,retain) MRMarimbaLayer * marimbaLayer;              //@synthesize marimbaLayer=_marimbaLayer - In the implementation block
@property (nonatomic,retain) MPText * text;                              //@synthesize text=_text - In the implementation block
-(id)init;
-(void)dealloc;
-(MPText *)text;
-(void)setText:(MPText *)arg1 ;
-(CGPoint)shadowOffset;
-(id)_renderer;
-(long long)lineCount;
-(void)updateWithString:(id)arg1 ;
-(id)textRenderer;
-(CGRect)currentRectForEditedText;
-(MRMarimbaLayer *)marimbaLayer;
-(void)setMarimbaLayer:(MRMarimbaLayer *)arg1 ;
@end

