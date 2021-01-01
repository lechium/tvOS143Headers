/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class TIKeyboardCandidate, UIKBRenderConfig, UIScrollView, UIColor, UIView, UIImageView, UILabel, UIMorphingLabel, UIImage, NSString;

@interface TUIPredictionViewCell : UIView <UIScrollViewDelegate> {

	BOOL _highlighted;
	BOOL _labelTruncated;
	double _highlightMargin;
	unsigned long long _visibleSeparatorEdges;
	double _separatorMargin;
	TIKeyboardCandidate* _candidate;
	UIKBRenderConfig* _renderConfig;
	UIScrollView* _maskingScrollView;
	UIColor* _textColor;
	UIColor* _imageTintColor;
	UIView* _backgroundView;
	UIColor* _backgroundViewHighlightColor;
	UIView* _leftSeparatorView;
	UIView* _rightSeparatorView;
	UIImageView* _imageView;
	UILabel* _normalLabel;
	UIMorphingLabel* _morphingLabel;
	UIView* _secureCandidateLabel;

}

@property (nonatomic,retain) UIView * backgroundView;                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * backgroundViewHighlightColor;                   //@synthesize backgroundViewHighlightColor=_backgroundViewHighlightColor - In the implementation block
@property (nonatomic,retain) UIView * leftSeparatorView;                               //@synthesize leftSeparatorView=_leftSeparatorView - In the implementation block
@property (nonatomic,retain) UIView * rightSeparatorView;                              //@synthesize rightSeparatorView=_rightSeparatorView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (assign,getter=isLabelTruncated,nonatomic) BOOL labelTruncated;              //@synthesize labelTruncated=_labelTruncated - In the implementation block
@property (nonatomic,retain) UILabel * normalLabel;                                    //@synthesize normalLabel=_normalLabel - In the implementation block
@property (nonatomic,retain) UIMorphingLabel * morphingLabel;                          //@synthesize morphingLabel=_morphingLabel - In the implementation block
@property (nonatomic,retain) UIView * secureCandidateLabel;                            //@synthesize secureCandidateLabel=_secureCandidateLabel - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                         //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) double highlightMargin;                                   //@synthesize highlightMargin=_highlightMargin - In the implementation block
@property (assign,nonatomic) unsigned long long visibleSeparatorEdges;                 //@synthesize visibleSeparatorEdges=_visibleSeparatorEdges - In the implementation block
@property (assign,nonatomic) double separatorMargin;                                   //@synthesize separatorMargin=_separatorMargin - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * candidate;                          //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) long long layoutType; 
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                          //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) UIScrollView * maskingScrollView;                         //@synthesize maskingScrollView=_maskingScrollView - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * imageTintColor;                                 //@synthesize imageTintColor=_imageTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellHighlightColorForDarkStyle:(BOOL)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(TIKeyboardCandidate *)candidate;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)highlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(BOOL)_isPad;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setImageTintColor:(UIColor *)arg1 ;
-(UIColor *)imageTintColor;
-(void)setImageView:(UIImageView *)arg1 ;
-(long long)layoutType;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(BOOL)_usesMorphingLabelForCandidate:(id)arg1 ;
-(BOOL)_isSecureCandidate:(id)arg1 ;
-(BOOL)_isEmojiCandidate:(id)arg1 ;
-(id)_displayLabelForCandidate:(id)arg1 ;
-(id)labelViewForCandidate:(id)arg1 ;
-(id)currentTextSuggestion;
-(BOOL)useAutofillStyle;
-(id)displayTextAttributesForMultiline:(BOOL)arg1 ;
-(id)headerTextAttributes;
-(CGSize)labelTextSizeForCandidate:(id)arg1 ;
-(BOOL)candidateRequiresTruncationForBoundingWidth:(double)arg1 ;
-(id)centerTruncatedStringForString:(id)arg1 withAttributes:(id)arg2 fittingWidth:(double)arg3 ;
-(id)attributedStringRepresentationOfCandidate:(id)arg1 ;
-(void)setCandidate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setVisibleSeparatorEdges:(unsigned long long)arg1 ;
-(BOOL)_renderConfigUsesDarkStyle:(id)arg1 ;
-(void)_updateColorsForRenderConfig:(id)arg1 highlighted:(BOOL)arg2 ;
-(double)highlightMargin;
-(void)setHighlightMargin:(double)arg1 ;
-(unsigned long long)visibleSeparatorEdges;
-(double)separatorMargin;
-(void)setSeparatorMargin:(double)arg1 ;
-(UIScrollView *)maskingScrollView;
-(void)setMaskingScrollView:(UIScrollView *)arg1 ;
-(UIColor *)backgroundViewHighlightColor;
-(void)setBackgroundViewHighlightColor:(UIColor *)arg1 ;
-(UIView *)leftSeparatorView;
-(void)setLeftSeparatorView:(UIView *)arg1 ;
-(UIView *)rightSeparatorView;
-(void)setRightSeparatorView:(UIView *)arg1 ;
-(BOOL)isLabelTruncated;
-(void)setLabelTruncated:(BOOL)arg1 ;
-(UILabel *)normalLabel;
-(void)setNormalLabel:(UILabel *)arg1 ;
-(UIMorphingLabel *)morphingLabel;
-(void)setMorphingLabel:(UIMorphingLabel *)arg1 ;
-(UIView *)secureCandidateLabel;
-(void)setSecureCandidateLabel:(UIView *)arg1 ;
@end

