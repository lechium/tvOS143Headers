/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSmartScaleView.h>

@protocol PXPerson;
@class UIImageView, UIView, CAShapeLayer, PXPersonImageRequest, NSDateFormatter, UILabel;

@interface PXPeopleSuggestionView : PXSmartScaleView {

	BOOL _needsSpotlightUpdate;
	BOOL _validSpotlight;
	id<PXPerson> _suggestion;
	UIImageView* _imageView;
	UIView* _suggestionView;
	UIView* _dimView;
	CAShapeLayer* _spotlightLayer;
	PXPersonImageRequest* _imageRequest;
	NSDateFormatter* _dateFormatter;
	UILabel* _dateLabel;
	CGRect _faceRect;

}

@property (assign,nonatomic) CGRect faceRect;                                  //@synthesize faceRect=_faceRect - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * suggestionView;                          //@synthesize suggestionView=_suggestionView - In the implementation block
@property (nonatomic,retain) UIView * dimView;                                 //@synthesize dimView=_dimView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * spotlightLayer;                    //@synthesize spotlightLayer=_spotlightLayer - In the implementation block
@property (assign,nonatomic) BOOL needsSpotlightUpdate;                        //@synthesize needsSpotlightUpdate=_needsSpotlightUpdate - In the implementation block
@property (assign,nonatomic) BOOL validSpotlight;                              //@synthesize validSpotlight=_validSpotlight - In the implementation block
@property (nonatomic,retain) PXPersonImageRequest * imageRequest;              //@synthesize imageRequest=_imageRequest - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                  //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                              //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,readonly) id<PXPerson> suggestion;                        //@synthesize suggestion=_suggestion - In the implementation block
-(id)init;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(id<PXPerson>)suggestion;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)dateLabel;
-(void)setDateLabel:(UILabel *)arg1 ;
-(PXPersonImageRequest *)imageRequest;
-(void)setImageRequest:(PXPersonImageRequest *)arg1 ;
-(void)viewScaleDidChange;
-(UIView *)suggestionView;
-(void)setSuggestionView:(UIView *)arg1 ;
-(void)setSuggestion:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_updateSuggestionImageWithAnimatedSpotlight:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_updateSpotlightAnimated:(BOOL)arg1 ;
-(void)_updateDateFieldWithSuggestion:(id)arg1 ;
-(CGRect)_scaledFaceRect;
-(double)_faceScale;
-(UIView *)dimView;
-(void)setDimView:(UIView *)arg1 ;
-(CAShapeLayer *)spotlightLayer;
-(void)setSpotlightLayer:(CAShapeLayer *)arg1 ;
-(BOOL)needsSpotlightUpdate;
-(void)setNeedsSpotlightUpdate:(BOOL)arg1 ;
-(BOOL)validSpotlight;
-(void)setValidSpotlight:(BOOL)arg1 ;
@end

