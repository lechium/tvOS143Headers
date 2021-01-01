/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSTextLayoutOrientationProvider.h>

@protocol NSTextContainerView;
@class NSLayoutManager, UIView, NSTextLayoutManager, NSArray, NSDictionary;

@interface NSTextContainer : NSObject <NSSecureCoding, NSTextLayoutOrientationProvider> {

	NSLayoutManager* _layoutManager;
	UIView*<NSTextContainerView> _textView;
	CGSize _size;
	double _lineFragmentPadding;
	unsigned long long _maximumLines;
	struct {
		unsigned widthTracksTextView : 1;
		unsigned heightTracksTextView : 1;
		unsigned observingFrameChanges : 1;
		unsigned lineBreakMode : 4;
		unsigned oldAPI : 1;
		unsigned _reserved : 8;
	}  _tcFlags;
	NSTextLayoutManager* _textLayoutManager;
	NSArray* _exclusionPaths;
	CGPathRef _cachedBoundingPath;
	CFArrayRef _cachedClippingAttributes;
	CFArrayRef _cachedBounds;
	double _cacheBoundsMinY;
	double _cacheBoundsMaxY;
	double _minimumWidth;
	long long _layoutOrientation;
	NSDictionary* _attributesForExtraLineFragment;
	long long _applicationFrameworkContext;
	BOOL _textViewSupportsAdaptiveColor;

}

@property (assign,nonatomic) NSLayoutManager * layoutManager; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSArray * exclusionPaths; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double lineFragmentPadding; 
@property (assign,nonatomic) unsigned long long maximumNumberOfLines; 
@property (getter=isSimpleRectangularTextContainer,nonatomic,readonly) BOOL simpleRectangularTextContainer; 
@property (assign,nonatomic) BOOL widthTracksTextView; 
@property (assign,nonatomic) BOOL heightTracksTextView; 
@property (nonatomic,readonly) long long layoutOrientation; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)_commonInit;
-(CGSize)containerSize;
-(void)setContainerSize:(CGSize)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(void)setTextLayoutManager:(id)arg1 ;
-(id)textLayoutManager;
-(long long)layoutOrientation;
-(double)lineFragmentPadding;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)setLineFragmentPadding:(double)arg1 ;
-(NSLayoutManager *)layoutManager;
-(id)renderingColorForDocumentColor:(id)arg1 ;
-(CGPoint)textContainerOrigin;
-(id)textView;
-(void)invalidateTextContainerOrigin;
-(NSEdgeInsets)textContainerInsetsForView:(id)arg1 ;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 remainingRect:(CGRect*)arg2 ;
-(BOOL)isSimpleRectangularTextContainer;
-(id)selectedTextAttributes;
-(id)markedTextAttributesAtCharacterIndex:(long long)arg1 effectiveRange:(out NSRange*)arg2 ;
-(void)setLayoutManager:(NSLayoutManager *)arg1 ;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(NSEdgeInsets)textContainerInsetsForView_iOS:(id)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(NSArray *)exclusionPaths;
-(void)setExclusionPaths:(NSArray *)arg1 ;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(CGRect*)arg4 ;
-(void)setWidthTracksTextView:(BOOL)arg1 ;
-(void)setHeightTracksTextView:(BOOL)arg1 ;
-(void)_resizeAccordingToTextView:(id)arg1 ;
-(double)minimumLineFragmentWidth;
-(BOOL)widthTracksTextView;
-(BOOL)heightTracksTextView;
-(id)initWithContainerSize:(CGSize)arg1 ;
-(void)replaceLayoutManager:(id)arg1 ;
-(void)setTextView:(id)arg1 ;
-(id)attributesForExtraLineFragment;
-(void)setAttributesForExtraLineFragment:(id)arg1 ;
-(void)setMinimumLineFragmentWidth:(double)arg1 ;
-(BOOL)_containerObservesTextViewFrameChanges;
-(void)_containerTextViewFrameChanged:(id)arg1 ;
@end

